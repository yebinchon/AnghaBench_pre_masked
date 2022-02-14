
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
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_4 + VAR_5));
 switch (VAR_6) {
 case 0x00:
  return VAR_0;
 case 0x10:
  return VAR_1;
 case 0x11:
  return VAR_2;
 default:
  return VAR_3;
 }
}
