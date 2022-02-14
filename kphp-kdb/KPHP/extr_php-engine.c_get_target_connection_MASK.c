
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int unreliability; struct connection* next; } ;
struct conn_target {TYPE_1__* type; struct connection* first_conn; } ;
struct TYPE_2__ {int (* check_ready ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connection*) ;

struct connection *FUNC_1 (struct conn_target *VAR_3, int VAR_4) {
  struct connection *VAR_5, *VAR_6 = ((void*)0);
  int VAR_7 = 10000;
  if (!VAR_3) {
    return ((void*)0);
  }
  for (VAR_5 = VAR_3->first_conn; VAR_5 != (struct connection *)VAR_3; VAR_5 = VAR_5->next) {
    int VAR_8 = VAR_3->type->check_ready (VAR_5);
    if (VAR_8 == VAR_1 || (VAR_4 && VAR_8 == VAR_0)) {
      return VAR_5;
    } else if (VAR_8 == VAR_2 && VAR_5->unreliability < VAR_7) {
      VAR_7 = VAR_5->unreliability;
      VAR_6 = VAR_5;
    }
  }
  return VAR_6;
}
