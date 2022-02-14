
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* encoder; } ;
struct ti_sn_bridge {int regmap; TYPE_5__* dsi; TYPE_4__ bridge; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_10__ {int lanes; int format; } ;
struct TYPE_8__ {TYPE_2__* crtc; } ;
struct TYPE_7__ {TYPE_1__* state; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 unsigned int* VAR_6 ;

__attribute__((used)) static void FUNC_5(struct ti_sn_bridge *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 struct drm_display_mode *VAR_13 =
  &VAR_7->bridge.encoder->crtc->state->adjusted_mode;


 VAR_8 = (VAR_13->clock / 1000) *
   FUNC_2(VAR_7->dsi->format);
 VAR_9 = VAR_8 / (VAR_7->dsi->lanes * 2);


 VAR_11 = (VAR_3 / 5) +
  (((VAR_9 - VAR_3) / 5) & 0xFF);
 FUNC_4(VAR_7->regmap, VAR_5, VAR_11);


 VAR_10 = ((VAR_8 / VAR_7->dsi->lanes) * VAR_1) /
       VAR_0;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6) - 1; VAR_12++)
  if (VAR_6[VAR_12] > VAR_10)
   break;

 FUNC_3(VAR_7->regmap, VAR_4,
      VAR_2, FUNC_1(VAR_12));
}
