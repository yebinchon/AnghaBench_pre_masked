
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_des_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {int dma_enable_out; int dma_enable_in; int dma_start; } ;


 int FUNC_0 (struct omap_des_dev*) ;
 int FUNC_1 (struct omap_des_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct omap_des_dev *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->pdata->dma_enable_out | VAR_0->pdata->dma_enable_in |
        VAR_0->pdata->dma_start;

 FUNC_1(VAR_0, FUNC_0(VAR_0), 0, VAR_1);
}
