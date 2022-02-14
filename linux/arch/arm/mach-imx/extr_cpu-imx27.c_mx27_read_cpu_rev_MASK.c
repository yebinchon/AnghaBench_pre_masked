
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(void)
{
 u32 VAR_7;





 VAR_7 = FUNC_1(FUNC_0(VAR_4 + VAR_5));

 VAR_6 = (int)((VAR_7 >> 12) & 0xFFFF);

 switch (VAR_7 >> 28) {
 case 0:
  return VAR_0;
 case 1:
  return VAR_1;
 case 2:
  return VAR_2;
 default:
  return VAR_3;
 }
}
