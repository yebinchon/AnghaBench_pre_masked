
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct rpc_query {int qid; } ;
struct rpc_connection {int dummy; } ;
typedef int HashPosition ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,unsigned long,int ) ;
 int FUNC_4 (int *,unsigned long,int ) ;
 int FUNC_5 (int *) ;
 struct rpc_query* FUNC_6 (struct rpc_connection*,double,int **) ;
 scalar_t__ FUNC_7 (int ,void**,int *) ;
 scalar_t__ FUNC_8 (int ,char**,unsigned int*,unsigned long*,int,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

void FUNC_11 (struct rpc_connection *VAR_2, zval **VAR_3, double VAR_4, zval **VAR_5) {
  HashPosition VAR_6;
  FUNC_9 (FUNC_0 (VAR_3), &VAR_6);
  zval **VAR_7;


  FUNC_5 (*VAR_5);
  while (FUNC_7 (FUNC_0 (VAR_3), (void **)&VAR_7, &VAR_6) == VAR_1) {
    char *VAR_8;
    unsigned int VAR_9;
    unsigned long VAR_10;
    if (FUNC_8 (FUNC_0 (VAR_3), &VAR_8, &VAR_9, &VAR_10, 1, &VAR_6) == VAR_0) {
      VAR_10 = 0;
    } else {
      VAR_8 = 0;
    }
    struct rpc_query *VAR_11 = FUNC_6 (VAR_2, VAR_4, VAR_7);
    FUNC_10 (FUNC_0(VAR_3), &VAR_6);
    if (VAR_8) {
      if (VAR_11) {
        FUNC_2 (*VAR_5, VAR_8, VAR_11->qid);
      } else {
        FUNC_1 (*VAR_5, VAR_8, 0);
      }
    } else {
      if (VAR_11) {
        FUNC_4 (*VAR_5, VAR_10, VAR_11->qid);
      } else {
        FUNC_3 (*VAR_5, VAR_10, 0);
      }
    }
  }



}
