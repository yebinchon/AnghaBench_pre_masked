
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int y ;
typedef int x ;
typedef int u8 ;
typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int depth_fmt; int depth_pitch_offset_c; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_5__ {int n; scalar_t__ mask; scalar_t__ buffer; int y; int x; } ;
typedef TYPE_2__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_10,
     drm_r128_depth_t *VAR_11)
{
 drm_r128_private_t *VAR_12 = VAR_10->dev_private;
 int VAR_13, VAR_14, VAR_15;
 u32 *VAR_16;
 u8 *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 VAR_9;
 FUNC_3("\n");

 VAR_13 = VAR_11->n;
 if (VAR_13 > 4096 || VAR_13 <= 0)
  return -VAR_1;

 if (FUNC_7(&VAR_14, VAR_11->x, sizeof(VAR_14)))
  return -VAR_0;
 if (FUNC_7(&VAR_15, VAR_11->y, sizeof(VAR_15)))
  return -VAR_0;

 VAR_19 = VAR_11->n * sizeof(u32);
 VAR_16 = FUNC_9(VAR_11->buffer, VAR_19);
 if (FUNC_4(VAR_16))
  return FUNC_6(VAR_16);

 VAR_20 = VAR_11->n;
 if (VAR_11->mask) {
  VAR_17 = FUNC_9(VAR_11->mask, VAR_20);
  if (FUNC_4(VAR_17)) {
   FUNC_8(VAR_16);
   return FUNC_6(VAR_17);
  }

  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++, VAR_14++) {
   if (VAR_17[VAR_18]) {
    FUNC_1(6);

    FUNC_5(FUNC_2(VAR_2, 4));
    FUNC_5(VAR_5 |
      VAR_3 |
      (VAR_12->depth_fmt << 8) |
      VAR_6 |
      VAR_8 |
      VAR_4 |
      VAR_7);

    FUNC_5(VAR_12->depth_pitch_offset_c);
    FUNC_5(VAR_16[VAR_18]);

    FUNC_5((VAR_14 << 16) | VAR_15);
    FUNC_5((1 << 16) | 1);

    FUNC_0();
   }
  }

  FUNC_8(VAR_17);
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++, VAR_14++) {
   FUNC_1(6);

   FUNC_5(FUNC_2(VAR_2, 4));
   FUNC_5(VAR_5 |
     VAR_3 |
     (VAR_12->depth_fmt << 8) |
     VAR_6 |
     VAR_8 |
     VAR_4 |
     VAR_7);

   FUNC_5(VAR_12->depth_pitch_offset_c);
   FUNC_5(VAR_16[VAR_18]);

   FUNC_5((VAR_14 << 16) | VAR_15);
   FUNC_5((1 << 16) | 1);

   FUNC_0();
  }
 }

 FUNC_8(VAR_16);

 return 0;
}
