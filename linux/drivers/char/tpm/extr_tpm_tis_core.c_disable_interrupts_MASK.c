
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tpm_tis_data {scalar_t__ irq; int locality; } ;
struct TYPE_2__ {int parent; } ;
struct tpm_chip {int flags; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct tpm_tis_data* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,struct tpm_chip*) ;
 int FUNC_3 (struct tpm_tis_data*,int ,int *) ;
 int FUNC_4 (struct tpm_tis_data*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct tpm_chip *VAR_2)
{
 struct tpm_tis_data *VAR_3 = FUNC_1(&VAR_2->dev);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_3->locality), &VAR_4);
 if (VAR_5 < 0)
  VAR_4 = 0;

 VAR_4 &= ~VAR_1;
 VAR_5 = FUNC_4(VAR_3, FUNC_0(VAR_3->locality), VAR_4);

 FUNC_2(VAR_2->dev.parent, VAR_3->irq, VAR_2);
 VAR_3->irq = 0;
 VAR_2->flags &= ~VAR_0;
}
