
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct img_ascii_lcd_ctx {int * curr; scalar_t__ offset; int regmap; TYPE_1__* cfg; } ;
struct TYPE_2__ {unsigned int num_chars; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct img_ascii_lcd_ctx *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->cfg->num_chars; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0->regmap,
       VAR_0->offset + (VAR_1 * 8), VAR_0->curr[VAR_1]);
  if (VAR_2)
   break;
 }

 if (FUNC_2(VAR_2))
  FUNC_0("Failed to update LCD display: %d\n", VAR_2);
}
