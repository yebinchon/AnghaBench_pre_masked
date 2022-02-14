
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int dct_sel_hi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct amd64_pvt*) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*) ;
 int FUNC_4 (struct amd64_pvt*) ;
 int FUNC_5 (struct amd64_pvt*,int ) ;

__attribute__((used)) static u64 FUNC_6(struct amd64_pvt *VAR_0, u8 VAR_1,
     u64 VAR_2, bool VAR_3,
     u32 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6 = FUNC_5(VAR_0, VAR_1);
 u64 VAR_7 = FUNC_4(VAR_0);
 u64 VAR_8 = (u64)(VAR_0->dct_sel_hi & 0xFFFFFC00) << 16;

 if (VAR_3) {
  if ((!(VAR_4 >> 16) ||
       VAR_4 < FUNC_2(VAR_0)) &&
      FUNC_3(VAR_0) &&
      (VAR_2 >= FUNC_0(32)))
   VAR_5 = VAR_7;
  else
   VAR_5 = VAR_8;
 } else {
  if (FUNC_3(VAR_0) && (VAR_2 >= FUNC_0(32)))
   VAR_5 = VAR_7;
  else
   VAR_5 = VAR_6;
 }

 return (VAR_2 & FUNC_1(47,6)) - (VAR_5 & FUNC_1(47,23));
}
