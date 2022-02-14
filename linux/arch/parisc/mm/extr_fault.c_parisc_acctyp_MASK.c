
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned long
FUNC_3(unsigned long VAR_4, unsigned int VAR_5)
{
 if (VAR_4 == 6 || VAR_4 == 16)
     return VAR_1;

 switch (VAR_5 & 0xf0000000) {
 case 0x40000000:
 case 0x50000000:
  return VAR_2;

 case 0x60000000:
 case 0x70000000:
  return VAR_3;

 case 0x20000000:
 case 0x30000000:
  if (FUNC_0(VAR_5))
   return VAR_3;


 case 0x0:
  if (FUNC_0(VAR_5)) {
   if (FUNC_2(VAR_5))
    return VAR_2;
   return VAR_3;
  } else {
   if (FUNC_1(VAR_5) == VAR_0)
    return VAR_3;
  }
  return VAR_2;
 }
 return VAR_2;
}
