
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_5__ {int nbox; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_6__ {int current_page; int color_fmt; int front_pitch_offset_c; int back_pitch_offset_c; int depth_fmt; int depth_pitch_offset_c; scalar_t__ page_flipping; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
struct TYPE_7__ {unsigned int flags; int color_mask; int clear_color; int clear_depth; } ;
typedef TYPE_3__ drm_r128_clear_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_13,
        drm_r128_clear_t *VAR_14)
{
 drm_r128_private_t *VAR_15 = VAR_13->dev_private;
 drm_r128_sarea_t *VAR_16 = VAR_15->sarea_priv;
 int VAR_17 = VAR_16->nbox;
 struct drm_clip_rect *VAR_18 = VAR_16->boxes;
 unsigned int VAR_19 = VAR_14->flags;
 int VAR_20;
 VAR_12;
 FUNC_4("\n");

 if (VAR_15->page_flipping && VAR_15->current_page == 1) {
  unsigned int VAR_21 = VAR_19;

  VAR_19 &= ~(VAR_4 | VAR_0);
  if (VAR_21 & VAR_4)
   VAR_19 |= VAR_0;
  if (VAR_21 & VAR_0)
   VAR_19 |= VAR_4;
 }

 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  int VAR_22 = VAR_18[VAR_20].x1;
  int VAR_23 = VAR_18[VAR_20].y1;
  int VAR_24 = VAR_18[VAR_20].x2 - VAR_22;
  int VAR_25 = VAR_18[VAR_20].y2 - VAR_23;

  FUNC_4("dispatch clear %d,%d-%d,%d flags 0x%x\n",
     VAR_18[VAR_20].x1, VAR_18[VAR_20].y1, VAR_18[VAR_20].x2,
     VAR_18[VAR_20].y2, VAR_19);

  if (VAR_19 & (VAR_4 | VAR_0)) {
   FUNC_1(2);

   FUNC_5(FUNC_2(VAR_3, 0));
   FUNC_5(VAR_14->color_mask);

   FUNC_0();
  }

  if (VAR_19 & VAR_4) {
   FUNC_1(6);

   FUNC_5(FUNC_3(VAR_1, 4));
   FUNC_5(VAR_8 |
     VAR_6 |
     (VAR_15->color_fmt << 8) |
     VAR_9 |
     VAR_11 |
     VAR_7 |
     VAR_5);

   FUNC_5(VAR_15->front_pitch_offset_c);
   FUNC_5(VAR_14->clear_color);

   FUNC_5((VAR_22 << 16) | VAR_23);
   FUNC_5((VAR_24 << 16) | VAR_25);

   FUNC_0();
  }

  if (VAR_19 & VAR_0) {
   FUNC_1(6);

   FUNC_5(FUNC_3(VAR_1, 4));
   FUNC_5(VAR_8 |
     VAR_6 |
     (VAR_15->color_fmt << 8) |
     VAR_9 |
     VAR_11 |
     VAR_7 |
     VAR_5);

   FUNC_5(VAR_15->back_pitch_offset_c);
   FUNC_5(VAR_14->clear_color);

   FUNC_5((VAR_22 << 16) | VAR_23);
   FUNC_5((VAR_24 << 16) | VAR_25);

   FUNC_0();
  }

  if (VAR_19 & VAR_2) {
   FUNC_1(6);

   FUNC_5(FUNC_3(VAR_1, 4));
   FUNC_5(VAR_8 |
     VAR_6 |
     (VAR_15->depth_fmt << 8) |
     VAR_9 |
     VAR_11 |
     VAR_7 |
     VAR_5 | VAR_10);

   FUNC_5(VAR_15->depth_pitch_offset_c);
   FUNC_5(VAR_14->clear_depth);

   FUNC_5((VAR_22 << 16) | VAR_23);
   FUNC_5((VAR_24 << 16) | VAR_25);

   FUNC_0();
  }
 }
}
