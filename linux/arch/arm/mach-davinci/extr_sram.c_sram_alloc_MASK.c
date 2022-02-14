
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ sram_dma; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (int ,size_t,scalar_t__*) ;
 int VAR_1 ;

void *FUNC_1(size_t VAR_2, dma_addr_t *VAR_3)
{
 dma_addr_t VAR_4 = VAR_0.sram_dma;

 if (VAR_3)
  *VAR_3 = 0;
 if (!VAR_1 || (VAR_3 && !VAR_4))
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2, VAR_3);

}
