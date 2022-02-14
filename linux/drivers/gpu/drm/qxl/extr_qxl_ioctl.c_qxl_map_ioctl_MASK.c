
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int ddev; } ;
struct drm_qxl_map {int offset; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; } ;


 int FUNC_0 (struct drm_file*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 struct qxl_device *VAR_3 = VAR_0->dev_private;
 struct drm_qxl_map *VAR_4 = VAR_1;

 return FUNC_0(VAR_2, &VAR_3->ddev, VAR_4->handle,
      &VAR_4->offset);
}
