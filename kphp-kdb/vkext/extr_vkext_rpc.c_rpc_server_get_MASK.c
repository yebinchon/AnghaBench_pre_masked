
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int dummy; } ;


 int VAR_0 ;
 struct rpc_server** VAR_1 ;

struct rpc_server *FUNC_0 (int VAR_2) {
  if (VAR_2 < 0 || VAR_2 >= VAR_0) {
    return 0;
  }
  return VAR_1[VAR_2];
}
