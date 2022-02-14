
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rot_context {int dummy; } ;
typedef enum rot_irq_status { ____Placeholder_rot_irq_status } rot_irq_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum rot_irq_status FUNC_2(struct rot_context *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2);

 VAR_5 = FUNC_0(VAR_5);

 if (VAR_5 == VAR_3)
  return VAR_0;

 return VAR_1;
}
