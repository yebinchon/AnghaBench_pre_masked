
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int pending_queries; int status; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct connection*) ;
 int VAR_3 ;

int FUNC_3 (struct connection *VAR_4) {
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "targ_engine connection %d timeout alarm, %d queries pending, status=%d\n", VAR_4->fd, VAR_4->pending_queries, VAR_4->status);
  }
  FUNC_0 (VAR_4->status == VAR_1);
  VAR_4->flags |= VAR_0;
  return FUNC_2 (VAR_4);
}
