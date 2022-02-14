
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpu_hw_ctl {int dummy; } ;
typedef enum dpu_lm { ____Placeholder_dpu_lm } dpu_lm ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;







__attribute__((used)) static uint32_t FUNC_1(struct dpu_hw_ctl *VAR_2,
 enum dpu_lm VAR_3)
{
 uint32_t VAR_4 = 0;

 switch (VAR_3) {
 case 133:
  VAR_4 = FUNC_0(6);
  break;
 case 132:
  VAR_4 = FUNC_0(7);
  break;
 case 131:
  VAR_4 = FUNC_0(8);
  break;
 case 130:
  VAR_4 = FUNC_0(9);
  break;
 case 129:
  VAR_4 = FUNC_0(10);
  break;
 case 128:
  VAR_4 = FUNC_0(20);
  break;
 default:
  return -VAR_1;
 }

 VAR_4 |= VAR_0;

 return VAR_4;
}
