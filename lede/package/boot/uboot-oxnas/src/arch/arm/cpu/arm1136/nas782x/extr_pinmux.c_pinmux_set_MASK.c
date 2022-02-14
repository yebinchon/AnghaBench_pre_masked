
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (int) ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(int VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;


 if (VAR_8 == VAR_1)
  VAR_12 = VAR_7;
 else
  VAR_12 = VAR_6;

 FUNC_1(VAR_12 + VAR_4, FUNC_0(VAR_9));
 FUNC_1(VAR_12 + VAR_5, FUNC_0(VAR_9));
 FUNC_1(VAR_12 + VAR_3, FUNC_0(VAR_9));
 FUNC_1(VAR_12 + VAR_2, FUNC_0(VAR_9));
 FUNC_1(VAR_12 + VAR_0, FUNC_0(VAR_9));

 switch (VAR_10) {
 case 128:
 default:
  return;
  break;
 case 133:
  VAR_11 = VAR_12 + VAR_4;
  break;
 case 132:
  VAR_11 = VAR_12 + VAR_5;
  break;
 case 131:
  VAR_11 = VAR_12 + VAR_3;
  break;
 case 129:
  VAR_11 = VAR_12 + VAR_2;
  break;
 case 130:
  VAR_11 = VAR_12 + VAR_0;
  break;
 }
 FUNC_2(VAR_11, FUNC_0(VAR_9));
}
