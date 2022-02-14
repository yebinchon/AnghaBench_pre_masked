
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cirrus_device {int dummy; } ;


 int FUNC_0 (struct cirrus_device*,int) ;
 int FUNC_1 (struct cirrus_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct cirrus_device *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u8 VAR_3;

 VAR_2 = VAR_1 >> 2;
 FUNC_1(VAR_0, 0x0c, (u8)((VAR_2 >> 8) & 0xff));
 FUNC_1(VAR_0, 0x0d, (u8)(VAR_2 & 0xff));

 VAR_3 = FUNC_0(VAR_0, 0x1b);
 VAR_3 &= 0xf2;
 VAR_3 |= (VAR_2 >> 16) & 0x01;
 VAR_3 |= (VAR_2 >> 15) & 0x0c;
 FUNC_1(VAR_0, 0x1b, VAR_3);

 VAR_3 = FUNC_0(VAR_0, 0x1d);
 VAR_3 &= 0x7f;
 VAR_3 |= (VAR_2 >> 12) & 0x80;
 FUNC_1(VAR_0, 0x1d, VAR_3);
}
