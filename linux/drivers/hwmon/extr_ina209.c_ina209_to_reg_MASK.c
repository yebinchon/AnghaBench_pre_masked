
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 int FUNC_1 (long,int,int) ;

__attribute__((used)) static int FUNC_2(u8 VAR_1, u16 VAR_2, long VAR_3)
{
 switch (VAR_1) {
 case 128:
 case 129:

  return FUNC_1(VAR_3, -320, 320) * 100;

 case 136:
 case 134:
 case 137:
 case 135:






  return (FUNC_0(FUNC_1(VAR_3, 0, 32000), 4) << 3)
    | (VAR_2 & 0x7);

 case 133:







  return (FUNC_1(-VAR_3, 0, 255) << 8) | (VAR_2 & 0xff);

 case 132:






  return (FUNC_1(VAR_3, 0, 255) << 8) | (VAR_2 & 0xff);

 case 130:
 case 131:

  return FUNC_0(VAR_3, 20 * 1000);
 }


 return -VAR_0;
}
