
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ascii_lcd_ctx {scalar_t__ offset; int regmap; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;
 int FUNC_1 (struct img_ascii_lcd_ctx*) ;

__attribute__((used)) static int FUNC_2(struct img_ascii_lcd_ctx *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_3->regmap,
      VAR_3->offset + VAR_2,
      &VAR_4);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_3->regmap,
      VAR_3->offset + VAR_0,
      &VAR_4);
  if (VAR_5)
   return VAR_5;
 } while (VAR_4 & VAR_1);

 return 0;
}
