
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_plane_state {int dummy; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int name; TYPE_1__ base; int state; } ;
struct intel_plane {size_t id; TYPE_2__ base; } ;
struct intel_crtc_state {scalar_t__* data_rate; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {int name; TYPE_3__ base; int state; } ;
struct intel_crtc {TYPE_4__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_plane*,struct intel_crtc_state*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct intel_crtc_state*,struct intel_plane_state*,int) ;
 struct intel_crtc_state* FUNC_5 (int ) ;
 struct intel_plane_state* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_1,
      struct intel_plane *VAR_2)
{
 struct intel_crtc_state *VAR_3 =
  FUNC_5(VAR_1->base.state);
 struct intel_plane_state *VAR_4 =
  FUNC_6(VAR_2->base.state);

 FUNC_0("Disabling [PLANE:%d:%s] on [CRTC:%d:%s]\n",
        VAR_2->base.base.id, VAR_2->base.name,
        VAR_1->base.base.id, VAR_1->base.name);

 FUNC_4(VAR_3, VAR_4, 0);
 FUNC_1(VAR_3);
 VAR_3->data_rate[VAR_2->id] = 0;

 if (VAR_2->id == VAR_0)
  FUNC_3(&VAR_1->base);

 FUNC_2(VAR_2, VAR_3);
}
