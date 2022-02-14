
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ color_range; size_t color_encoding; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_plane {int pipe; int id; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int const) ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int const) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct intel_plane *VAR_4,
        const struct intel_crtc_state *VAR_5,
        const struct intel_plane_state *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_4->base.dev);
 enum pipe VAR_8 = VAR_4->pipe;
 enum plane_id VAR_9 = VAR_4->id;

 static const u16 VAR_10[][9] = {







  [129] = {
   0x7AF8, 0x7800, 0x0,
   0x8B28, 0x7800, 0x9AC0,
   0x0, 0x7800, 0x7DD8,
  },







  [128] = {
   0x7C98, 0x7800, 0x0,
   0x9EF8, 0x7800, 0xAC00,
   0x0, 0x7800, 0x7ED8,
  },







  [130] = {
   0x7BC8, 0x7800, 0x0,
   0x8928, 0x7800, 0xAA88,
   0x0, 0x7800, 0x7F10,
  },
 };


 static const u16 VAR_11[][9] = {







  [129] = {
   0x7CC8, 0x7950, 0x0,
   0x8D00, 0x7950, 0x9C88,
   0x0, 0x7950, 0x6810,
  },







  [128] = {
   0x7E58, 0x7950, 0x0,
   0x8888, 0x7950, 0xADA8,
   0x0, 0x7950, 0x6870,
  },







  [130] = {
   0x7D70, 0x7950, 0x0,
   0x8A68, 0x7950, 0xAC00,
   0x0, 0x7950, 0x6890,
  },
 };
 const u16 *VAR_12;

 if (VAR_6->base.color_range == VAR_0)
  VAR_12 = VAR_10[VAR_6->base.color_encoding];
 else
  VAR_12 = VAR_11[VAR_6->base.color_encoding];

 FUNC_2(FUNC_3(VAR_8, VAR_9, 0), FUNC_6(VAR_12[0]) |
        FUNC_1(VAR_12[1]));
 FUNC_2(FUNC_3(VAR_8, VAR_9, 1), FUNC_0(VAR_12[2]));
 FUNC_2(FUNC_3(VAR_8, VAR_9, 2), FUNC_6(VAR_12[3]) |
        FUNC_1(VAR_12[4]));
 FUNC_2(FUNC_3(VAR_8, VAR_9, 3), FUNC_0(VAR_12[5]));
 FUNC_2(FUNC_3(VAR_8, VAR_9, 4), FUNC_6(VAR_12[6]) |
        FUNC_1(VAR_12[7]));
 FUNC_2(FUNC_3(VAR_8, VAR_9, 5), FUNC_0(VAR_12[8]));

 FUNC_2(FUNC_5(VAR_8, VAR_9, 0),
        VAR_1);
 if (VAR_6->base.color_range == VAR_0)
  FUNC_2(FUNC_5(VAR_8, VAR_9, 1), 0);
 else
  FUNC_2(FUNC_5(VAR_8, VAR_9, 1),
         VAR_3);
 FUNC_2(FUNC_5(VAR_8, VAR_9, 2),
        VAR_2);
 FUNC_2(FUNC_4(VAR_8, VAR_9, 0), 0x0);
 FUNC_2(FUNC_4(VAR_8, VAR_9, 1), 0x0);
 FUNC_2(FUNC_4(VAR_8, VAR_9, 2), 0x0);
}
