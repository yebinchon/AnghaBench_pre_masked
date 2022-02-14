
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct partition_desc {int chained_desc; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int name; } ;


 struct partition_desc* FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (int ) ;
 struct irq_data* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0, struct seq_file *VAR_1)
{
 struct partition_desc *VAR_2 = FUNC_0(VAR_0);
 struct irq_chip *VAR_3 = FUNC_1(VAR_2->chained_desc);
 struct irq_data *VAR_4 = FUNC_2(VAR_2->chained_desc);

 FUNC_3(VAR_1, " %5s-%lu", VAR_3->name, VAR_4->hwirq);
}
