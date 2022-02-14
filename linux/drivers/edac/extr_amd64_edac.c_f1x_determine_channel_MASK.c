
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int dct_sel_lo; } ;


 scalar_t__ FUNC_0 (struct amd64_pvt*) ;
 scalar_t__ FUNC_1 (struct amd64_pvt*) ;
 scalar_t__ FUNC_2 (struct amd64_pvt*) ;
 int FUNC_3 (struct amd64_pvt*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u8 FUNC_6(struct amd64_pvt *VAR_0, u64 VAR_1,
    bool VAR_2, u8 VAR_3)
{
 u8 VAR_4 = (VAR_0->dct_sel_lo >> 1) & 1;

 if (FUNC_0(VAR_0))
  return 0;

 if (VAR_2)
  return VAR_4;




 if (FUNC_2(VAR_0)) {
  u8 VAR_5 = FUNC_3(VAR_0);


  if (!VAR_5)
   return VAR_1 >> 6 & 1;

  if (VAR_5 & 0x2) {
   u8 VAR_6 = VAR_5 & 0x1 ? 9 : 6;
   u32 VAR_7 = FUNC_5((u32) ((VAR_1 >> 16) & 0x1F)) & 1;

   return ((VAR_1 >> VAR_6) & 1) ^ VAR_7;
  }

  if (VAR_5 & 0x4) {
   u8 VAR_8 = VAR_5 & 0x1 ? 9 : 8;

   return (VAR_1 >> VAR_8) & 1;
  }

  return (VAR_1 >> (12 + FUNC_4(VAR_3))) & 1;
 }

 if (FUNC_1(VAR_0))
  return ~VAR_4 & 1;

 return 0;
}
