
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ iec; } ;
struct TYPE_6__ {TYPE_2__ codec_params; } ;
struct mtk_hdmi {TYPE_3__ aud_param; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct mtk_hdmi*,int) ;
 int FUNC_1 (struct mtk_hdmi*,int) ;
 int FUNC_2 (struct mtk_hdmi*) ;
 int FUNC_3 (struct mtk_hdmi*,struct drm_display_mode*) ;
 int FUNC_4 (struct mtk_hdmi*) ;
 int FUNC_5 (struct mtk_hdmi*,int ) ;
 int FUNC_6 (struct mtk_hdmi*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct mtk_hdmi *VAR_0,
          struct drm_display_mode *VAR_1)
{
 FUNC_4(VAR_0);
 FUNC_0(VAR_0, 0);

 FUNC_2(VAR_0);
 FUNC_3(VAR_0, VAR_1);
 FUNC_5(VAR_0,
   VAR_0->aud_param.codec_params.iec.status);

 FUNC_7(50, 100);

 FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0, 1);
 FUNC_6(VAR_0);
 return 0;
}
