
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct phy_device*,int ,int,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct phy_device *VAR_5)
{
 VAR_5->speed = VAR_4;
 VAR_5->duplex = VAR_1;
 VAR_5->link = 1;






 FUNC_1(VAR_5, FUNC_0(VAR_0), VAR_3, 0);


 FUNC_2(VAR_5, FUNC_0(VAR_0),
  VAR_3 |
  VAR_2
 );


 FUNC_1(VAR_5, FUNC_0(VAR_0), VAR_3, 0);

 return 0;
}
