
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int dev; } ;
struct crb_priv {scalar_t__ sm; TYPE_1__* regs_t; } ;
struct TYPE_2__ {int ctrl_cancel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (int *,char*) ;
 struct crb_priv* FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tpm_chip *VAR_3)
{
 struct crb_priv *VAR_4 = FUNC_2(&VAR_3->dev);

 FUNC_3(VAR_2, &VAR_4->regs_t->ctrl_cancel);

 if (((VAR_4->sm == VAR_1) ||
     (VAR_4->sm == VAR_0)) &&
      FUNC_0(VAR_3))
  FUNC_1(&VAR_3->dev, "ACPI Start failed\n");
}
