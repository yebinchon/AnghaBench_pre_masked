
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int fd; } ;
struct etherdevice {int cs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct etherdevice*) ;

__attribute__((used)) static struct device *
FUNC_2(struct etherdevice *VAR_0, struct physical *VAR_1)
{

  FUNC_0(VAR_0->cs);
  FUNC_0(VAR_1->fd);
  VAR_1->fd = -2;
  FUNC_1(VAR_0);

  return ((void*)0);
}
