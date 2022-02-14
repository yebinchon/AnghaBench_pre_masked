
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int *,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct irq_domain *VAR_8,
          unsigned int VAR_9, irq_hw_number_t VAR_10)
{
 FUNC_0(FUNC_2(VAR_9));
 if (!FUNC_9(VAR_10))
  FUNC_10(VAR_10, VAR_7 +
   VAR_0);
 else
  FUNC_10(VAR_10, VAR_6 + VAR_1);
 FUNC_6(VAR_9, VAR_2);

 if (FUNC_9(VAR_10)) {
  FUNC_4(VAR_9);
  FUNC_3(VAR_9, &VAR_3,
     VAR_5);
 } else {
  FUNC_3(VAR_9, &VAR_3,
     VAR_4);
  FUNC_8(FUNC_1(FUNC_7(VAR_9)));
 }
 FUNC_5(VAR_9);

 return 0;
}
