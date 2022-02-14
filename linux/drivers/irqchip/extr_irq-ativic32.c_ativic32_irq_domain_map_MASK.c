
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct irq_data* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int *,int ) ;
 int FUNC_4 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_7, unsigned int VAR_8,
      irq_hw_number_t VAR_9)
{

 unsigned long VAR_10;
 u32 VAR_11;
 struct irq_data *VAR_12;
 VAR_10 = FUNC_1(VAR_3);
 VAR_12 = FUNC_2(VAR_8);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_10 & (FUNC_0(VAR_9))) {
  FUNC_3(VAR_8, &VAR_4, VAR_5);
  VAR_11 = VAR_1;
 } else {
  FUNC_3(VAR_8, &VAR_4, VAR_6);
  VAR_11 = VAR_2;
 }

 FUNC_4(VAR_12, VAR_11);
 return 0;
}
