
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline void FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = VAR_1->irq;
 __u32 VAR_3 = VAR_0 + (FUNC_1(VAR_2) << 4) + (FUNC_1(VAR_2) << 2);
 __u32 VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 VAR_4 |= (1 << FUNC_0(VAR_2));
 FUNC_3(VAR_4, VAR_3);
}
