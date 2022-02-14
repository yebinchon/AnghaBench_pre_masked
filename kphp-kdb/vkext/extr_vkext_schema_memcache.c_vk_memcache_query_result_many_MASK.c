
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;
struct rpc_queue {int dummy; } ;
struct rpc_query {struct tl_tree* extra; } ;


 int FUNC_0 (struct tl_tree*) ;
 int FUNC_1 (int *,long long,int ) ;
 int FUNC_2 (int *,long long,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (long long,double) ;
 int FUNC_5 (struct rpc_queue*) ;
 long long FUNC_6 (struct rpc_queue*,double) ;
 struct rpc_query* FUNC_7 (long long) ;
 int ** FUNC_8 (struct tl_tree*) ;

void FUNC_9 (struct rpc_queue *VAR_0, double VAR_1, zval **VAR_2) {
  FUNC_3 (*VAR_2);
  int VAR_3 = 0;
  while (!FUNC_5 (VAR_0)) {
    long long VAR_4 = FUNC_6 (VAR_0, VAR_1);
    if (VAR_4 <= 0) {
      return;
    }
    struct rpc_query *VAR_5 = FUNC_7 (VAR_4);
    struct tl_tree *VAR_6 = VAR_5->extra;
    FUNC_0 (VAR_6);

    if (FUNC_4 (VAR_4, VAR_1) < 0) {
      continue;
    }
    VAR_3 ++;
    zval **VAR_7 = FUNC_8 (VAR_6);
    if (VAR_7) {
      FUNC_2 (*VAR_2, VAR_4, *VAR_7);
    } else {
      FUNC_1 (*VAR_2, VAR_4, 0);
    }
  }
}
