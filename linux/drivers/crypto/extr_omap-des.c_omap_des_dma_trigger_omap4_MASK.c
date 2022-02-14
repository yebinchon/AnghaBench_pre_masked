
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_des_dev {TYPE_1__* pdata; int * dma_lch_in; int * dma_lch_out; } ;
struct TYPE_2__ {int dma_start; int dma_enable_out; int dma_enable_in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct omap_des_dev*) ;
 int FUNC_2 (struct omap_des_dev*,int ,int) ;
 int FUNC_3 (struct omap_des_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct omap_des_dev *VAR_0, int VAR_1)
{
 u32 VAR_2, VAR_3;

 FUNC_2(VAR_0, FUNC_0(0), VAR_1);

 VAR_3 = VAR_0->pdata->dma_start;

 if (VAR_0->dma_lch_out != ((void*)0))
  VAR_3 |= VAR_0->pdata->dma_enable_out;
 if (VAR_0->dma_lch_in != ((void*)0))
  VAR_3 |= VAR_0->pdata->dma_enable_in;

 VAR_2 = VAR_0->pdata->dma_enable_out | VAR_0->pdata->dma_enable_in |
        VAR_0->pdata->dma_start;

 FUNC_3(VAR_0, FUNC_1(VAR_0), VAR_3, VAR_2);
}
