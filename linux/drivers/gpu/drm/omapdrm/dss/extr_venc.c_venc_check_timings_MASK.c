
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;


 int FUNC_1 (struct drm_display_mode*,int *) ;
 int FUNC_2 (struct drm_display_mode*,int ) ;
 int FUNC_3 (struct drm_display_mode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_4,
         struct drm_display_mode *VAR_5)
{
 FUNC_0("venc_check_timings\n");

 switch (FUNC_4(VAR_5)) {
 case 128:
  FUNC_1(VAR_5, &VAR_3);
  break;

 case 129:
  FUNC_1(VAR_5, &VAR_2);
  break;

 default:
  return -VAR_1;
 }

 FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5);
 return 0;
}
