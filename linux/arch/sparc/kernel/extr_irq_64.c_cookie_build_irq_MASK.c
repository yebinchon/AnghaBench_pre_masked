
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_chip {int dummy; } ;


 unsigned long FUNC_0 (unsigned int,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int,int ,struct irq_chip*) ;

__attribute__((used)) static unsigned int FUNC_3(u32 VAR_1, unsigned int VAR_2,
         struct irq_chip *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3);

 VAR_4 = FUNC_0(VAR_5, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_5);
  VAR_5 = 0;
 }

 return VAR_5;
}
