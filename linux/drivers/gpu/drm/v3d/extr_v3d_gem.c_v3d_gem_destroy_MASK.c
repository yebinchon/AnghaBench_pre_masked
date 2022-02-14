
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int pt_paddr; scalar_t__ pt; int dev; int mm; int render_job; int bin_job; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,void*,int ) ;
 int FUNC_2 (int *) ;
 struct v3d_dev* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct v3d_dev*) ;

void
FUNC_5(struct drm_device *VAR_0)
{
 struct v3d_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1);




 FUNC_0(VAR_1->bin_job);
 FUNC_0(VAR_1->render_job);

 FUNC_2(&VAR_1->mm);

 FUNC_1(VAR_1->dev, 4096 * 1024, (void *)VAR_1->pt, VAR_1->pt_paddr);
}
