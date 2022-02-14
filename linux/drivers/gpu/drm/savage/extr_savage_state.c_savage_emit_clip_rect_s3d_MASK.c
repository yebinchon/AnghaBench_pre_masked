
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_clip_rect {scalar_t__ y2; scalar_t__ x2; scalar_t__ y1; scalar_t__ x1; } ;
struct TYPE_5__ {int new_scstart; int new_scend; int scstart; int scend; } ;
struct TYPE_6__ {TYPE_1__ s3d; } ;
struct TYPE_7__ {int waiting; TYPE_2__ state; } ;
typedef TYPE_3__ drm_savage_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(drm_savage_private_t * VAR_5,
          const struct drm_clip_rect * VAR_6)
{
 uint32_t VAR_7 = VAR_5->state.s3d.new_scstart;
 uint32_t VAR_8 = VAR_5->state.s3d.new_scend;
 VAR_7 = (VAR_7 & ~VAR_3) |
     ((uint32_t) VAR_6->x1 & 0x000007ff) |
     (((uint32_t) VAR_6->y1 << 16) & 0x07ff0000);
 VAR_8 = (VAR_8 & ~VAR_3) |
     (((uint32_t) VAR_6->x2 - 1) & 0x000007ff) |
     ((((uint32_t) VAR_6->y2 - 1) << 16) & 0x07ff0000);
 if (VAR_7 != VAR_5->state.s3d.scstart ||
     VAR_8 != VAR_5->state.s3d.scend) {
  VAR_2;
  FUNC_0(4);
  FUNC_3(VAR_0 | VAR_1);
  FUNC_2(VAR_4, 2);
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  VAR_5->state.s3d.scstart = VAR_7;
  VAR_5->state.s3d.scend = VAR_8;
  VAR_5->waiting = 1;
  FUNC_1();
 }
}
