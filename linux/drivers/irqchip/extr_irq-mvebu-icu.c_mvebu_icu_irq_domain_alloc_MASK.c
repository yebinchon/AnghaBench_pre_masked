
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvebu_icu_msi_data {TYPE_1__* subset_data; struct mvebu_icu* icu; } ;
struct mvebu_icu_irq_data {scalar_t__ icu_group; struct mvebu_icu* icu; int type; } ;
struct mvebu_icu {int dev; } ;
struct irq_fwspec {scalar_t__* param; } ;
struct irq_domain {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ icu_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned long,struct irq_chip*,struct mvebu_icu_irq_data*) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (struct mvebu_icu_irq_data*) ;
 struct mvebu_icu_irq_data* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct irq_domain*,struct irq_fwspec*,unsigned long*,int *) ;
 struct irq_chip VAR_5 ;
 struct irq_chip VAR_6 ;
 int FUNC_6 (struct irq_domain*,unsigned int,unsigned int) ;
 int FUNC_7 (struct irq_domain*,unsigned int,unsigned int) ;
 struct mvebu_icu_msi_data* FUNC_8 (struct irq_domain*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct irq_domain *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9, void *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 struct irq_fwspec *VAR_13 = VAR_10;
 struct mvebu_icu_msi_data *VAR_14 = FUNC_8(VAR_7);
 struct mvebu_icu *VAR_15 = VAR_14->icu;
 struct mvebu_icu_irq_data *VAR_16;
 struct irq_chip *VAR_17 = &VAR_5;

 VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_1);
 if (!VAR_16)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_7, VAR_13, &VAR_12,
          &VAR_16->type);
 if (VAR_11) {
  FUNC_0(VAR_15->dev, "failed to translate ICU parameters\n");
  goto free_irqd;
 }

 if (FUNC_9(&VAR_4))
  VAR_16->icu_group = VAR_13->param[0];
 else
  VAR_16->icu_group = VAR_14->subset_data->icu_group;
 VAR_16->icu = VAR_15;

 VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_15->dev, "failed to allocate ICU interrupt in parent domain\n");
  goto free_irqd;
 }


 VAR_11 = FUNC_2(VAR_8, VAR_3, 0);
 if (VAR_11)
  goto free_msi;

 if (VAR_16->icu_group == VAR_2)
  VAR_17 = &VAR_6;

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_12,
         VAR_17, VAR_16);
 if (VAR_11) {
  FUNC_0(VAR_15->dev, "failed to set the data to IRQ domain\n");
  goto free_msi;
 }

 return 0;

free_msi:
 FUNC_7(VAR_7, VAR_8, VAR_9);
free_irqd:
 FUNC_3(VAR_16);
 return VAR_11;
}
