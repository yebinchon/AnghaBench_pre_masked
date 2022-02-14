
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;





 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u16 VAR_2, u64 VAR_3, u8 VAR_4)
{
 u32 VAR_5;




 if (VAR_2 == 0xffff || !VAR_2)
  return 0;
 else if (VAR_3 > (VAR_0 / (VAR_2)))
  return 0;





 VAR_5 = VAR_2 * VAR_3;
 if (VAR_1 == 1) {
  if (VAR_5 < 10)
   return 0;
  VAR_5 = FUNC_0(VAR_5, 10);
 } else if (VAR_1 == 2) {
  switch (VAR_4) {
  case 130:
  case 129:
  case 128:
   VAR_5 = FUNC_0(VAR_5, 1000);
   break;
  default:
   break;
  }
 }
 return VAR_5;
}
