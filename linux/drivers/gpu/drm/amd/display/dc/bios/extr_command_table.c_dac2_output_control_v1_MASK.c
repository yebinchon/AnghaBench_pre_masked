
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_3__ {int ucAction; } ;
typedef TYPE_1__ DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__) ;

__attribute__((used)) static enum bp_result FUNC_1(
 struct bios_parser *VAR_5, bool VAR_6)
{
 enum bp_result VAR_7 = VAR_2;
 DISPLAY_DEVICE_OUTPUT_CONTROL_PS_ALLOCATION VAR_8;

 if (VAR_6)
  VAR_8.ucAction = VAR_1;
 else
  VAR_8.ucAction = VAR_0;

 if (FUNC_0(VAR_4, VAR_8))
  VAR_7 = VAR_3;

 return VAR_7;
}
