
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int plane; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_plane {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_plane* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct intel_plane_state *VAR_0)
{
 struct intel_plane *VAR_1 = FUNC_6(VAR_0->base.plane);
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1->base.dev);
 enum pipe VAR_3 = VAR_1->pipe;
 u16 VAR_4[18];
 int VAR_5;

 FUNC_4(VAR_4);


 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  FUNC_0(FUNC_1(VAR_3, VAR_5),
         VAR_4[VAR_5] << 20 |
         VAR_4[VAR_5] << 10 |
         VAR_4[VAR_5]);

 FUNC_0(FUNC_2(VAR_3, 0), VAR_4[VAR_5]);
 FUNC_0(FUNC_2(VAR_3, 1), VAR_4[VAR_5]);
 FUNC_0(FUNC_2(VAR_3, 2), VAR_4[VAR_5]);
 VAR_5++;

 FUNC_0(FUNC_3(VAR_3, 0), VAR_4[VAR_5]);
 FUNC_0(FUNC_3(VAR_3, 1), VAR_4[VAR_5]);
 FUNC_0(FUNC_3(VAR_3, 2), VAR_4[VAR_5]);
 VAR_5++;
}
