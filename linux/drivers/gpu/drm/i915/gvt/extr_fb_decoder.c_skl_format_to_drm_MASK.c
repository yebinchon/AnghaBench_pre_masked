
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






__attribute__((used)) static int FUNC_0(int VAR_1, bool VAR_2, bool VAR_3,
 int VAR_4)
{
 int VAR_5 = 12;

 switch (VAR_1) {
 case 132:
  VAR_5 = 4;
  break;
 case 131:
  VAR_5 = 5;
  break;
 case 129:
  if (VAR_2)
   VAR_5 = VAR_3 ? 6 : 7;
  else
   VAR_5 = VAR_3 ? 8 : 9;
  break;
 case 130:
  VAR_5 = VAR_2 ? 10 : 11;
  break;
 case 128:
  VAR_5 = VAR_4 >> 16;
  if (VAR_5 > 3)
   return -VAR_0;
  break;

 default:
  break;
 }

 return VAR_5;
}
