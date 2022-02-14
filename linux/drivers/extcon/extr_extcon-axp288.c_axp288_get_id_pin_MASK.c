
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_extcon_info {int role_sw; scalar_t__ id_extcon; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct axp288_extcon_info *VAR_2)
{
 enum usb_role VAR_3;

 if (VAR_2->id_extcon)
  return FUNC_0(VAR_2->id_extcon, VAR_0) <= 0;


 VAR_3 = FUNC_1(VAR_2->role_sw);
 return VAR_3 != VAR_1;
}
