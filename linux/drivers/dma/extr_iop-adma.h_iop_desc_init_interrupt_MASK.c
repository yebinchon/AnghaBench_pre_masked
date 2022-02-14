
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union iop3xx_desc {TYPE_3__* aau; TYPE_2__* dma; int ptr; } ;
struct iop_adma_desc_slot {int hw_desc; } ;
struct iop_adma_chan {TYPE_1__* device; } ;
struct TYPE_6__ {int * src; int dest_addr; int byte_count; } ;
struct TYPE_5__ {int src_addr; int dest_addr; int byte_count; } ;
struct TYPE_4__ {int id; } ;



 int FUNC_0 () ;


 int FUNC_1 (struct iop_adma_desc_slot*,int) ;
 int FUNC_2 (struct iop_adma_desc_slot*,int,int) ;

__attribute__((used)) static inline void
FUNC_3(struct iop_adma_desc_slot *VAR_0,
   struct iop_adma_chan *VAR_1)
{
 union iop3xx_desc VAR_2 = { .ptr = VAR_0->hw_desc, };

 switch (VAR_1->device->id) {
 case 129:
 case 128:
  FUNC_1(VAR_0, 1);
  VAR_2.dma->byte_count = 0;
  VAR_2.dma->dest_addr = 0;
  VAR_2.dma->src_addr = 0;
  break;
 case 130:
  FUNC_2(VAR_0, 2, 1);
  VAR_2.aau->byte_count = 0;
  VAR_2.aau->dest_addr = 0;
  VAR_2.aau->src[0] = 0;
  VAR_2.aau->src[1] = 0;
  break;
 default:
  FUNC_0();
 }
}
