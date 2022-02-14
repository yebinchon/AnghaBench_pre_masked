
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct axi_dma_chip {TYPE_2__* dw; } ;
struct TYPE_4__ {int * chan; TYPE_1__* hdata; } ;
struct TYPE_3__ {size_t nr_channels; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct axi_dma_chip *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dw->hdata->nr_channels; VAR_2++) {
  FUNC_1(&VAR_1->dw->chan[VAR_2], VAR_0);
  FUNC_0(&VAR_1->dw->chan[VAR_2]);
 }
}
