
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int*,int*) ;

__attribute__((used)) static void FUNC_4(u32 VAR_0, int VAR_1, int VAR_2,
     int *VAR_3, int *VAR_4)
{
 int VAR_5 = 1;

 if (VAR_0 & FUNC_0(VAR_1*8 - 1)) {
  VAR_0 = ((1LL << (VAR_1 * 8)) - VAR_0);
  VAR_5 = -1;
 }
 VAR_2 = FUNC_1(VAR_2);
 if (VAR_2 >= 0) {
  *VAR_3 = VAR_5 * VAR_0 * FUNC_2(10, VAR_2);
  *VAR_4 = 0;
 } else {
  FUNC_3(VAR_0, -VAR_2, VAR_3, VAR_4);
  if (*VAR_3)
   *VAR_3 = VAR_5 * (*VAR_3);
  else
   *VAR_4 = VAR_5 * (*VAR_4);
 }
}
