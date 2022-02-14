
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(int VAR_5)
{
 u32 VAR_6;


 if (VAR_4)
  return 1;

 VAR_6 = FUNC_0();
 switch (VAR_5) {
 case 128:
  return VAR_6 & VAR_3;
 case 131:
  return VAR_6 & VAR_1;
 case 132:
  return VAR_6 & VAR_0;
 case 130:
 case 129:
  return VAR_6 & VAR_2;
 default:
  return 1;
 }
}
