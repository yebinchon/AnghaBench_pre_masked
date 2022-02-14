
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, u32 VAR_1, u32 VAR_2,
         int *VAR_3, int *VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 *VAR_3 = -1;
 *VAR_4 = -1;





 VAR_6 = FUNC_0(VAR_0, VAR_1) ^ VAR_2;


 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  if (VAR_6 == FUNC_1(VAR_5)) {
   *VAR_3 = VAR_5;
   return;
  }
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if ((VAR_6 >> VAR_5) & 0x1) {
   *VAR_4 = VAR_5;
   return;
  }
 }
}
