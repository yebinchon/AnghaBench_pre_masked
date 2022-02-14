
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; scalar_t__ asym_pause; scalar_t__ pause; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct phy_device *VAR_2)
{
 VAR_2->speed = VAR_1;
 VAR_2->duplex = VAR_0;
 VAR_2->pause = VAR_2->asym_pause = 0;
 VAR_2->link = 1;

 return 0;
}
