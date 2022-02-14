
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int unreliability; struct connection* next; } ;
struct conn_target {struct connection* first_conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct conn_target*,struct connection*) ;

struct connection *FUNC_2 (struct conn_target *VAR_3) {
  struct connection *VAR_4, *VAR_5 = 0;
  int VAR_6, VAR_7 = 10000;
  if (!VAR_3) {
    return 0;
  }
  for (VAR_4 = VAR_3->first_conn; VAR_4 != (struct connection *) VAR_3; VAR_4 = VAR_4->next) {
    VAR_6 = FUNC_0 (VAR_4);
    if (VAR_6 == VAR_1) {
      if (VAR_0) {
        FUNC_1 (VAR_3, VAR_4);
      }
      return VAR_4;
    } else if (VAR_6 == VAR_2 && VAR_4->unreliability < VAR_7) {
      VAR_7 = VAR_4->unreliability;
      VAR_5 = VAR_4;
    }
  }

  return VAR_5;
}
