
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct irq_data {scalar_t__ irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4->irq);
 uint32_t VAR_7 = 0;

 if (VAR_6 >= 0 && VAR_6 < 85)
  return FUNC_0(VAR_6, VAR_5);

 if (VAR_4->irq == VAR_1) {
  VAR_7 = VAR_3;
  goto set_pwer;
 }

 return -VAR_0;

set_pwer:
 if (VAR_5)
  VAR_2 |= VAR_7;
 else
  VAR_2 &=~VAR_7;

 return 0;
}
