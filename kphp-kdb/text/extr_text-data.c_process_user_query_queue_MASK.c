
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct conn_query* first_q; } ;
typedef TYPE_1__ user_t ;
struct conn_query {struct conn_query* next; } ;


 struct conn_query* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_0 ;
 int FUNC_2 (struct conn_query*,int) ;

int FUNC_3 (user_t *VAR_1) {
  struct conn_query *VAR_2, *VAR_3;

  for (VAR_2 = VAR_1->first_q; VAR_2 != FUNC_0 (VAR_1); VAR_2 = VAR_3) {
    VAR_3 = VAR_2->next;

    VAR_0--;
    FUNC_1 (VAR_2);
    FUNC_2 (VAR_2, sizeof (*VAR_2));
  }

  return 0;
}
