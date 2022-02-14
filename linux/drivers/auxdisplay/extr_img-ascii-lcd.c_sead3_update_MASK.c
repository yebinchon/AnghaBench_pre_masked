
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct img_ascii_lcd_ctx {unsigned int* curr; scalar_t__ offset; int regmap; TYPE_1__* cfg; } ;
struct TYPE_2__ {unsigned int num_chars; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int) ;
 int FUNC_2 (struct img_ascii_lcd_ctx*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct img_ascii_lcd_ctx *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->cfg->num_chars; VAR_4++) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   break;

  VAR_5 = FUNC_1(VAR_3->regmap,
       VAR_3->offset + VAR_0,
       VAR_1 | VAR_4);
  if (VAR_5)
   break;

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   break;

  VAR_5 = FUNC_1(VAR_3->regmap,
       VAR_3->offset + VAR_2,
       VAR_3->curr[VAR_4]);
  if (VAR_5)
   break;
 }

 if (FUNC_3(VAR_5))
  FUNC_0("Failed to update LCD display: %d\n", VAR_5);
}
