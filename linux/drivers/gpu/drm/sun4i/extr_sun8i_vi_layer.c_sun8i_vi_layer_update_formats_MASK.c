
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int regs; } ;
struct sun8i_mixer {TYPE_4__ engine; TYPE_3__* cfg; } ;
struct drm_plane_state {int color_range; int color_encoding; TYPE_2__* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct de2_fmt_info {int de2_fmt; scalar_t__ csc; scalar_t__ rgb; } ;
struct TYPE_7__ {scalar_t__ is_de3; } ;
struct TYPE_6__ {TYPE_1__* format; } ;
struct TYPE_5__ {int format; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct sun8i_mixer*,int) ;
 int FUNC_5 (struct sun8i_mixer*,int,int) ;
 int FUNC_6 (struct sun8i_mixer*,int,scalar_t__,int ,int ) ;
 struct de2_fmt_info* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sun8i_mixer *VAR_6, int VAR_7,
      int VAR_8, struct drm_plane *VAR_9)
{
 struct drm_plane_state *VAR_10 = VAR_9->state;
 const struct de2_fmt_info *VAR_11;
 u32 VAR_12, VAR_13;

 VAR_13 = FUNC_4(VAR_6, VAR_7);

 VAR_11 = FUNC_7(VAR_10->fb->format->format);
 if (!VAR_11) {
  FUNC_0("Invalid format\n");
  return -VAR_0;
 }

 VAR_12 = VAR_11->de2_fmt << VAR_4;
 FUNC_3(VAR_6->engine.regs,
      FUNC_2(VAR_13, VAR_8),
      VAR_3, VAR_12);

 if (VAR_11->csc != VAR_2) {
  FUNC_6(VAR_6, VAR_7, VAR_11->csc,
      VAR_10->color_encoding,
      VAR_10->color_range);
  FUNC_5(VAR_6, VAR_7, 1);
 } else {
  FUNC_5(VAR_6, VAR_7, 0);
 }

 if (VAR_11->rgb)
  VAR_12 = VAR_5;
 else
  VAR_12 = 0;

 FUNC_3(VAR_6->engine.regs,
      FUNC_2(VAR_13, VAR_8),
      VAR_5, VAR_12);


 if (VAR_6->cfg->is_de3)
  FUNC_3(VAR_6->engine.regs,
       FUNC_2(VAR_13,
          VAR_8),
       VAR_1,
       FUNC_1(0xff));

 return 0;
}
