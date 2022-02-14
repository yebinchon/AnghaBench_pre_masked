
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int fd; TYPE_1__* dl; int handler; } ;
struct ngdevice {int hook; } ;
typedef int ssize_t ;
struct TYPE_2__ {int state; } ;




 int FUNC_0 (int ,int ,void const*,size_t) ;
 struct ngdevice* FUNC_1 (int ) ;
 int FUNC_2 (struct ngdevice*,void const*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct physical *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct ngdevice *VAR_3 = FUNC_1(VAR_0->handler);

  switch (VAR_0->dl->state) {
    case 129:
    case 128:
      return FUNC_2(VAR_3, VAR_1) ? (ssize_t)VAR_2 : -1;
  }
  return FUNC_0(VAR_0->fd, VAR_3->hook, VAR_1, VAR_2) == -1 ? -1 : (ssize_t)VAR_2;
}
