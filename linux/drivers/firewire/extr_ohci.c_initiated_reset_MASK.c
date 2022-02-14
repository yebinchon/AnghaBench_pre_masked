
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int phy_reg_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fw_ohci*,int) ;
 int FUNC_3 (struct fw_ohci*,int,int) ;

__attribute__((used)) static int FUNC_4(struct fw_ohci *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 FUNC_0(&VAR_0->phy_reg_mutex);
 VAR_1 = FUNC_3(VAR_0, 7, 0xe0);
 if (VAR_1 >= 0) {
  VAR_1 = FUNC_2(VAR_0, 8);
  VAR_1 |= 0x40;
  VAR_1 = FUNC_3(VAR_0, 8, VAR_1);
  if (VAR_1 >= 0) {
   VAR_1 = FUNC_2(VAR_0, 12);
   if (VAR_1 >= 0) {
    if ((VAR_1 & 0x08) == 0x08) {

     VAR_2 = 0x2;
    }
   }
  }
 }
 FUNC_1(&VAR_0->phy_reg_mutex);
 return VAR_2;
}
