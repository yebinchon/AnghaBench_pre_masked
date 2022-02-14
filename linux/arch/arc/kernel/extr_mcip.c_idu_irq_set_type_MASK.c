
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_6, u32 VAR_7)
{
 unsigned long VAR_8;





 if (VAR_7 & ~(VAR_3 | VAR_4))
  return -VAR_0;

 FUNC_1(&VAR_5, VAR_8);

 FUNC_0(VAR_6->hwirq, 1,
       VAR_7 & VAR_3 ? VAR_1 :
         VAR_2,
       0, 0);

 FUNC_2(&VAR_5, VAR_8);

 return 0;
}
