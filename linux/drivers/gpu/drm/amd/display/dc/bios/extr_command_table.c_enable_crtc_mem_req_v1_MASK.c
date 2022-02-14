
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum controller_id { ____Placeholder_controller_id } controller_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_5__ {int ucEnable; int ucCRTC; int member_0; } ;
struct TYPE_4__ {scalar_t__ (* controller_id_to_atom ) (int,int *) ;} ;
typedef TYPE_2__ ENABLE_CRTC_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static enum bp_result FUNC_2(
 struct bios_parser *VAR_6,
 enum controller_id VAR_7,
 bool VAR_8)
{
 bool VAR_9 = VAR_2;
 ENABLE_CRTC_PARAMETERS VAR_10 = {0};
 uint8_t VAR_11;

 if (VAR_6->cmd_helper->controller_id_to_atom(VAR_7, &VAR_11)) {
  VAR_10.ucCRTC = VAR_11;

  if (VAR_8)
   VAR_10.ucEnable = VAR_1;
  else
   VAR_10.ucEnable = VAR_0;

  if (FUNC_0(VAR_5, VAR_10))
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_3;
 }

 return VAR_9;
}
