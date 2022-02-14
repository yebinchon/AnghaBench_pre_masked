
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {scalar_t__ vrefresh; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (size_t) ;
 int * VAR_0 ;
 size_t FUNC_2 (size_t const) ;

__attribute__((used)) static struct drm_display_mode *
FUNC_3(struct drm_connector *VAR_1,
    const u8 *VAR_2, u8 VAR_3,
    u8 VAR_4)
{
 struct drm_device *VAR_5 = VAR_1->dev;
 struct drm_display_mode *VAR_6;
 u8 VAR_7;

 if (VAR_2 == ((void*)0) || VAR_4 >= VAR_3)
  return ((void*)0);


 VAR_7 = FUNC_2(VAR_2[VAR_4]);
 if (!FUNC_1(VAR_7))
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5, &VAR_0[VAR_7]);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->vrefresh = 0;

 return VAR_6;
}
