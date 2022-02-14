
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int phy_reg_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fw_ohci*,int) ;
 int FUNC_3 (struct fw_ohci*,int,int) ;

__attribute__((used)) static int FUNC_4(struct fw_ohci *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->phy_reg_mutex);
 VAR_2 = FUNC_3(VAR_0, 7, VAR_1);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_2(VAR_0, 8);
 FUNC_1(&VAR_0->phy_reg_mutex);
 if (VAR_2 < 0)
  return VAR_2;

 switch (VAR_2 & 0x0f) {
 case 0x06:
  return 2;
 case 0x0e:
  return 3;
 }
 return 1;
}
