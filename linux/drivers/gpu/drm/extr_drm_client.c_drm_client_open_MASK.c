
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int lhead; } ;
struct drm_device {int filelist_mutex; int filelist_internal; int primary; } ;
struct drm_client_dev {struct drm_file* file; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct drm_file*) ;
 int FUNC_1 (struct drm_file*) ;
 struct drm_file* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_client_dev *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_file *VAR_2;

 VAR_2 = FUNC_2(VAR_1->primary);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_4(&VAR_1->filelist_mutex);
 FUNC_3(&VAR_2->lhead, &VAR_1->filelist_internal);
 FUNC_5(&VAR_1->filelist_mutex);

 VAR_0->file = VAR_2;

 return 0;
}
