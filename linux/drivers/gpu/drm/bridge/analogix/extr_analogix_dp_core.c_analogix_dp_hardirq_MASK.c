
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int dummy; } ;
typedef int irqreturn_t ;
typedef enum dp_irq_type { ____Placeholder_dp_irq_type } dp_irq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct analogix_dp_device *VAR_5 = VAR_4;
 irqreturn_t VAR_6 = VAR_1;
 enum dp_irq_type VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_5);
  VAR_6 = VAR_2;
 }

 return VAR_6;
}
