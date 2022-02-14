
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_chip {int dummy; } ;


 unsigned int FUNC_0 (int ,unsigned int,int ,struct irq_chip*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(u32 VAR_1, unsigned int VAR_2,
         struct irq_chip *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
 if (!VAR_4)
  goto out;

 FUNC_1(VAR_4);
out:
 return VAR_4;
}
