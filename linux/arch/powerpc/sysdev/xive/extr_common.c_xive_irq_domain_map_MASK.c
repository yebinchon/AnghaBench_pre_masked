
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_5, unsigned int VAR_6,
          irq_hw_number_t VAR_7)
{
 int VAR_8;





 FUNC_0(VAR_6, VAR_0);
 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_6, &VAR_4, VAR_1);

 return 0;
}
