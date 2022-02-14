
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {TYPE_3__* encoder; } ;
struct TYPE_7__ {int mod; } ;
struct drm_display_mode {int clock; } ;
struct rcar_lvds {int mode; scalar_t__ panel; TYPE_5__* info; TYPE_4__ bridge; TYPE_6__* companion; scalar_t__ dual_link; TYPE_1__ clocks; struct drm_display_mode display_mode; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_12__ {TYPE_2__* funcs; } ;
struct TYPE_11__ {int quirks; int gen; int (* pll_setup ) (struct rcar_lvds*,int) ;} ;
struct TYPE_9__ {int crtc; } ;
struct TYPE_8__ {int (* enable ) (TYPE_6__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct rcar_lvds* FUNC_2 (struct drm_bridge*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct rcar_lvds*,int ,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (struct rcar_lvds*,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct drm_bridge *VAR_23)
{
 struct rcar_lvds *VAR_24 = FUNC_2(VAR_23);
 const struct drm_display_mode *VAR_25 = &VAR_24->display_mode;
 u32 VAR_26;
 u32 VAR_27;
 int VAR_28;

 VAR_28 = FUNC_3(VAR_24->clocks.mod);
 if (VAR_28 < 0)
  return;


 if (VAR_24->dual_link && VAR_24->companion)
  VAR_24->companion->funcs->enable(VAR_24->companion);
 FUNC_7(VAR_24, VAR_11, VAR_15 |
   VAR_14 | VAR_13 |
   VAR_12);

 if (VAR_24->info->quirks & VAR_21)
  VAR_26 = FUNC_0(0, 0) | FUNC_0(1, 3)
         | FUNC_0(2, 2) | FUNC_0(3, 1);
 else
  VAR_26 = FUNC_0(0, 0) | FUNC_0(1, 1)
         | FUNC_0(2, 2) | FUNC_0(3, 3);

 FUNC_7(VAR_24, VAR_0, VAR_26);

 if (VAR_24->info->quirks & VAR_18) {




  FUNC_7(VAR_24, VAR_16,
    VAR_24->dual_link ? VAR_17 : 0);
 }





 if (!VAR_24->dual_link || VAR_24->companion)
  VAR_24->info->pll_setup(VAR_24, VAR_25->clock * 1000);


 VAR_27 = VAR_24->mode << VAR_5;

 if (VAR_24->bridge.encoder) {




  if (FUNC_4(VAR_24->bridge.encoder->crtc) == 2)
   VAR_27 |= VAR_3;
 }

 FUNC_7(VAR_24, VAR_1, VAR_27);


 FUNC_7(VAR_24, VAR_9,
   FUNC_1(3) | FUNC_1(2) |
   FUNC_1(1) | FUNC_1(0) | VAR_10);

 if (VAR_24->info->gen < 3) {

  VAR_27 |= VAR_2 | VAR_4;
  FUNC_7(VAR_24, VAR_1, VAR_27);
 }

 if (!(VAR_24->info->quirks & VAR_19)) {




  VAR_27 |= VAR_7;
  FUNC_7(VAR_24, VAR_1, VAR_27);
 }

 if (VAR_24->info->quirks & VAR_22) {

  VAR_27 |= VAR_8;
  FUNC_7(VAR_24, VAR_1, VAR_27);
 }

 if (VAR_24->info->quirks & VAR_20) {




  VAR_27 |= VAR_4;
  if (!(VAR_24->info->quirks & VAR_22))
   FUNC_7(VAR_24, VAR_1, VAR_27);
 }

 if (!(VAR_24->info->quirks & VAR_19)) {

  FUNC_10(100, 150);
 }


 VAR_27 |= VAR_6;
 FUNC_7(VAR_24, VAR_1, VAR_27);

 if (VAR_24->panel) {
  FUNC_6(VAR_24->panel);
  FUNC_5(VAR_24->panel);
 }
}
