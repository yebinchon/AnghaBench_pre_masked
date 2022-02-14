
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; } ;
struct radeon_crtc {int crtc_offset; int cursor_addr; int crtc_id; int legacy_display_base_addr; scalar_t__ cursor_out_of_bounds; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (int) ;
 struct radeon_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_23)
{
 struct radeon_crtc *VAR_24 = FUNC_7(VAR_23);
 struct radeon_device *VAR_25 = VAR_23->dev->dev_private;

 if (VAR_24->cursor_out_of_bounds)
  return;

 if (FUNC_1(VAR_25)) {
  FUNC_4(VAR_11 + VAR_24->crtc_offset,
         FUNC_8(VAR_24->cursor_addr));
  FUNC_4(VAR_10 + VAR_24->crtc_offset,
         FUNC_6(VAR_24->cursor_addr));
  FUNC_4(VAR_22, VAR_9 + VAR_24->crtc_offset);
  FUNC_4(VAR_21, VAR_7 |
         FUNC_2(VAR_6) |
         FUNC_3(VAR_8));
 } else if (FUNC_0(VAR_25)) {
  if (VAR_25->family >= VAR_5) {
   if (VAR_24->crtc_id)
    FUNC_4(VAR_13,
           FUNC_8(VAR_24->cursor_addr));
   else
    FUNC_4(VAR_12,
           FUNC_8(VAR_24->cursor_addr));
  }

  FUNC_4(VAR_4 + VAR_24->crtc_offset,
         FUNC_6(VAR_24->cursor_addr));
  FUNC_4(VAR_22, VAR_3 + VAR_24->crtc_offset);
  FUNC_4(VAR_21, VAR_0 |
         (VAR_1 << VAR_2));
 } else {

  FUNC_4(VAR_20 + VAR_24->crtc_offset,
         VAR_24->cursor_addr - VAR_24->legacy_display_base_addr);

  switch (VAR_24->crtc_id) {
  case 0:
   FUNC_4(VAR_22, VAR_19);
   break;
  case 1:
   FUNC_4(VAR_22, VAR_14);
   break;
  default:
   return;
  }

  FUNC_5(VAR_21, (VAR_15 |
       (VAR_16 << VAR_18)),
    ~(VAR_15 | VAR_17));
 }
}
