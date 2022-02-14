
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_mmio_context {int clk; int (* reg_write ) (struct regmap_mmio_context*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct regmap_mmio_context*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct regmap_mmio_context *VAR_3 = VAR_0;
 int VAR_4;

 if (!FUNC_0(VAR_3->clk)) {
  VAR_4 = FUNC_2(VAR_3->clk);
  if (VAR_4 < 0)
   return VAR_4;
 }

 VAR_3->reg_write(VAR_3, VAR_1, VAR_2);

 if (!FUNC_0(VAR_3->clk))
  FUNC_1(VAR_3->clk);

 return 0;
}
