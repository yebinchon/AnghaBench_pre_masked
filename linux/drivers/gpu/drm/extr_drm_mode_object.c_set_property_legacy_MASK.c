
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_property {struct drm_device* dev; } ;
struct drm_mode_object {int type; } ;
struct drm_device {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct drm_mode_object*,struct drm_property*,int ) ;
 int FUNC_1 (struct drm_mode_object*,struct drm_property*,int ) ;
 int FUNC_2 (int ,struct drm_property*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_property*,int ,struct drm_mode_object**) ;
 int FUNC_6 (struct drm_property*,struct drm_mode_object*) ;
 int FUNC_7 (struct drm_mode_object*) ;

__attribute__((used)) static int FUNC_8(struct drm_mode_object *VAR_1,
          struct drm_property *VAR_2,
          uint64_t VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct drm_mode_object *VAR_5;
 int VAR_6 = -VAR_0;

 if (!FUNC_5(VAR_2, VAR_3, &VAR_5))
  return -VAR_0;

 FUNC_3(VAR_4);
 switch (VAR_1->type) {
 case 130:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_6 = FUNC_2(FUNC_7(VAR_1),
        VAR_2, VAR_3);
  break;
 }
 FUNC_6(VAR_2, VAR_5);
 FUNC_4(VAR_4);

 return VAR_6;
}
