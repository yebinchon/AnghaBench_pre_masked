
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mvebu_gpio_chip {int soc_variant; int * level_mask_regs; int regs; int * edge_mask_regs; scalar_t__ offset; int in_pol_reg; int blink_en_reg; int io_conf_reg; int out_reg; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;




 int FUNC_6 (struct mvebu_gpio_chip*) ;
 struct mvebu_gpio_chip* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct mvebu_gpio_chip *VAR_8 = FUNC_7(VAR_7);
 int VAR_9;

 FUNC_8(VAR_8->regs, VAR_6 + VAR_8->offset,
       VAR_8->out_reg);
 FUNC_8(VAR_8->regs, VAR_4 + VAR_8->offset,
       VAR_8->io_conf_reg);
 FUNC_8(VAR_8->regs, VAR_1 + VAR_8->offset,
       VAR_8->blink_en_reg);
 FUNC_8(VAR_8->regs, VAR_3 + VAR_8->offset,
       VAR_8->in_pol_reg);

 switch (VAR_8->soc_variant) {
 case 128:
 case 131:
  FUNC_8(VAR_8->regs, VAR_2 + VAR_8->offset,
        VAR_8->edge_mask_regs[0]);
  FUNC_8(VAR_8->regs, VAR_5 + VAR_8->offset,
        VAR_8->level_mask_regs[0]);
  break;
 case 129:
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   FUNC_8(VAR_8->regs,
         FUNC_2(VAR_9),
         VAR_8->edge_mask_regs[VAR_9]);
   FUNC_8(VAR_8->regs,
         FUNC_4(VAR_9),
         VAR_8->level_mask_regs[VAR_9]);
  }
  break;
 case 130:
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   FUNC_8(VAR_8->regs,
         FUNC_1(VAR_9),
         VAR_8->edge_mask_regs[VAR_9]);
   FUNC_8(VAR_8->regs,
         FUNC_3(VAR_9),
         VAR_8->level_mask_regs[VAR_9]);
  }
  break;
 default:
  FUNC_0();
 }

 if (FUNC_5(VAR_0))
  FUNC_6(VAR_8);

 return 0;
}
