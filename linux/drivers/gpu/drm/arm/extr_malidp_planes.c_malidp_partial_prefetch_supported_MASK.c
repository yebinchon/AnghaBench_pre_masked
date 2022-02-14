
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static bool FUNC_1(u32 VAR_5, u64 VAR_6,
           unsigned int VAR_7)
{
 bool VAR_8, VAR_9;


 if (VAR_7 & (VAR_4 | VAR_2 |
   VAR_3 | VAR_1))
  return 0;

 VAR_8 = VAR_6 & FUNC_0(0);
 VAR_9 = VAR_6 & VAR_0;

 switch (VAR_5) {
 case 146:
 case 136:
 case 142:
 case 145:
 case 134:
 case 141:
 case 130:
 case 131:
 case 133:
 case 140:
 case 137:
 case 135:
 case 138:

  return 1;

 case 148:
 case 147:
 case 149:
 case 144:

  return (!VAR_8) || (VAR_8 && VAR_9);

 case 143:

  return !VAR_8;

 case 128:
 case 132:
 case 139:
 case 129:

  return 0;

 default:
  return 0;
 }
}
