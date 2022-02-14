
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cur; int put; scalar_t__ ib_max; } ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct nouveau_channel {int accel_done; TYPE_2__ dma; TYPE_1__ push; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_channel*,scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_2(struct nouveau_channel *VAR_0)
{
 if (VAR_0->dma.cur == VAR_0->dma.put)
  return;
 VAR_0->accel_done = 1;

 if (VAR_0->dma.ib_max) {
  FUNC_1(VAR_0, VAR_0->push.addr + (VAR_0->dma.put << 2),
         (VAR_0->dma.cur - VAR_0->dma.put) << 2);
 } else {
  FUNC_0(VAR_0->dma.cur);
 }

 VAR_0->dma.put = VAR_0->dma.cur;
}
