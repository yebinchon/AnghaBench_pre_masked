
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned long FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_2(u16 VAR_1, u16 VAR_2)
{
 unsigned long VAR_3, VAR_4;


 if (VAR_1 == 0)
  return 0;

 VAR_4 = FUNC_0(VAR_2 * 100, VAR_1);
 if (VAR_4 <= 52) {
  VAR_3 = 3150 * VAR_1 - (unsigned long)FUNC_1(VAR_1
    * VAR_0[VAR_4] * 5930ull, 1000);
 } else if (VAR_4 <= 65) {
  VAR_3 = 2290 * VAR_1 - 2910 * VAR_2;
 } else if (VAR_4 <= 80) {
  VAR_3 = 1570 * VAR_1 - 1800 * VAR_2;
 } else if (VAR_4 <= 130) {
  VAR_3 = 338 * VAR_1 - 260 * VAR_2;
 } else {
  VAR_3 = 0;
 }

 return VAR_3 / 100000;
}
