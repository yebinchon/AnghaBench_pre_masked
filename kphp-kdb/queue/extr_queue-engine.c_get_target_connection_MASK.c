
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int unreliability; struct connection* next; } ;
struct conn_target {struct connection* first_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;

struct connection *FUNC_1 (struct conn_target *VAR_2) {
  struct connection *VAR_3, *VAR_4 = 0;
  int VAR_5, VAR_6 = 10000;
  if (!VAR_2) {
    return 0;
  }
  for (VAR_3 = VAR_2->first_conn; VAR_3 != (struct connection *)VAR_2; VAR_3 = VAR_3->next) {
    VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5 == VAR_0) {
      return VAR_3;
    } else if (VAR_5 == VAR_1 && VAR_3->unreliability < VAR_6) {
      VAR_6 = VAR_3->unreliability;
      VAR_4 = VAR_3;
    }
  }

  return VAR_4;
}
