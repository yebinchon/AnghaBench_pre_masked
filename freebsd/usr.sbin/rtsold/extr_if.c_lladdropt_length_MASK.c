
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_type; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;

int
FUNC_1(struct sockaddr_dl *VAR_1)
{
 switch (VAR_1->sdl_type) {
 case 128:
  return (FUNC_0(VAR_0 + 2));
 default:
  return (0);
 }
}
