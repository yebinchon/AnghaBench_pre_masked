
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct axi_dma_chan {TYPE_3__* chip; } ;
typedef size_t dma_addr_t ;
struct TYPE_6__ {TYPE_2__* dw; } ;
struct TYPE_5__ {TYPE_1__* hdata; } ;
struct TYPE_4__ {int m_data_width; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static u32 FUNC_2(struct axi_dma_chan *VAR_0, dma_addr_t VAR_1,
       dma_addr_t VAR_2, size_t VAR_3)
{
 u32 VAR_4 = VAR_0->chip->dw->hdata->m_data_width;

 return FUNC_1(VAR_1 | VAR_2 | VAR_3 | FUNC_0(VAR_4));
}
