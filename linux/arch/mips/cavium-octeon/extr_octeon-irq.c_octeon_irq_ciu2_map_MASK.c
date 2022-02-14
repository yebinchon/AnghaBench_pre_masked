
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__** VAR_5 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_6,
          unsigned int VAR_7, irq_hw_number_t VAR_8)
{
 unsigned int VAR_9 = VAR_8 >> 6;
 unsigned int VAR_10 = VAR_8 & 63;





 if (VAR_9 == 7)
  return 0;

 if (VAR_9 > 7 || VAR_5[VAR_9][VAR_10] != 0)
  return -VAR_0;

 if (FUNC_0(VAR_9, VAR_10))
  FUNC_1(VAR_7, VAR_9, VAR_10, 0,
        &VAR_4,
        VAR_1);
 else
  FUNC_1(VAR_7, VAR_9, VAR_10, 0,
        &VAR_3,
        VAR_2);

 return 0;
}
