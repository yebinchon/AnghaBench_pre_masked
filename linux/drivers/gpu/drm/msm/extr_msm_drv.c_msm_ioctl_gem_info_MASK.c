
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {char* name; } ;
struct drm_msm_gem_info {int info; int len; int value; int handle; scalar_t__ pad; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct drm_device*,struct drm_gem_object*,int *) ;
 int FUNC_7 (char*) ;
 struct msm_gem_object* FUNC_8 (struct drm_gem_object*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_3, void *VAR_4,
  struct drm_file *VAR_5)
{
 struct drm_msm_gem_info *VAR_6 = VAR_4;
 struct drm_gem_object *VAR_7;
 struct msm_gem_object *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_6->pad)
  return -VAR_1;

 switch (VAR_6->info) {
 case 129:
 case 131:

  if (VAR_6->len)
   return -VAR_1;
  break;
 case 128:
 case 130:
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6->handle);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_8(VAR_7);

 switch (VAR_6->info) {
 case 129:
  VAR_6->value = FUNC_5(VAR_7);
  break;
 case 131:
  VAR_10 = FUNC_6(VAR_3, VAR_7, &VAR_6->value);
  break;
 case 128:

  if (VAR_6->len >= sizeof(VAR_8->name)) {
   VAR_10 = -VAR_1;
   break;
  }
  if (FUNC_0(VAR_8->name, FUNC_9(VAR_6->value),
       VAR_6->len)) {
   VAR_8->name[0] = '\0';
   VAR_10 = -VAR_0;
   break;
  }
  VAR_8->name[VAR_6->len] = '\0';
  for (VAR_9 = 0; VAR_9 < VAR_6->len; VAR_9++) {
   if (!FUNC_4(VAR_8->name[VAR_9])) {
    VAR_8->name[VAR_9] = '\0';
    break;
   }
  }
  break;
 case 130:
  if (VAR_6->value && (VAR_6->len < FUNC_7(VAR_8->name))) {
   VAR_10 = -VAR_1;
   break;
  }
  VAR_6->len = FUNC_7(VAR_8->name);
  if (VAR_6->value) {
   if (FUNC_1(FUNC_9(VAR_6->value),
      VAR_8->name, VAR_6->len))
    VAR_10 = -VAR_0;
  }
  break;
 }

 FUNC_3(VAR_7);

 return VAR_10;
}
