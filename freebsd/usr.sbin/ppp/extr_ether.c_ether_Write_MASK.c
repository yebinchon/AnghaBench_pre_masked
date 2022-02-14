
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int fd; int handler; } ;
struct etherdevice {int hook; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,void const*,size_t) ;
 struct etherdevice* FUNC_1 (int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct physical *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct etherdevice *VAR_3 = FUNC_1(VAR_0->handler);

  return FUNC_0(VAR_0->fd, VAR_3->hook, VAR_1, VAR_2) == -1 ? -1 : (ssize_t)VAR_2;
}
