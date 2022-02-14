
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int depth_pitch; int depth_fmt; int depth_pitch_offset_c; int span_pitch_offset_c; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_5__ {int n; int y; int x; } ;
typedef TYPE_2__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_14,
      drm_r128_depth_t *VAR_15)
{
 drm_r128_private_t *VAR_16 = VAR_14->dev_private;
 int VAR_17, *VAR_18, *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 VAR_13;
 FUNC_3("\n");

 VAR_17 = VAR_15->n;
 if (VAR_17 > 4096 || VAR_17 <= 0)
  return -VAR_1;

 if (VAR_17 > VAR_16->depth_pitch)
  VAR_17 = VAR_16->depth_pitch;

 VAR_21 = VAR_17 * sizeof(*VAR_18);
 VAR_22 = VAR_17 * sizeof(*VAR_19);
 VAR_18 = FUNC_7(VAR_21, VAR_3);
 if (VAR_18 == ((void*)0))
  return -VAR_2;
 VAR_19 = FUNC_7(VAR_22, VAR_3);
 if (VAR_19 == ((void*)0)) {
  FUNC_6(VAR_18);
  return -VAR_2;
 }
 if (FUNC_5(VAR_18, VAR_15->x, VAR_21)) {
  FUNC_6(VAR_18);
  FUNC_6(VAR_19);
  return -VAR_0;
 }
 if (FUNC_5(VAR_19, VAR_15->y, VAR_22)) {
  FUNC_6(VAR_18);
  FUNC_6(VAR_19);
  return -VAR_0;
 }

 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  FUNC_1(7);

  FUNC_4(FUNC_2(VAR_4, 5));
  FUNC_4(VAR_10 |
    VAR_8 |
    VAR_6 |
    (VAR_16->depth_fmt << 8) |
    VAR_9 |
    VAR_12 |
    VAR_5 |
    VAR_7 | VAR_11);

  FUNC_4(VAR_16->depth_pitch_offset_c);
  FUNC_4(VAR_16->span_pitch_offset_c);

  FUNC_4((VAR_18[VAR_20] << 16) | VAR_19[VAR_20]);
  FUNC_4((VAR_20 << 16) | 0);
  FUNC_4((1 << 16) | 1);

  FUNC_0();
 }

 FUNC_6(VAR_18);
 FUNC_6(VAR_19);

 return 0;
}
