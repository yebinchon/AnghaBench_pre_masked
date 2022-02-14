
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int name; struct drm_device* dev; } ;
struct drm_device {int object_name_idr; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;


 if (VAR_0->name) {
  FUNC_0(&VAR_1->object_name_idr, VAR_0->name);
  VAR_0->name = 0;
 }
}
