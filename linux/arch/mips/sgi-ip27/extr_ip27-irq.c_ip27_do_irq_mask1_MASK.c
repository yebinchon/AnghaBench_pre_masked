
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
typedef int cpuid_t ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 struct irq_domain* FUNC_3 (struct irq_desc*) ;
 int VAR_1 ;
 int FUNC_4 (struct irq_domain*,scalar_t__) ;
 unsigned long* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_2)
{
 cpuid_t VAR_3 = FUNC_6();
 unsigned long *VAR_4 = FUNC_5(VAR_1, VAR_3);
 struct irq_domain *VAR_5;
 u64 VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(VAR_0);

 VAR_6 &= VAR_4[1];
 if (!VAR_6)
  return;

 VAR_5 = FUNC_3(VAR_2);
 VAR_7 = FUNC_4(VAR_5, FUNC_1(VAR_6) + 64);
 if (VAR_7)
  FUNC_2(VAR_7);
 else
  FUNC_7();

 FUNC_0(VAR_0);
}
