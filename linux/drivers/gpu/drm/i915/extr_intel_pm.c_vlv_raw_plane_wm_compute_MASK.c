
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int plane; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct TYPE_6__ {int name; int dev; } ;
struct intel_plane {int id; TYPE_2__ base; } ;
struct TYPE_7__ {struct g4x_pipe_wm* raw; } ;
struct TYPE_8__ {TYPE_3__ vlv; } ;
struct intel_crtc_state {TYPE_4__ wm; } ;
struct g4x_pipe_wm {int* plane; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;


 int FUNC_0 (char*,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_crtc_state*,struct intel_plane_state const*) ;
 int FUNC_3 (int ) ;
 struct intel_plane* FUNC_4 (int ) ;
 int FUNC_5 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;
 int FUNC_6 (struct intel_crtc_state*,int,int,int ) ;

__attribute__((used)) static bool FUNC_7(struct intel_crtc_state *VAR_5,
         const struct intel_plane_state *VAR_6)
{
 struct intel_plane *VAR_7 = FUNC_4(VAR_6->base.plane);
 enum plane_id VAR_8 = VAR_7->id;
 int VAR_9 = FUNC_1(FUNC_3(VAR_7->base.dev));
 int VAR_10;
 bool VAR_11 = 0;

 if (!FUNC_2(VAR_5, VAR_6)) {
  VAR_11 |= FUNC_6(VAR_5, 0, VAR_8, 0);
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct g4x_pipe_wm *VAR_12 = &VAR_5->wm.vlv.raw[VAR_10];
  int VAR_13 = FUNC_5(VAR_5, VAR_6, VAR_10);
  int VAR_14 = VAR_8 == VAR_0 ? 63 : 511;

  if (VAR_13 > VAR_14)
   break;

  VAR_11 |= VAR_12->plane[VAR_8] != VAR_13;
  VAR_12->plane[VAR_8] = VAR_13;
 }


 VAR_11 |= FUNC_6(VAR_5, VAR_10, VAR_8, VAR_1);

out:
 if (VAR_11)
  FUNC_0("%s watermarks: PM2=%d, PM5=%d, DDR DVFS=%d\n",
         VAR_7->base.name,
         VAR_5->wm.vlv.raw[VAR_3].plane[VAR_8],
         VAR_5->wm.vlv.raw[VAR_4].plane[VAR_8],
         VAR_5->wm.vlv.raw[VAR_2].plane[VAR_8]);

 return VAR_11;
}
