
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iop3xx_desc_aau {TYPE_1__* src_edc; void** src; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {void* src_addr; } ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct iop3xx_desc_aau *VAR_0,
     int VAR_1, dma_addr_t VAR_2)
{
 if (VAR_1 < 4)
  VAR_0->src[VAR_1] = VAR_2;
 else
  VAR_0->src_edc[FUNC_0(VAR_1)].src_addr = VAR_2;
}
