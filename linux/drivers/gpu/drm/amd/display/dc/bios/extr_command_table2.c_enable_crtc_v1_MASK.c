
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct enable_crtc_parameters {int enable; int crtc_id; int member_0; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum controller_id { ____Placeholder_controller_id } controller_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_2__ {scalar_t__ (* controller_id_to_atom ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct enable_crtc_parameters) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_6,
 enum controller_id VAR_7,
 bool VAR_8)
{
 bool VAR_9 = VAR_3;
 struct enable_crtc_parameters VAR_10 = {0};
 uint8_t VAR_11;

 if (VAR_6->cmd_helper->controller_id_to_atom(VAR_7, &VAR_11))
  VAR_10.crtc_id = VAR_11;
 else
  return VAR_2;

 if (VAR_8)
  VAR_10.enable = VAR_1;
 else
  VAR_10.enable = VAR_0;

 if (FUNC_0(VAR_5, VAR_10))
  VAR_9 = VAR_4;

 return VAR_9;
}
