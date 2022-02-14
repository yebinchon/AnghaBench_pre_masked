
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef int u32 ;
struct TYPE_2__ {int src_w; int src_h; int crtc_w; int crtc_h; int dst; int src; int plane; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_plane {scalar_t__ id; } ;
struct intel_crtc_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct intel_plane* FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static uint_fixed_16_16_t
FUNC_9(const struct intel_crtc_state *VAR_1,
      const struct intel_plane_state *VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_7(VAR_2->base.plane);
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 uint_fixed_16_16_t VAR_8, VAR_9;
 uint_fixed_16_16_t VAR_10, VAR_11;

 if (FUNC_0(!FUNC_4(VAR_1, VAR_2)))
  return FUNC_8(0);


 if (VAR_3->id == VAR_0) {




  VAR_4 = VAR_2->base.src_w >> 16;
  VAR_5 = VAR_2->base.src_h >> 16;
  VAR_6 = VAR_2->base.crtc_w;
  VAR_7 = VAR_2->base.crtc_h;
 } else {





  VAR_4 = FUNC_3(&VAR_2->base.src) >> 16;
  VAR_5 = FUNC_2(&VAR_2->base.src) >> 16;
  VAR_6 = FUNC_3(&VAR_2->base.dst);
  VAR_7 = FUNC_2(&VAR_2->base.dst);
 }

 VAR_8 = FUNC_1(VAR_4, VAR_6);
 VAR_9 = FUNC_1(VAR_5, VAR_7);
 VAR_11 = FUNC_5(VAR_8, FUNC_8(1));
 VAR_10 = FUNC_5(VAR_9, FUNC_8(1));

 return FUNC_6(VAR_11, VAR_10);
}
