
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct pca953x_chip {TYPE_1__* regs; int regmap; } ;
struct TYPE_2__ {int invert; scalar_t__ direction; scalar_t__ output; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pca953x_chip*) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (struct pca953x_chip*,int ,int *) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pca953x_chip *VAR_1, u32 VAR_2)
{
 int VAR_3;
 u8 VAR_4[VAR_0];

 VAR_3 = FUNC_3(VAR_1->regmap, VAR_1->regs->output,
       VAR_1->regs->output + FUNC_0(VAR_1));
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_3(VAR_1->regmap, VAR_1->regs->direction,
       VAR_1->regs->direction + FUNC_0(VAR_1));
 if (VAR_3)
  goto out;


 if (VAR_2)
  FUNC_1(VAR_4, 0xFF, FUNC_0(VAR_1));
 else
  FUNC_1(VAR_4, 0, FUNC_0(VAR_1));

 VAR_3 = FUNC_2(VAR_1, VAR_1->regs->invert, VAR_4);
out:
 return VAR_3;
}
