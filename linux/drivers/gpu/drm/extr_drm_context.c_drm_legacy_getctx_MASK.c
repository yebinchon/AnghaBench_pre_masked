
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_ctx {scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;

int FUNC_1(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct drm_ctx *VAR_6 = VAR_4;

 if (!FUNC_0(VAR_3, VAR_0) &&
     !FUNC_0(VAR_3, VAR_1))
  return -VAR_2;


 VAR_6->flags = 0;

 return 0;
}
