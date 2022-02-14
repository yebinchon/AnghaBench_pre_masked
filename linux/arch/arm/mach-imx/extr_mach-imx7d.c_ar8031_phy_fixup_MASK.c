
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


 FUNC_1(VAR_0, 0x1d, 0x1f);
 FUNC_1(VAR_0, 0x1e, 0x8);


 FUNC_1(VAR_0, 0xd, 0x3);
 FUNC_1(VAR_0, 0xe, 0x805d);
 FUNC_1(VAR_0, 0xd, 0x4003);
 VAR_1 = FUNC_0(VAR_0, 0xe);
 VAR_1 &= ~(0x1 << 8);
 FUNC_1(VAR_0, 0xe, VAR_1);

 return 0;
}
