
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_transfer {scalar_t__ dst_point; scalar_t__ pad; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,struct drm_syncobj_transfer*) ;
 int FUNC_2 (struct drm_file*,struct drm_syncobj_transfer*) ;

int
FUNC_3(struct drm_device *VAR_3, void *VAR_4,
      struct drm_file *VAR_5)
{
 struct drm_syncobj_transfer *VAR_6 = VAR_4;
 int VAR_7;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 if (VAR_6->pad)
  return -VAR_1;

 if (VAR_6->dst_point)
  VAR_7 = FUNC_2(VAR_5, VAR_6);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_6);

 return VAR_7;
}
