
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 char FUNC_4 (scalar_t__,int) ;

void FUNC_5(char *VAR_2, u64 VAR_3)
{
 u32 VAR_4;

 FUNC_1();



 if (VAR_3 > VAR_0) {
  FUNC_2((VAR_1,
         "Expected EISAID is larger than 32 bits: "
         "0x%8.8X%8.8X, truncating",
         FUNC_0(VAR_3)));
 }



 VAR_4 = FUNC_3((u32)VAR_3);



 VAR_2[0] =
     (char)(0x40 + (((unsigned long)VAR_4 >> 26) & 0x1F));
 VAR_2[1] = (char)(0x40 + ((VAR_4 >> 21) & 0x1F));
 VAR_2[2] = (char)(0x40 + ((VAR_4 >> 16) & 0x1F));
 VAR_2[3] = FUNC_4((u64) VAR_4, 12);
 VAR_2[4] = FUNC_4((u64) VAR_4, 8);
 VAR_2[5] = FUNC_4((u64) VAR_4, 4);
 VAR_2[6] = FUNC_4((u64) VAR_4, 0);
 VAR_2[7] = 0;
}
