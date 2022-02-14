
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kref {int dummy; } ;
struct display_mode_lib {int dummy; } ;
struct TYPE_9__ {int valid; } ;
struct TYPE_7__ {int (* init_sys_ctx ) (int ,struct dc*,TYPE_3__*) ;int (* init_hw ) (struct dc*) ;} ;
struct dc {TYPE_4__* current_state; TYPE_3__ vm_pa_config; int hwseq; TYPE_1__ hwss; } ;
typedef enum dc_acpi_cm_power_state { ____Placeholder_dc_acpi_cm_power_state } dc_acpi_cm_power_state ;
struct TYPE_8__ {struct display_mode_lib dml; } ;
struct TYPE_10__ {TYPE_2__ bw_ctx; struct kref refcount; int stream_count; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int FUNC_1 (struct dc*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct display_mode_lib*) ;
 struct display_mode_lib* FUNC_4 (int,int ) ;
 int FUNC_5 (struct display_mode_lib*,struct display_mode_lib*,int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (struct dc*) ;
 int FUNC_8 (int ,struct dc*,TYPE_3__*) ;

void FUNC_9(
 struct dc *VAR_1,
 enum dc_acpi_cm_power_state VAR_2)
{
 struct kref VAR_3;
 struct display_mode_lib *VAR_4 = FUNC_4(sizeof(struct display_mode_lib),
      VAR_0);

 FUNC_0(VAR_4);
 if (!VAR_4)
  return;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_1->current_state);

  VAR_1->hwss.init_hw(VAR_1);
  break;
 default:
  FUNC_0(VAR_1->current_state->stream_count == 0);






  VAR_3 = VAR_1->current_state->refcount;

  FUNC_5(VAR_4, &VAR_1->current_state->bw_ctx.dml, sizeof(struct display_mode_lib));

  FUNC_2(VAR_1->current_state);
  FUNC_6(VAR_1->current_state, 0,
    sizeof(*VAR_1->current_state));

  VAR_1->current_state->refcount = VAR_3;
  VAR_1->current_state->bw_ctx.dml = *VAR_4;

  break;
 }

 FUNC_3(VAR_4);
}
