
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp5_kms {int dummy; } ;
struct TYPE_5__ {TYPE_1__* mixer; } ;
struct mdp5_crtc_state {TYPE_2__ pipeline; } ;
struct TYPE_6__ {int x; int y; int width; int height; int iova; int lock; } ;
struct mdp5_crtc {TYPE_3__ cursor; } ;
struct drm_format_info {int* cpp; } ;
struct drm_crtc {int name; int state; } ;
typedef enum mdp5_cursor_alpha { ____Placeholder_mdp5_cursor_alpha } mdp5_cursor_alpha ;
struct TYPE_4__ {int lm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int const) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 struct drm_format_info* FUNC_21 (int ) ;
 struct mdp5_kms* FUNC_22 (struct drm_crtc*) ;
 int FUNC_23 (struct drm_crtc*,int*,int*) ;
 int FUNC_24 (struct mdp5_kms*,int ,int) ;
 struct mdp5_crtc* FUNC_25 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_26 (int ) ;

__attribute__((used)) static void FUNC_27(struct drm_crtc *VAR_4)
{
 const struct drm_format_info *VAR_5 = FUNC_21(VAR_2);
 struct mdp5_crtc_state *VAR_6 = FUNC_26(VAR_4->state);
 struct mdp5_crtc *VAR_7 = FUNC_25(VAR_4);
 struct mdp5_kms *VAR_8 = FUNC_22(VAR_4);
 const enum mdp5_cursor_alpha VAR_9 = VAR_0;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20;

 FUNC_20(&VAR_7->cursor.lock);

 VAR_20 = VAR_6->pipeline.mixer->lm;

 VAR_12 = VAR_7->cursor.x;
 VAR_13 = VAR_7->cursor.y;
 VAR_16 = VAR_7->cursor.width;
 VAR_17 = VAR_7->cursor.height;

 VAR_11 = VAR_16 * VAR_5->cpp[0];

 FUNC_23(VAR_4, &VAR_18, &VAR_19);






 if (VAR_7->cursor.x < 0) {
  VAR_14 = FUNC_19(VAR_7->cursor.x);
  VAR_12 = 0;
 } else {
  VAR_14 = 0;
 }
 if (VAR_7->cursor.y < 0) {
  VAR_15 = FUNC_19(VAR_7->cursor.y);
  VAR_13 = 0;
 } else {
  VAR_15 = 0;
 }
 FUNC_0("%s: x=%d, y=%d roi_w=%d roi_h=%d src_x=%d src_y=%d",
  VAR_4->name, VAR_12, VAR_13, VAR_18, VAR_19, VAR_14, VAR_15);

 FUNC_24(VAR_8, FUNC_17(VAR_20), VAR_11);
 FUNC_24(VAR_8, FUNC_13(VAR_20),
   FUNC_2(VAR_1));
 FUNC_24(VAR_8, FUNC_14(VAR_20),
   FUNC_3(VAR_17) |
   FUNC_4(VAR_16));
 FUNC_24(VAR_8, FUNC_15(VAR_20),
   FUNC_5(VAR_19) |
   FUNC_6(VAR_18));
 FUNC_24(VAR_8, FUNC_16(VAR_20),
   FUNC_8(VAR_13) |
   FUNC_7(VAR_12));
 FUNC_24(VAR_8, FUNC_18(VAR_20),
   FUNC_10(VAR_15) |
   FUNC_9(VAR_14));
 FUNC_24(VAR_8, FUNC_11(VAR_20),
   VAR_7->cursor.iova);

 VAR_10 = VAR_3;
 VAR_10 |= FUNC_1(VAR_9);
 FUNC_24(VAR_8, FUNC_12(VAR_20), VAR_10);
}
