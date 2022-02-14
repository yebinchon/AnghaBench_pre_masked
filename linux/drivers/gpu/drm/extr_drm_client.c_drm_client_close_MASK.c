
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int filelist_mutex; } ;
struct drm_client_dev {TYPE_1__* file; struct drm_device* dev; } ;
struct TYPE_2__ {int lhead; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_client_dev *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_2(&VAR_1->filelist_mutex);
 FUNC_1(&VAR_0->file->lhead);
 FUNC_3(&VAR_1->filelist_mutex);

 FUNC_0(VAR_0->file);
}
