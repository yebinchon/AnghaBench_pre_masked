
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_1)
{
 if (!FUNC_1(VAR_1))
  return 0;

 switch (VAR_1 & VAR_0) {
 case 128:
  return 1;
 case 129:
  return 2;
 default:
  FUNC_0(VAR_1);
  return 0;
 }
}
