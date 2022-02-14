
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_mmio_context {int clk; int attached_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct regmap_mmio_context *VAR_1 = VAR_0;

 if (!FUNC_0(VAR_1->clk)) {
  FUNC_2(VAR_1->clk);
  if (!VAR_1->attached_clk)
   FUNC_1(VAR_1->clk);
 }
 FUNC_3(VAR_0);
}
