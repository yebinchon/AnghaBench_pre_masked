
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int) ;

int FUNC_1 (struct connection *VAR_1, int VAR_2, int VAR_3) {
  FUNC_0 (1, "rpcc_execute: fd=%d, op=%x, len=%d\n", VAR_1->fd, VAR_2, VAR_3);
  return VAR_0;
}
