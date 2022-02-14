
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_printer {int dummy; } ;
struct drm_connector_state {char* self_refresh_aware; TYPE_5__* writeback_job; TYPE_2__* crtc; struct drm_connector* connector; } ;
struct TYPE_7__ {int id; } ;
struct drm_connector {scalar_t__ connector_type; TYPE_6__* funcs; int name; TYPE_1__ base; } ;
struct TYPE_12__ {int (* atomic_print_state ) (struct drm_printer*,struct drm_connector_state const*) ;} ;
struct TYPE_11__ {TYPE_4__* fb; } ;
struct TYPE_9__ {char* id; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct TYPE_8__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_printer*,char*,char*,...) ;
 int FUNC_1 (struct drm_printer*,struct drm_connector_state const*) ;

__attribute__((used)) static void FUNC_2(struct drm_printer *VAR_1,
  const struct drm_connector_state *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->connector;

 FUNC_0(VAR_1, "connector[%u]: %s\n", VAR_3->base.id, VAR_3->name);
 FUNC_0(VAR_1, "\tcrtc=%s\n", VAR_2->crtc ? VAR_2->crtc->name : "(null)");
 FUNC_0(VAR_1, "\tself_refresh_aware=%d\n", VAR_2->self_refresh_aware);

 if (VAR_3->connector_type == VAR_0)
  if (VAR_2->writeback_job && VAR_2->writeback_job->fb)
   FUNC_0(VAR_1, "\tfb=%d\n", VAR_2->writeback_job->fb->base.id);

 if (VAR_3->funcs->atomic_print_state)
  VAR_3->funcs->atomic_print_state(VAR_1, VAR_2);
}
