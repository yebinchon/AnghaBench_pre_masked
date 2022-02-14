
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_des_dev {int dma_lch_out; int dma_lch_in; int total; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct omap_des_dev*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_des_dev *VAR_0)
{
 FUNC_2("total: %d\n", VAR_0->total);

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->dma_lch_in);
 FUNC_0(VAR_0->dma_lch_out);

 return 0;
}
