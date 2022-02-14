
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 unsigned int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 u32 VAR_5;
 unsigned int VAR_6 = VAR_4->irq - VAR_1;

 FUNC_0(VAR_6 >= VAR_0);

 VAR_5 = 1 << (FUNC_2() * VAR_0 + VAR_6);
 FUNC_1(VAR_5, VAR_2 + VAR_3 + sizeof(u32));
}
