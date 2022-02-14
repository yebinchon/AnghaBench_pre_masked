
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi {scalar_t__ refcount; int engine_clk; int pixel_clk; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_dpi*) ;

__attribute__((used)) static void FUNC_3(struct mtk_dpi *VAR_0)
{
 if (FUNC_0(VAR_0->refcount == 0))
  return;

 if (--VAR_0->refcount != 0)
  return;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0->pixel_clk);
 FUNC_1(VAR_0->engine_clk);
}
