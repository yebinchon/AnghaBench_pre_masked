
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx {int phy_if_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ag71xx*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_4)
{
 unsigned int VAR_5;

 switch (VAR_4->phy_if_mode) {
 case 130:
  VAR_5 = VAR_1;
  break;
 case 131:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 = VAR_2;
  break;
 case 128:
  VAR_5 = VAR_3;
  break;
 default:
  FUNC_0(1, "Impossible PHY mode defined.\n");
  return;
 }

 FUNC_1(VAR_4, VAR_5);
}
