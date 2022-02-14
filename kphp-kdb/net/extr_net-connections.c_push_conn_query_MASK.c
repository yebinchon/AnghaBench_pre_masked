
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_query {scalar_t__ outbound; } ;


 int FUNC_0 (struct conn_query*,struct conn_query*) ;
 int FUNC_1 (int,char*,struct conn_query*) ;

int FUNC_2 (struct conn_query *VAR_0) {
  FUNC_1 (2, "push_conn_query(%p)\n", VAR_0);
  struct conn_query *VAR_1 = (struct conn_query *) VAR_0->outbound;
  return FUNC_0 (VAR_0, VAR_1);
}
