
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int address_lo; } ;
struct msi_desc {struct msi_msg msg; } ;
struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask const*) ;
 struct msi_desc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct msi_msg*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_1, const struct cpumask *VAR_2,
     bool VAR_3)
{
 struct msi_desc *VAR_4 = FUNC_1(VAR_1->irq);
 struct msi_msg VAR_5 = VAR_4->msg;

 VAR_5.address_lo &= 0xff0000ff;
 VAR_5.address_lo |= (FUNC_0(VAR_2) << 8);
 FUNC_2(VAR_1->irq, &VAR_5);

 return VAR_0;
}
