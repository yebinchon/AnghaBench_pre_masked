
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int free; int cur; int max; int put; scalar_t__ ib_max; } ;
struct TYPE_3__ {int addr; } ;
struct nouveau_channel {TYPE_2__ dma; TYPE_1__ push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_channel*,int) ;
 int FUNC_1 (struct nouveau_channel*,int *,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nouveau_channel*,int,int) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(struct nouveau_channel *VAR_3, int VAR_4, int VAR_5)
{
 uint64_t VAR_6 = 0;
 int VAR_7 = 0, VAR_8;

 if (VAR_3->dma.ib_max)
  return FUNC_3(VAR_3, VAR_4, VAR_5);

 while (VAR_3->dma.free < VAR_5) {
  VAR_8 = FUNC_1(VAR_3, &VAR_6, &VAR_7);
  if (FUNC_4(VAR_8 == -VAR_0))
   return -VAR_0;
  if (FUNC_4(VAR_8 == -VAR_1) || VAR_8 < VAR_2)
   continue;

  if (VAR_8 <= VAR_3->dma.cur) {
   VAR_3->dma.free = VAR_3->dma.max - VAR_3->dma.cur;
   if (VAR_3->dma.free >= VAR_5)
    break;





   FUNC_0(VAR_3, VAR_3->push.addr | 0x20000000);






   do {
    VAR_8 = FUNC_1(VAR_3, &VAR_6, &VAR_7);
    if (FUNC_4(VAR_8 == -VAR_0))
     return -VAR_0;
    if (FUNC_4(VAR_8 == -VAR_1))
     continue;
   } while (VAR_8 <= VAR_2);
   FUNC_2(VAR_2);




   VAR_3->dma.cur =
   VAR_3->dma.put = VAR_2;
  }







  VAR_3->dma.free = VAR_8 - VAR_3->dma.cur - 1;
 }

 return 0;
}
