
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int overflow_mem_work; int v3d; } ;
struct drm_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;

void
FUNC_4(struct drm_device *VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);

 if (!VAR_4->v3d)
  return;


 FUNC_0(VAR_2, VAR_0);


 FUNC_0(VAR_1, VAR_0);


 FUNC_2(VAR_3->irq);

 FUNC_1(&VAR_4->overflow_mem_work);
}
