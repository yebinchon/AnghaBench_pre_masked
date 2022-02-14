
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(void)
{
 u32 VAR_5 = FUNC_3(VAR_4 + VAR_0);
 u32 VAR_6 = VAR_5 & VAR_1;
 u32 VAR_7 = VAR_5 & VAR_3;
 unsigned long VAR_8;

 switch (VAR_6) {
 case 131:
  FUNC_1(VAR_7 != VAR_2);
  VAR_8 = 12000000;
  break;
 case 130:
  FUNC_1(VAR_7 != VAR_2);
  VAR_8 = 13000000;
  break;
 case 129:
  FUNC_1(VAR_7 != VAR_2);
  VAR_8 = 19200000;
  break;
 case 128:
  FUNC_1(VAR_7 != VAR_2);
  VAR_8 = 26000000;
  break;
 default:
  FUNC_2("Unexpected clock autodetect value %d",
         VAR_6);
  FUNC_0();
  return 0;
 }

 return VAR_8;
}
