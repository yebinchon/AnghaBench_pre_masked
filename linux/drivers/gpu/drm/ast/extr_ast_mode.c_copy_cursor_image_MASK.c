
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (scalar_t__,int*) ;

__attribute__((used)) static u32 FUNC_2(u8 *VAR_2, u8 *VAR_3, int VAR_4, int VAR_5)
{
 union {
  u32 ul;
  u8 b[4];
 } VAR_6[2], VAR_7;
 union {
  u16 us;
  u8 b[2];
 } VAR_8;
 u32 VAR_9 = 0;
 s32 VAR_10, VAR_11;
 u8 *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 VAR_10 = VAR_1 << 1;
 VAR_11 = VAR_10 - (VAR_4 << 1);

 VAR_12 = VAR_2;
 VAR_13 = (u8 *)VAR_3 + VAR_11 + (VAR_0 - VAR_5) * VAR_10;
 VAR_16 = VAR_4 & 1;
 VAR_17 = VAR_4 >> 1;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
   VAR_6[0].ul = *((u32 *)VAR_12) & 0xf0f0f0f0;
   VAR_6[1].ul = *((u32 *)(VAR_12 + 4)) & 0xf0f0f0f0;
   VAR_7[0] = VAR_6[0].b[1] | (VAR_6[0].b[0] >> 4);
   VAR_7[1] = VAR_6[0].b[3] | (VAR_6[0].b[2] >> 4);
   VAR_7[2] = VAR_6[1].b[1] | (VAR_6[1].b[0] >> 4);
   VAR_7[3] = VAR_6[1].b[3] | (VAR_6[1].b[2] >> 4);

   FUNC_0(VAR_7, VAR_13);
   VAR_9 += VAR_7;

   VAR_13 += 4;
   VAR_12 += 8;

  }

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
   VAR_6[0].ul = *((u32 *)VAR_12) & 0xf0f0f0f0;
   VAR_8[0] = VAR_6[0].b[1] | (VAR_6[0].b[0] >> 4);
   VAR_8[1] = VAR_6[0].b[3] | (VAR_6[0].b[2] >> 4);
   FUNC_1(VAR_8, VAR_13);
   VAR_9 += (u32)VAR_8;

   VAR_13 += 2;
   VAR_12 += 4;
  }
  VAR_13 += VAR_11;
 }
 return VAR_9;
}
