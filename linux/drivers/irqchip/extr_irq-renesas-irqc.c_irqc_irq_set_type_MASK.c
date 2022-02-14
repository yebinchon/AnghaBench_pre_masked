
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irqc_priv {scalar_t__ iomem; int * irq; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 struct irqc_priv* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,char*) ;
 unsigned char* VAR_2 ;
 int FUNC_5 (struct irq_data*) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct irqc_priv *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = FUNC_5(VAR_3);
 unsigned char VAR_7 = VAR_2[VAR_4 & VAR_1];
 u32 VAR_8;

 FUNC_4(&VAR_5->irq[VAR_6], "sense");

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5->iomem + FUNC_0(VAR_6));
 VAR_8 &= ~0x3f;
 VAR_8 |= VAR_7;
 FUNC_2(VAR_8, VAR_5->iomem + FUNC_0(VAR_6));
 return 0;
}
