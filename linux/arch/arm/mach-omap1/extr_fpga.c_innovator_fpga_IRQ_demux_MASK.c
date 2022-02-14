
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct irq_desc *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1();

 if (!VAR_3)
  return;

 for (VAR_4 = VAR_0;
      (VAR_4 < VAR_1) && VAR_3;
      VAR_4++, VAR_3 >>= 1) {
  if (VAR_3 & 1) {
   FUNC_0(VAR_4);
  }
 }
}
