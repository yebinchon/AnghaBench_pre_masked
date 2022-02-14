
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttydevice {int hook; } ;
struct physical {int fd; int handler; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,void const*,size_t) ;
 struct ttydevice* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ttydevice*) ;
 int FUNC_3 (int ,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_4(struct physical *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct ttydevice *VAR_3 = FUNC_1(VAR_0->handler);

  if (FUNC_2(VAR_3))
    return FUNC_0(VAR_0->fd, VAR_3->hook, VAR_1, VAR_2) == -1 ? -1 : (ssize_t)VAR_2;
  else
    return FUNC_3(VAR_0->fd, VAR_1, VAR_2);
}
