
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
typedef void* dma_addr_t ;
struct TYPE_6__ {void* dest_addr; } ;
struct TYPE_5__ {void* dest_addr; } ;
struct TYPE_4__ {int id; } ;



 int FUNC_0 () ;



__attribute__((used)) static inline void FUNC_1(struct iop_adma_desc_slot *VAR_0,
     struct iop_adma_chan *VAR_1,
     dma_addr_t VAR_2)
{
 union iop3xx_desc VAR_3 = { .ptr = VAR_0->hw_desc, };

 switch (VAR_1->device->id) {
 case 129:
 case 128:
  VAR_3.dma->dest_addr = VAR_2;
  break;
 case 130:
  VAR_3.aau->dest_addr = VAR_2;
  break;
 default:
  FUNC_0();
 }
}
