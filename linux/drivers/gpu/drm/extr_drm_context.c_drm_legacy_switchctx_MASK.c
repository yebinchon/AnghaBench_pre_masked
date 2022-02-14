
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int last_context; } ;
struct drm_ctx {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;

int FUNC_3(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 struct drm_ctx *VAR_6 = VAR_4;

 if (!FUNC_2(VAR_3, VAR_0) &&
     !FUNC_2(VAR_3, VAR_1))
  return -VAR_2;

 FUNC_0("%d\n", VAR_6->handle);
 return FUNC_1(VAR_3, VAR_3->last_context, VAR_6->handle);
}
