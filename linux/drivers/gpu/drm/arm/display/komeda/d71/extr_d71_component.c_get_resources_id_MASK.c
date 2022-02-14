
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(u32 VAR_10, u32 *VAR_11, u32 *VAR_12)
{
 u32 VAR_13 = FUNC_0(VAR_10);
 u32 VAR_14 = VAR_13;

 switch (FUNC_1(VAR_10)) {
 case 128:
  VAR_13 = VAR_9;
  break;
 case 132:
  VAR_13 = VAR_7;
  break;
 case 133:
  VAR_14 = VAR_13 / VAR_1;
  VAR_13 %= VAR_1;
  VAR_13 += VAR_6;
  break;
 case 135:
  VAR_13 += VAR_2;
  break;
 case 129:
  VAR_14 = VAR_13 / VAR_0;
  VAR_13 %= VAR_0;
  VAR_13 += VAR_4;
  break;
 case 130:
  VAR_13 += VAR_3;
  break;
 case 134:
  VAR_13 = VAR_5;
  break;
 case 131:
  VAR_13 = VAR_8;
  break;
 default:
  VAR_13 = 0xFFFFFFFF;
 }

 if (VAR_12)
  *VAR_12 = VAR_13;

 if (VAR_11)
  *VAR_11 = VAR_14;
}
