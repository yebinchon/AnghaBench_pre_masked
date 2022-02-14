
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;







 int FUNC_0 (int) ;

__attribute__((used)) static long FUNC_1(u8 *VAR_0, int VAR_1, int VAR_2)
{
 long VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = (VAR_0[VAR_2] + (VAR_0[VAR_2+1] << 8)) * 5 / 2;
  break;
 case 132:
  VAR_3 = VAR_0[VAR_2] * 200;
  break;
 case 131:
  VAR_3 = VAR_0[VAR_2] * 1000;
  break;
 case 129:
  VAR_3 = 97 * 1000;
  break;
 case 130:
  VAR_3 = 107 * 1000;
  break;
 default:
  FUNC_0(1);
  VAR_3 = 0;
 }
 return VAR_3;
}
