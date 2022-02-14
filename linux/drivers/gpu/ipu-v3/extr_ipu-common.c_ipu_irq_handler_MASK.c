
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct ipu_soc {int dummy; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct ipu_soc*,int const*,int ) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct ipu_soc* FUNC_5 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 struct ipu_soc *VAR_1 = FUNC_5(VAR_0);
 struct irq_chip *VAR_2 = FUNC_4(VAR_0);
 static const int VAR_3[] = { 0, 1, 2, 3, 10, 11, 12, 13, 14};

 FUNC_1(VAR_2, VAR_0);

 FUNC_3(VAR_1, VAR_3, FUNC_0(VAR_3));

 FUNC_2(VAR_2, VAR_0);
}
