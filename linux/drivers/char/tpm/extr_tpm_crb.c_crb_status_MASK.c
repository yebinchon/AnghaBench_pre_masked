
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dev; } ;
struct crb_priv {TYPE_1__* regs_t; } ;
struct TYPE_2__ {int ctrl_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crb_priv* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_2)
{
 struct crb_priv *VAR_3 = FUNC_0(&VAR_2->dev);
 u8 VAR_4 = 0;

 if ((FUNC_1(&VAR_3->regs_t->ctrl_start) & VAR_1) !=
     VAR_1)
  VAR_4 |= VAR_0;

 return VAR_4;
}
