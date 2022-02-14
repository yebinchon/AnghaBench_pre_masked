
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline u32 FUNC_3(u32 VAR_2, u8 VAR_3)
{
 bool VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 129:
 case 131:
  if (VAR_4)
   return (VAR_2 - FUNC_2(VAR_1) +
    0xF0000);
  return VAR_2 & 0xFFFFF;
 case 130:
  if (VAR_4)
   return (VAR_2 - FUNC_2(VAR_1) +
    0xF00000);
  return VAR_2 & 0xFFFFFF;
 case 128:
  if (VAR_4)
   return (VAR_2 -
    FUNC_2(VAR_1) +
    FUNC_0(VAR_0));
  else
   return VAR_2 & 0xFFFF;
 default:
  return VAR_2;
 }
}
