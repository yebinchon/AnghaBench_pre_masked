
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_arm_pll {scalar_t__ base; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct iproc_arm_pll*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iproc_arm_pll *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 129:
 case 128:
  VAR_7 = 1;
  break;

 case 131:
  VAR_8 = FUNC_1(VAR_5->base + VAR_4);
  VAR_7 = VAR_8 & VAR_3;
  if (VAR_7 == 0)
   VAR_7 = 256;
  break;

 case 130:
  VAR_8 = FUNC_1(VAR_5->base + VAR_2);
  VAR_7 = VAR_8 & VAR_1;
  if (VAR_7 == 0)
   VAR_7 = 256;
  break;

 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
