
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi {int refcount; int engine_clk; int dev; int pixel_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mtk_dpi*) ;

__attribute__((used)) static int FUNC_4(struct mtk_dpi *VAR_0)
{
 int VAR_1;

 if (++VAR_0->refcount != 1)
  return 0;

 VAR_1 = FUNC_1(VAR_0->engine_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Failed to enable engine clock: %d\n", VAR_1);
  goto err_refcount;
 }

 VAR_1 = FUNC_1(VAR_0->pixel_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Failed to enable pixel clock: %d\n", VAR_1);
  goto err_pixel;
 }

 FUNC_3(VAR_0);
 return 0;

err_pixel:
 FUNC_0(VAR_0->engine_clk);
err_refcount:
 VAR_0->refcount--;
 return VAR_1;
}
