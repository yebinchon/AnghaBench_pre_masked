
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
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_6, unsigned int VAR_7,
      irq_hw_number_t VAR_8)
{
 if (VAR_8 < 4 || VAR_8 >= VAR_2)
  return -VAR_0;

 VAR_5[VAR_8] = VAR_7;

 FUNC_1(VAR_7, VAR_1);
 FUNC_0(VAR_7, &VAR_3, VAR_4);
 return 0;
}
