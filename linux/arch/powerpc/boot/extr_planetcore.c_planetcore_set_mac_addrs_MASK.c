
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int* VAR_1 ;
 int FUNC_1 (char const*,int ,int*) ;

void FUNC_2(const char *VAR_2)
{
 u8 VAR_3[4][6];
 u64 VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_2, VAR_0, &VAR_4))
  return;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  u64 VAR_7 = (VAR_4 & ~0x000000c00000) |
                      VAR_1[VAR_5];

  for (VAR_6 = 5; VAR_6 >= 0; VAR_6--) {
   VAR_3[VAR_5][VAR_6] = VAR_7 & 0xff;
   VAR_7 >>= 8;
  }

  FUNC_0(VAR_5, VAR_3[VAR_5]);
 }
}
