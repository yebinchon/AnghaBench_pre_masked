
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1)
{
 u16 VAR_2;




 FUNC_2(VAR_1, 0xd, 0x3);
 FUNC_2(VAR_1, 0xe, 0x805d);
 FUNC_2(VAR_1, 0xd, 0x4003);

 VAR_2 = FUNC_1(VAR_1, 0xe);
 FUNC_2(VAR_1, 0xe, VAR_2 & ~(1 << 8));
 FUNC_0(VAR_1);


 VAR_2 = FUNC_1(VAR_1, 0x0);
 if (VAR_2 & VAR_0)
  FUNC_2(VAR_1, 0x0, VAR_2 & ~VAR_0);

 return 0;
}
