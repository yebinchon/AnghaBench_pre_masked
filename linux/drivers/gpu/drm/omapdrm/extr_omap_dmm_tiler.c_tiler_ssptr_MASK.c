
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; } ;
struct TYPE_5__ {TYPE_1__ p0; } ;
struct tiler_block {size_t fmt; TYPE_2__ area; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {int slot_w; int slot_h; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int ,int,int) ;
 int FUNC_2 (size_t) ;

dma_addr_t FUNC_3(struct tiler_block *VAR_2)
{
 FUNC_0(!FUNC_2(VAR_2->fmt));

 return VAR_0 + FUNC_1(VAR_2->fmt, 0,
   VAR_2->area.p0.x * VAR_1[VAR_2->fmt].slot_w,
   VAR_2->area.p0.y * VAR_1[VAR_2->fmt].slot_h);
}
