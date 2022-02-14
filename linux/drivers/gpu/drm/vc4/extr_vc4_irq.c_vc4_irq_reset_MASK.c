
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int job_lock; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;

void FUNC_6(struct drm_device *VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;


 FUNC_0(VAR_1, VAR_0);







 FUNC_0(VAR_2, VAR_0);

 FUNC_1(&VAR_4->job_lock, VAR_5);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_2(&VAR_4->job_lock, VAR_5);
}
