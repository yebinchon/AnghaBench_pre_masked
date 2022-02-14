
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_query {int requester; } ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (int ,char*,struct conn_query*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct conn_query*,int) ;

int FUNC_3 (struct conn_query *VAR_3) {
  if (VAR_2 > 1) {
    FUNC_1 (VAR_1, "delete_history_query(%p,%d)\n", VAR_3, VAR_3->requester);
  }

  VAR_0--;
  FUNC_0 (VAR_3);
  FUNC_2 (VAR_3, sizeof (*VAR_3));
  return 0;
}
