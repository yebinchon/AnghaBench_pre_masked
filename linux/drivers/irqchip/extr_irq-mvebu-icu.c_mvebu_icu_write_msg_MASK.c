
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_icu_msi_data {int dummy; } ;
struct mvebu_icu_irq_data {int type; unsigned int icu_group; struct mvebu_icu* icu; } ;
struct mvebu_icu {scalar_t__ base; } ;
struct msi_msg {unsigned int data; scalar_t__ address_hi; scalar_t__ address_lo; } ;
struct msi_desc {int irq; } ;
struct irq_data {scalar_t__ hwirq; struct mvebu_icu_irq_data* chip_data; int domain; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct irq_data* FUNC_1 (int ) ;
 int FUNC_2 (struct mvebu_icu*,struct mvebu_icu_msi_data*,struct msi_msg*) ;
 struct mvebu_icu_msi_data* FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct msi_desc *VAR_6, struct msi_msg *VAR_7)
{
 struct irq_data *VAR_8 = FUNC_1(VAR_6->irq);
 struct mvebu_icu_msi_data *VAR_9 = FUNC_3(VAR_8->domain);
 struct mvebu_icu_irq_data *VAR_10 = VAR_8->chip_data;
 struct mvebu_icu *VAR_11 = VAR_10->icu;
 unsigned int VAR_12;

 if (VAR_7->address_lo || VAR_7->address_hi) {

  FUNC_2(VAR_11, VAR_9, VAR_7);

  VAR_12 = VAR_7->data | VAR_1;
  if (VAR_10->type & VAR_5)
   VAR_12 |= VAR_2;
  VAR_12 |= VAR_10->icu_group << VAR_0;
 } else {

  VAR_12 = 0;
 }

 FUNC_4(VAR_12, VAR_11->base + FUNC_0(VAR_8->hwirq));
 if (VAR_8->hwirq == VAR_3 || VAR_8->hwirq == VAR_4) {
  FUNC_4(VAR_12,
          VAR_11->base + FUNC_0(VAR_3));
  FUNC_4(VAR_12,
          VAR_11->base + FUNC_0(VAR_4));
 }
}
