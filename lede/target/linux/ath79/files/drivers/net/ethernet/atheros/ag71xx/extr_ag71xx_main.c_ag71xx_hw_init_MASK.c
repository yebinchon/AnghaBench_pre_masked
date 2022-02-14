
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx {scalar_t__ mdio_reset; scalar_t__ mac_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ag71xx *VAR_2)
{
 FUNC_2(VAR_2);

 FUNC_3(VAR_2, VAR_0, VAR_1);
 FUNC_7(20);

 FUNC_5(VAR_2->mac_reset);
 if (VAR_2->mdio_reset)
  FUNC_5(VAR_2->mdio_reset);
 FUNC_4(100);
 FUNC_6(VAR_2->mac_reset);
 if (VAR_2->mdio_reset)
  FUNC_6(VAR_2->mdio_reset);
 FUNC_4(200);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2);
}
