
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vic_device {int domain; scalar_t__ base; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct vic_device* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_1)
{
 u32 VAR_2, VAR_3;
 struct irq_chip *VAR_4 = FUNC_4(VAR_1);
 struct vic_device *VAR_5 = FUNC_5(VAR_1);

 FUNC_0(VAR_4, VAR_1);

 while ((VAR_2 = FUNC_7(VAR_5->base + VAR_0))) {
  VAR_3 = FUNC_2(VAR_2) - 1;
  FUNC_3(FUNC_6(VAR_5->domain, VAR_3));
 }

 FUNC_1(VAR_4, VAR_1);
}
