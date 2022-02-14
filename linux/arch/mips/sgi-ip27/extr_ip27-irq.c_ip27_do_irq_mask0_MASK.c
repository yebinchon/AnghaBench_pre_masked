
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
typedef int cpuid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 struct irq_domain* FUNC_5 (struct irq_desc*) ;
 int VAR_5 ;
 int FUNC_6 (struct irq_domain*,int ) ;
 unsigned long* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_6)
{
 cpuid_t VAR_7 = FUNC_9();
 unsigned long *VAR_8 = FUNC_7(VAR_5, VAR_7);
 struct irq_domain *VAR_9;
 u64 VAR_10;
 int VAR_11;


 VAR_10 = FUNC_1(VAR_4);

 VAR_10 &= VAR_8[0];
 if (!VAR_10)
  return;
 {
  VAR_9 = FUNC_5(VAR_6);
  VAR_11 = FUNC_6(VAR_9, FUNC_2(VAR_10));
  if (VAR_11)
   FUNC_3(VAR_11);
  else
   FUNC_10();
 }

 FUNC_1(VAR_4);
}
