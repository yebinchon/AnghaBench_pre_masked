
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef long s16 ;


 long FUNC_0 (long,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static long FUNC_2(const u8 VAR_0, const u16 VAR_1)
{
 switch (VAR_0) {
 case 132:
 case 129:
 case 131:
 case 128:
 case 130:

  return FUNC_0((s16)VAR_1, 100);

 case 146:
 case 145:
 case 144:
 case 142:
 case 140:
 case 143:
 case 141:

  return (VAR_1 >> 3) * 4;

 case 138:

  return VAR_1 >> 8;

 case 139:

  return -1 * (VAR_1 >> 8);

 case 136:
 case 134:
 case 133:
 case 135:

  return VAR_1 * 20 * 1000L;

 case 137:

  return (s16)VAR_1;
 }


 FUNC_1(1);
 return 0;
}
