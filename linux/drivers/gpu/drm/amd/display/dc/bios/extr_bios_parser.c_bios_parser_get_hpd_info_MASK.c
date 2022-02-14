
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct graphics_object_id {int dummy; } ;
struct graphics_object_hpd_info {int hpd_active; int hpd_int_gpio_uid; } ;
struct dc_bios {int dummy; } ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_3__ {int ucPlugged_PinState; int ucHPDIntGPIOID; } ;
typedef int ATOM_OBJECT ;
typedef TYPE_1__ ATOM_HPD_INT_RECORD ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct bios_parser*,struct graphics_object_id) ;
 TYPE_1__* FUNC_2 (struct bios_parser*,int *) ;

__attribute__((used)) static enum bp_result FUNC_3(struct dc_bios *VAR_3,
 struct graphics_object_id VAR_4,
 struct graphics_object_hpd_info *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_3);
 ATOM_OBJECT *VAR_7;
 ATOM_HPD_INT_RECORD *VAR_8 = ((void*)0);

 if (!VAR_5)
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_4);

 if (!VAR_7)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_7);

 if (VAR_8 != ((void*)0)) {
  VAR_5->hpd_int_gpio_uid = VAR_8->ucHPDIntGPIOID;
  VAR_5->hpd_active = VAR_8->ucPlugged_PinState;
  return VAR_2;
 }

 return VAR_1;
}
