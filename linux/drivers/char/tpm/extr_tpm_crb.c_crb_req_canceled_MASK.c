
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tpm_chip {int dev; } ;
struct crb_priv {TYPE_1__* regs_t; } ;
struct TYPE_2__ {int ctrl_cancel; } ;


 int VAR_0 ;
 struct crb_priv* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct tpm_chip *VAR_1, u8 VAR_2)
{
 struct crb_priv *VAR_3 = FUNC_0(&VAR_1->dev);
 u32 VAR_4 = FUNC_1(&VAR_3->regs_t->ctrl_cancel);

 return (VAR_4 & VAR_0) == VAR_0;
}
