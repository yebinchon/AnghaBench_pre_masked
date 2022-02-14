
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_2__* fixed_mode; } ;
struct TYPE_7__ {int panel_orientation; } ;
struct TYPE_11__ {TYPE_1__ display_info; TYPE_4__* state; } ;
struct intel_connector {TYPE_3__ panel; TYPE_5__ base; } ;
struct TYPE_10__ {int scaling_mode; } ;
struct TYPE_8__ {int vdisplay; int hdisplay; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (struct intel_connector*) ;

__attribute__((used)) static void FUNC_4(struct intel_connector *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0) |
      FUNC_0(VAR_2) |
      FUNC_0(VAR_1);

 FUNC_1(&VAR_3->base,
         VAR_4);

 VAR_3->base.state->scaling_mode = VAR_0;

 VAR_3->base.display_info.panel_orientation =
   FUNC_3(VAR_3);
 FUNC_2(&VAR_3->base,
    VAR_3->panel.fixed_mode->hdisplay,
    VAR_3->panel.fixed_mode->vdisplay);
}
