
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;


 int FUNC_0 (int) ;

__attribute__((used)) static long FUNC_1(u8 *VAR_1, int VAR_2, int VAR_3)
{
 long VAR_4;

 switch (VAR_3) {
 case 128:
  if (VAR_2 == VAR_0)
   VAR_4 = (VAR_1[VAR_3] + (VAR_1[VAR_3+1] << 8) - 75) * 1000;
  else
   VAR_4 = (VAR_1[VAR_3] - 75) * 1000;
  break;
 case 129:
  if (VAR_2 == VAR_0)
   VAR_3++;
  VAR_4 = (VAR_1[VAR_3] + (VAR_1[VAR_3+1] << 8)) * 1000000L;
  break;
 default:
  FUNC_0(1);
  VAR_4 = 0;
 }
 return VAR_4;
}
