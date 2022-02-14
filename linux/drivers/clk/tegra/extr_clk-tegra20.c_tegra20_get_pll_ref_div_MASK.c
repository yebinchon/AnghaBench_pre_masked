
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 u32 VAR_3 = FUNC_2(VAR_2 + VAR_0) &
  VAR_1;

 switch (VAR_3) {
 case 130:
  return 1;
 case 129:
  return 2;
 case 128:
  return 4;
 default:
  FUNC_1("Invalid pll ref divider %d\n", VAR_3);
  FUNC_0();
 }
 return 0;
}
