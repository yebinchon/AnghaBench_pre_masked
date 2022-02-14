
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ascii_lcd_ctx {scalar_t__ offset; int regmap; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct img_ascii_lcd_ctx *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_2->regmap,
      VAR_2->offset + VAR_0,
      &VAR_3);
  if (VAR_4)
   return VAR_4;
 } while (VAR_3 & VAR_1);

 return 0;

}
