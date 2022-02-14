
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tv_mode {int component_only; } ;
struct intel_tv {scalar_t__ type; } ;
struct drm_connector {TYPE_2__* state; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ tv; } ;


 int FUNC_0 (struct tv_mode*) ;
 scalar_t__ VAR_0 ;
 struct intel_tv* FUNC_1 (struct drm_connector*) ;
 struct tv_mode* FUNC_2 (TYPE_2__*) ;
 struct tv_mode* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_2)
{
 struct intel_tv *VAR_3 = FUNC_1(VAR_2);
 const struct tv_mode *VAR_4 = FUNC_2(VAR_2->state);
 int VAR_5;


 if (VAR_3->type == VAR_0)
  return;


 if (!VAR_4->component_only)
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = &VAR_1[VAR_5];

  if (!VAR_4->component_only)
   break;
 }

 VAR_2->state->tv.mode = VAR_5;
}
