
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct dw_hdmi*,int) ;
 int FUNC_1 (struct dw_hdmi*,int ) ;
 int FUNC_2 (struct dw_hdmi*) ;

__attribute__((used)) static int FUNC_3(struct dw_hdmi *VAR_0, void *VAR_1,
       struct drm_display_mode *VAR_2)
{
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_0, 0);

  VAR_4 = FUNC_2(VAR_0);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
