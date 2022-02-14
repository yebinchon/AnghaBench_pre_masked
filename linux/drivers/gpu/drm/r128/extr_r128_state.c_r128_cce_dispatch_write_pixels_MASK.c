
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int depth_fmt; int depth_pitch_offset_c; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_5__ {int n; scalar_t__ mask; scalar_t__ buffer; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_9,
       drm_r128_depth_t *VAR_10)
{
 drm_r128_private_t *VAR_11 = VAR_9->dev_private;
 int VAR_12, *VAR_13, *VAR_14;
 u32 *VAR_15;
 u8 *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 VAR_8;
 FUNC_3("\n");

 VAR_12 = VAR_10->n;
 if (VAR_12 > 4096 || VAR_12 <= 0)
  return -VAR_0;

 VAR_18 = VAR_12 * sizeof(*VAR_13);
 VAR_19 = VAR_12 * sizeof(*VAR_14);
 VAR_13 = FUNC_8(VAR_10->x, VAR_18);
 if (FUNC_4(VAR_13))
  return FUNC_6(VAR_13);
 VAR_14 = FUNC_8(VAR_10->y, VAR_19);
 if (FUNC_4(VAR_14)) {
  FUNC_7(VAR_13);
  return FUNC_6(VAR_14);
 }
 VAR_20 = VAR_10->n * sizeof(u32);
 VAR_15 = FUNC_8(VAR_10->buffer, VAR_20);
 if (FUNC_4(VAR_15)) {
  FUNC_7(VAR_13);
  FUNC_7(VAR_14);
  return FUNC_6(VAR_15);
 }

 if (VAR_10->mask) {
  VAR_21 = VAR_10->n;
  VAR_16 = FUNC_8(VAR_10->mask, VAR_21);
  if (FUNC_4(VAR_16)) {
   FUNC_7(VAR_13);
   FUNC_7(VAR_14);
   FUNC_7(VAR_15);
   return FUNC_6(VAR_16);
  }

  for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
   if (VAR_16[VAR_17]) {
    FUNC_1(6);

    FUNC_5(FUNC_2(VAR_1, 4));
    FUNC_5(VAR_4 |
      VAR_2 |
      (VAR_11->depth_fmt << 8) |
      VAR_5 |
      VAR_7 |
      VAR_3 |
      VAR_6);

    FUNC_5(VAR_11->depth_pitch_offset_c);
    FUNC_5(VAR_15[VAR_17]);

    FUNC_5((VAR_13[VAR_17] << 16) | VAR_14[VAR_17]);
    FUNC_5((1 << 16) | 1);

    FUNC_0();
   }
  }

  FUNC_7(VAR_16);
 } else {
  for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
   FUNC_1(6);

   FUNC_5(FUNC_2(VAR_1, 4));
   FUNC_5(VAR_4 |
     VAR_2 |
     (VAR_11->depth_fmt << 8) |
     VAR_5 |
     VAR_7 |
     VAR_3 |
     VAR_6);

   FUNC_5(VAR_11->depth_pitch_offset_c);
   FUNC_5(VAR_15[VAR_17]);

   FUNC_5((VAR_13[VAR_17] << 16) | VAR_14[VAR_17]);
   FUNC_5((1 << 16) | 1);

   FUNC_0();
  }
 }

 FUNC_7(VAR_13);
 FUNC_7(VAR_14);
 FUNC_7(VAR_15);

 return 0;
}
