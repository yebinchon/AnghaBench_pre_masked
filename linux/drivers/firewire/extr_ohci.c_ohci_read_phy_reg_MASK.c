
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int phy_reg_mutex; } ;
struct fw_card {int dummy; } ;


 struct fw_ohci* FUNC_0 (struct fw_card*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fw_ohci*,int) ;

__attribute__((used)) static int FUNC_4(struct fw_card *VAR_0, int VAR_1)
{
 struct fw_ohci *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->phy_reg_mutex);
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_2(&VAR_2->phy_reg_mutex);

 return VAR_3;
}
