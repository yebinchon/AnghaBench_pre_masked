
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_ctx_res {int count; int * contexts; } ;
struct drm_ctx {int handle; } ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,struct drm_ctx*,int) ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_ctx*,int ,int) ;

int FUNC_3(struct drm_device *VAR_5, void *VAR_6,
        struct drm_file *VAR_7)
{
 struct drm_ctx_res *VAR_8 = VAR_6;
 struct drm_ctx VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_5, VAR_0) &&
     !FUNC_1(VAR_5, VAR_1))
  return -VAR_4;

 if (VAR_8->count >= VAR_2) {
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   VAR_9.handle = VAR_10;
   if (FUNC_0(&VAR_8->contexts[VAR_10], &VAR_9, sizeof(VAR_9)))
    return -VAR_3;
  }
 }
 VAR_8->count = VAR_2;

 return 0;
}
