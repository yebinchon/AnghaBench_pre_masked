
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union iop3xx_desc {TYPE_4__* aau; TYPE_2__* dma; int ptr; } ;
typedef int u32 ;
struct iop_adma_desc_slot {int hw_desc; } ;
struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_8__ {TYPE_3__* src_edc; int * src; } ;
struct TYPE_7__ {int src_addr; } ;
struct TYPE_6__ {int src_addr; } ;
struct TYPE_5__ {int id; } ;



 int FUNC_0 () ;


 size_t FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(struct iop_adma_desc_slot *VAR_0,
     struct iop_adma_chan *VAR_1,
     int VAR_2)
{
 union iop3xx_desc VAR_3 = { .ptr = VAR_0->hw_desc, };

 switch (VAR_1->device->id) {
 case 129:
 case 128:
  return VAR_3.dma->src_addr;
 case 130:
  break;
 default:
  FUNC_0();
 }

 if (VAR_2 < 4)
  return VAR_3.aau->src[VAR_2];
 else
  return VAR_3.aau->src_edc[FUNC_1(VAR_2)].src_addr;
}
