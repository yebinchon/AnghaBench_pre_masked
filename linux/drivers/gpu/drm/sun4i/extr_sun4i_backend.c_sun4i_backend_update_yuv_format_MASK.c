
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {struct drm_format_info* format; } ;
struct drm_format_info {int format; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int const) ;




 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct drm_format_info const*) ;
 scalar_t__ FUNC_5 (struct drm_format_info const*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_8(struct sun4i_backend *VAR_9,
        int VAR_10, struct drm_plane *VAR_11)
{
 struct drm_plane_state *VAR_12 = VAR_11->state;
 struct drm_framebuffer *VAR_13 = VAR_12->fb;
 const struct drm_format_info *VAR_14 = VAR_13->format;
 const uint32_t VAR_15 = VAR_14->format;
 u32 VAR_16 = VAR_1;
 int VAR_17;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_8); VAR_17++)
  FUNC_7(VAR_9->engine.regs,
        FUNC_3(VAR_17),
        VAR_8[VAR_17]);





 FUNC_6(VAR_9->engine.regs, FUNC_2(VAR_10),
      VAR_0,
      VAR_0);


 if (FUNC_4(VAR_14) &&
     FUNC_5(VAR_14))
  VAR_16 |= VAR_2;
 else
  FUNC_1("Unsupported YUV format (0x%x)\n", VAR_15);





 switch (VAR_15) {
 case 129:
  VAR_16 |= VAR_4;
  break;
 case 128:
  VAR_16 |= VAR_3;
  break;
 case 131:
  VAR_16 |= VAR_6;
  break;
 case 130:
  VAR_16 |= VAR_5;
  break;
 default:
  FUNC_1("Unsupported YUV pixel sequence (0x%x)\n",
     VAR_15);
 }

 FUNC_7(VAR_9->engine.regs, VAR_7, VAR_16);

 return 0;
}
