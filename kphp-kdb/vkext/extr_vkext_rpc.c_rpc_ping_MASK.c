
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {scalar_t__ status; scalar_t__ sfd; double timeout; } ;


 int FUNC_0 () ;
 double VAR_0 ;
 scalar_t__ FUNC_1 (struct rpc_server*,double,int ) ;
 int FUNC_2 (struct rpc_server*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct rpc_server*,int,double) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5 (struct rpc_server *VAR_2) {

  if (VAR_2->status != VAR_1 || VAR_2->sfd < 0) {
    return -1;
  }
  FUNC_4 ();
  double VAR_3 = VAR_0 + VAR_2->timeout;
  if (FUNC_1 (VAR_2, VAR_3, FUNC_0 ()) < 0) {
    FUNC_2 (VAR_2);
    return -1;
  }
  if (FUNC_3 (VAR_2, 1, VAR_3) < 0) {
    FUNC_2 (VAR_2);
    return -1;
  }
  return 1;
}
