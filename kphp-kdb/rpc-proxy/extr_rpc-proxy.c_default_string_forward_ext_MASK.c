
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cluster_bucket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_cluster_bucket* FUNC_0 (char*,int) ;
 int FUNC_1 (struct rpc_cluster_bucket) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int,char*,char*) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7 (void) {
  FUNC_2 ();
  int VAR_2;
  char VAR_3[VAR_0 + 1];
  VAR_2 = FUNC_6 (VAR_3, VAR_0);
  if (VAR_2 < 0) {
    FUNC_3 ();
    return -1;
  }
  FUNC_4 ();
  struct rpc_cluster_bucket *VAR_4 = FUNC_0 (VAR_3, VAR_2);
  if (!VAR_4) {
    FUNC_5 (VAR_1, "Can not find target for key %.*s%s", VAR_2 <= 30 ? VAR_2 : 27, VAR_3, VAR_2 <= 30 ? "" : "...");
    return -1;
  }
  return FUNC_1 (*VAR_4);
}
