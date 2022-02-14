
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct b53_device*,int,int,int ) ;
 int FUNC_2 (struct b53_device*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_1, u8 VAR_2, u8 VAR_3,
        u64 VAR_4)
{
 if (FUNC_0(VAR_3 % 2))
  return -VAR_0;

 if (VAR_3 % 4) {
  u32 VAR_5 = (u32)(VAR_4 >> 16);
  u16 VAR_6 = (u16)VAR_4;

  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
  FUNC_2(VAR_1, VAR_2, VAR_3 + 2, VAR_5);
 } else {
  u16 VAR_7 = (u16)(VAR_4 >> 32);
  u32 VAR_8 = (u32)VAR_4;

  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8);
  FUNC_1(VAR_1, VAR_2, VAR_3 + 4, VAR_7);
 }

 return 0;
}
