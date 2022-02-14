
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int dummy; } ;
struct rpc_nonce {int crypto_schema; int key_select; } ;
typedef int S ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rpc_nonce*,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (struct rpc_server*,double) ;
 scalar_t__ FUNC_5 (struct rpc_server*,int ,double) ;

__attribute__((used)) static int FUNC_6 (struct rpc_server *VAR_2, double VAR_3) {
  struct rpc_nonce VAR_4 = {
    .key_select = 0,
    .crypto_schema = 0
  };


  FUNC_0 (VAR_1);
  FUNC_1 (VAR_1);
  FUNC_3 (VAR_1, 12);
  FUNC_2 (VAR_1, &VAR_4, sizeof (VAR_4));
  if (FUNC_5 (VAR_2, VAR_0, VAR_3) < 0) {
    return -1;
  }
  return FUNC_4 (VAR_2, VAR_3);
}
