
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int preferred_depth; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;
struct mipi_dbi_dev {TYPE_2__ drm; } ;
struct drm_simple_display_pipe_funcs {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mipi_dbi_dev*,struct drm_simple_display_pipe_funcs const*,int ,int ,struct drm_display_mode const*,unsigned int,size_t) ;
 int VAR_0 ;

int FUNC_2(struct mipi_dbi_dev *VAR_1,
        const struct drm_simple_display_pipe_funcs *VAR_2,
        const struct drm_display_mode *VAR_3, unsigned int VAR_4)
{
 size_t VAR_5 = VAR_3->vdisplay * VAR_3->hdisplay * sizeof(u16);

 VAR_1->drm.mode_config.preferred_depth = 16;

 return FUNC_1(VAR_1, VAR_2, VAR_0,
           FUNC_0(VAR_0), VAR_3,
           VAR_4, VAR_5);
}
