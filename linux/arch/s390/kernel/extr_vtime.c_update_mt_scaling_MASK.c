
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int*) ;
 int* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 u64 VAR_7[8], *VAR_8;
 u64 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_2(VAR_0, VAR_6 + 1, VAR_7);
 VAR_8 = FUNC_3(VAR_2);
 VAR_10 = 1;
 VAR_11 = VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 <= VAR_6; VAR_13++) {
  VAR_9 = VAR_7[VAR_13] - VAR_8[VAR_13];
  VAR_12 += VAR_9;
  VAR_11 *= VAR_13 + 1;
  VAR_11 += VAR_9 * VAR_10;
  VAR_10 *= VAR_13 + 1;
 }
 VAR_12 *= VAR_10;
 if (VAR_12 > 0) {

  FUNC_0(VAR_5, VAR_11);
  FUNC_0(VAR_3, VAR_12);
  FUNC_1(VAR_8, VAR_7,
         sizeof(u64) * (VAR_6 + 1));
 }
 FUNC_0(VAR_4, VAR_1);
}
