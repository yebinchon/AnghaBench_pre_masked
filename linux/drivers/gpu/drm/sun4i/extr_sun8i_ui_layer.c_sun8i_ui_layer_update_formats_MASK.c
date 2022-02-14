
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int regs; } ;
struct sun8i_mixer {TYPE_1__ engine; } ;
struct drm_plane_state {TYPE_3__* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct de2_fmt_info {int de2_fmt; int rgb; } ;
struct TYPE_6__ {TYPE_2__* format; } ;
struct TYPE_5__ {int format; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct sun8i_mixer*,int) ;
 struct de2_fmt_info* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sun8i_mixer *VAR_3, int VAR_4,
      int VAR_5, struct drm_plane *VAR_6)
{
 struct drm_plane_state *VAR_7 = VAR_6->state;
 const struct de2_fmt_info *VAR_8;
 u32 VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_3, VAR_4);

 VAR_8 = FUNC_4(VAR_7->fb->format->format);
 if (!VAR_8 || !VAR_8->rgb) {
  FUNC_0("Invalid format\n");
  return -VAR_0;
 }

 VAR_9 = VAR_8->de2_fmt << VAR_2;
 FUNC_2(VAR_3->engine.regs,
      FUNC_1(VAR_10, VAR_5),
      VAR_1, VAR_9);

 return 0;
}
