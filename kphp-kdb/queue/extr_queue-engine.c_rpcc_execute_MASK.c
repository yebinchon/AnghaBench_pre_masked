
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1 (struct connection *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_2 > 0) {
    FUNC_0 (VAR_1, "rpcc_execute: fd=%d, op=%d, len=%d\n", VAR_3->fd, VAR_4, VAR_5);
  }

  return VAR_0;
}
