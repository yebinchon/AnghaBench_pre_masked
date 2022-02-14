
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_query {int requester; } ;


 int FUNC_0 (struct conn_query*) ;
 int FUNC_1 (int,char*,struct conn_query*,int ) ;
 int FUNC_2 (struct conn_query*,int) ;

int FUNC_3 (struct conn_query *VAR_0) {
  FUNC_1 (1, "delete_pending_query(%p,%p)\n", VAR_0, VAR_0->requester);

  FUNC_0 (VAR_0);
  FUNC_2 (VAR_0, sizeof (*VAR_0));
  return 0;
}
