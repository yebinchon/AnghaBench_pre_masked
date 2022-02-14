
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; TYPE_1__* string; } ;
struct chat {TYPE_2__ abort; int timeout; int pause; } ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct chat *VAR_0)
{
  FUNC_1(&VAR_0->pause);
  FUNC_1(&VAR_0->timeout);
  while (VAR_0->abort.num)
    FUNC_0(VAR_0->abort.string[--VAR_0->abort.num].data);
  VAR_0->abort.num = 0;
}
