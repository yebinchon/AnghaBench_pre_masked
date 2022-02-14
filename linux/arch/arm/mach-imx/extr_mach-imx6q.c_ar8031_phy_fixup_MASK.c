
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0)
{
 u16 VAR_1;


 FUNC_1(VAR_0, 0xd, 0x7);
 FUNC_1(VAR_0, 0xe, 0x8016);
 FUNC_1(VAR_0, 0xd, 0x4007);

 VAR_1 = FUNC_0(VAR_0, 0xe);
 VAR_1 &= 0xffe3;
 VAR_1 |= 0x18;
 FUNC_1(VAR_0, 0xe, VAR_1);


 FUNC_1(VAR_0, 0x1d, 0x5);
 VAR_1 = FUNC_0(VAR_0, 0x1e);
 VAR_1 |= 0x0100;
 FUNC_1(VAR_0, 0x1e, VAR_1);

 return 0;
}
