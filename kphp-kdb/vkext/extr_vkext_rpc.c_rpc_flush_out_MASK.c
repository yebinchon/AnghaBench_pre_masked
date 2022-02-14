
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int out_bytes; } ;


 scalar_t__ FUNC_0 (struct rpc_server*,double,int ,int ,int) ;

__attribute__((used)) static int FUNC_1 (struct rpc_server *VAR_0, double VAR_1) {
  if (VAR_0->out_bytes) {
    if (FUNC_0 (VAR_0, VAR_1, 0, 0, VAR_0->out_bytes) < 0) {
      return -1;
    }
  }
  return VAR_0->out_bytes;
}
