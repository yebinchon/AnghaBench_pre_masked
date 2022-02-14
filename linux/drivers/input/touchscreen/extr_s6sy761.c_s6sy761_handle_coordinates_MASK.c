
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6sy761_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct s6sy761_data*,int*,int) ;
 int FUNC_1 (struct s6sy761_data*,int*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct s6sy761_data *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;

 if (FUNC_2(!(VAR_3[0] & VAR_0)))
  return;

 VAR_4 = ((VAR_3[0] & VAR_0) >> 2) - 1;
 VAR_5 = (VAR_3[0] & VAR_1) >> 6;

 switch (VAR_5) {

 case 130:
  break;
 case 128:
  FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 case 129:
 case 131:
  FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 }
}
