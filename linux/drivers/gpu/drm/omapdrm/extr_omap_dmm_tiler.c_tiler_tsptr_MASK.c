
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcm_pt {int x; int y; } ;
struct TYPE_3__ {struct tcm_pt p0; } ;
struct tiler_block {size_t fmt; TYPE_1__ area; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int slot_w; int slot_h; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (size_t,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (size_t) ;

dma_addr_t FUNC_3(struct tiler_block *VAR_1, u32 VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 struct tcm_pt *VAR_5 = &VAR_1->area.p0;
 FUNC_0(!FUNC_2(VAR_1->fmt));

 return FUNC_1(VAR_1->fmt, VAR_2,
   (VAR_5->x * VAR_0[VAR_1->fmt].slot_w) + VAR_3,
   (VAR_5->y * VAR_0[VAR_1->fmt].slot_h) + VAR_4);
}
