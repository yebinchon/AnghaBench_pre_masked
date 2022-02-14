
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {unsigned int x1; unsigned int y1; unsigned int x2; unsigned int y2; } ;
struct TYPE_3__ {int nbox; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_4__ {int pitch; int current_page; unsigned int w; unsigned int h; unsigned int back_offset; unsigned int depth_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_i810_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int) ;
 int VAR_7 ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_8, int VAR_9,
        unsigned int VAR_10,
        unsigned int VAR_11)
{
 drm_i810_private_t *VAR_12 = VAR_8->dev_private;
 drm_i810_sarea_t *VAR_13 = VAR_12->sarea_priv;
 int VAR_14 = VAR_13->nbox;
 struct drm_clip_rect *VAR_15 = VAR_13->boxes;
 int VAR_16 = VAR_12->pitch;
 int VAR_17 = 2;
 int VAR_18;
 VAR_7;

 if (VAR_12->current_page == 1) {
  unsigned int VAR_19 = VAR_9;

  VAR_9 &= ~(VAR_5 | VAR_3);
  if (VAR_19 & VAR_5)
   VAR_9 |= VAR_3;
  if (VAR_19 & VAR_3)
   VAR_9 |= VAR_5;
 }

 FUNC_3(VAR_8);

 if (VAR_14 > VAR_6)
  VAR_14 = VAR_6;

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++, VAR_15++) {
  unsigned int VAR_20 = VAR_15->x1;
  unsigned int VAR_21 = VAR_15->y1;
  unsigned int VAR_22 = (VAR_15->x2 - VAR_20) * VAR_17;
  unsigned int VAR_23 = VAR_15->y2 - VAR_21;
  unsigned int VAR_24 = VAR_21 * VAR_16 + VAR_20 * VAR_17;

  if (VAR_15->x1 > VAR_15->x2 ||
      VAR_15->y1 > VAR_15->y2 ||
      VAR_15->x2 > VAR_12->w || VAR_15->y2 > VAR_12->h)
   continue;

  if (VAR_9 & VAR_5) {
   FUNC_1(6);
   FUNC_2(VAR_0 | VAR_1 | 0x3);
   FUNC_2(VAR_2 | (0xF0 << 16) | VAR_16);
   FUNC_2((VAR_23 << 16) | VAR_22);
   FUNC_2(VAR_24);
   FUNC_2(VAR_10);
   FUNC_2(0);
   FUNC_0();
  }

  if (VAR_9 & VAR_3) {
   FUNC_1(6);
   FUNC_2(VAR_0 | VAR_1 | 0x3);
   FUNC_2(VAR_2 | (0xF0 << 16) | VAR_16);
   FUNC_2((VAR_23 << 16) | VAR_22);
   FUNC_2(VAR_12->back_offset + VAR_24);
   FUNC_2(VAR_10);
   FUNC_2(0);
   FUNC_0();
  }

  if (VAR_9 & VAR_4) {
   FUNC_1(6);
   FUNC_2(VAR_0 | VAR_1 | 0x3);
   FUNC_2(VAR_2 | (0xF0 << 16) | VAR_16);
   FUNC_2((VAR_23 << 16) | VAR_22);
   FUNC_2(VAR_12->depth_offset + VAR_24);
   FUNC_2(VAR_11);
   FUNC_2(0);
   FUNC_0();
  }
 }
}
