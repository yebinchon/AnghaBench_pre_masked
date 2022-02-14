
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int sfd; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1 (struct rpc_server *VAR_4) {
  if (VAR_4->sfd >= 0) {
    FUNC_0 (VAR_4->sfd);
    VAR_4->sfd = -1;
    if (VAR_4->status == VAR_2) {
      VAR_0 --;
    }
    VAR_1 ++;
  }
  VAR_4->status = VAR_3;
}
