
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
struct TYPE_8__ {TYPE_3__ g4x; } ;
struct intel_crtc_state {TYPE_4__ wm; } ;
struct g4x_pipe_wm {int* plane; int fbc; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;


 int FUNC_0 (char*,int,int,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct intel_crtc_state*,int,int) ;
 int FUNC_5 (struct intel_crtc_state*,int,int,int) ;
 int FUNC_6 (struct intel_crtc_state*,struct intel_plane_state const*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct intel_crtc_state*,struct intel_plane_state const*) ;
 int FUNC_9 (int ) ;
 struct intel_plane* FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct intel_crtc_state *VAR_5,
         const struct intel_plane_state *VAR_6)
{
 struct intel_plane *VAR_7 = FUNC_10(VAR_6->base.plane);
 int VAR_8 = FUNC_7(FUNC_9(VAR_7->base.dev));
 enum plane_id VAR_9 = VAR_7->id;
 bool VAR_10 = 0;
 int VAR_11;

 if (!FUNC_8(VAR_5, VAR_6)) {
  VAR_10 |= FUNC_5(VAR_5, 0, VAR_9, 0);
  if (VAR_9 == VAR_3)
   VAR_10 |= FUNC_4(VAR_5, 0, 0);
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  struct g4x_pipe_wm *VAR_12 = &VAR_5->wm.g4x.raw[VAR_11];
  int VAR_13, VAR_14;

  VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_11);
  VAR_14 = FUNC_3(VAR_9, VAR_11);

  if (VAR_13 > VAR_14)
   break;

  VAR_10 |= VAR_12->plane[VAR_9] != VAR_13;
  VAR_12->plane[VAR_9] = VAR_13;

  if (VAR_9 != VAR_3 ||
      VAR_11 == VAR_1)
   continue;

  VAR_13 = FUNC_6(VAR_5, VAR_6,
     VAR_12->plane[VAR_9]);
  VAR_14 = FUNC_2(VAR_11);





  if (VAR_13 > VAR_14)
   VAR_13 = VAR_4;

  VAR_10 |= VAR_12->fbc != VAR_13;
  VAR_12->fbc = VAR_13;
 }


 VAR_10 |= FUNC_5(VAR_5, VAR_11, VAR_9, VAR_4);

 if (VAR_9 == VAR_3)
  VAR_10 |= FUNC_4(VAR_5, VAR_11, VAR_4);

 out:
 if (VAR_10) {
  FUNC_0("%s watermarks: normal=%d, SR=%d, HPLL=%d\n",
         VAR_7->base.name,
         VAR_5->wm.g4x.raw[VAR_1].plane[VAR_9],
         VAR_5->wm.g4x.raw[VAR_2].plane[VAR_9],
         VAR_5->wm.g4x.raw[VAR_0].plane[VAR_9]);

  if (VAR_9 == VAR_3)
   FUNC_0("FBC watermarks: SR=%d, HPLL=%d\n",
          VAR_5->wm.g4x.raw[VAR_2].fbc,
          VAR_5->wm.g4x.raw[VAR_0].fbc);
 }

 return VAR_10;
}
