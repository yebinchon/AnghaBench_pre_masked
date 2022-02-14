
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(u8 VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;
 bool VAR_4;
 bool VAR_5;
 s32 VAR_6;

 VAR_3 = (VAR_0 & 0x07);
 VAR_4 = ((VAR_0 & 0x10) == 0x00);
 VAR_5 = ((VAR_0 & 0x20) == 0x00);

 if (VAR_2 < VAR_3)
  return 0;

 switch (VAR_3) {
 case 1:
  VAR_6 = VAR_1[0];
  break;
 case 2:
  if (VAR_4)
   VAR_6 = FUNC_0(VAR_1);
  else
   VAR_6 = FUNC_2(VAR_1);
  break;
 case 4:
  if (VAR_4)
   VAR_6 = FUNC_1(VAR_1);
  else
   VAR_6 = FUNC_3(VAR_1);
  break;
 default:

  VAR_6 = 0;
  break;
 }

 if (!VAR_5)
  VAR_6 = FUNC_4(VAR_6, VAR_3 * 8);

 return VAR_6;
}
