
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int dummy; } ;


 int FUNC_0 (struct amd64_pvt*) ;

__attribute__((used)) static u8 FUNC_1(struct amd64_pvt *VAR_0, u64 VAR_1,
         u8 VAR_2, int VAR_3,
         u32 VAR_4)
{
 u8 VAR_5 = 0;
 u8 VAR_6;

 if (!(VAR_2))
  return (u8)(VAR_4);

 if (VAR_3 == 2) {
  VAR_6 = (VAR_1 >> 8) & 0x3;
  VAR_5 = VAR_6 ? 0x3 : 0;
 } else if (VAR_3 == 4) {
  u8 VAR_7 = FUNC_0(VAR_0);
  switch (VAR_7) {
  case 0x4:
   VAR_5 = (VAR_1 >> 8) & 0x3;
   break;
  case 0x5:
   VAR_5 = (VAR_1 >> 9) & 0x3;
   break;
  }
 }
 return VAR_5;
}
