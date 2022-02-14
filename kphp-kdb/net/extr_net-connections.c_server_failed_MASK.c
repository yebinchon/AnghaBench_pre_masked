
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2 (struct connection *VAR_0) {
  FUNC_1 ("connection %d: call to pure virtual method\n", VAR_0->fd);
  FUNC_0 (0);
  return -1;
}
