
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_drm {int wq; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2;
 struct malidp_drm *VAR_4 = VAR_3->dev_private;

 FUNC_0(&VAR_4->wq);

 return VAR_0;
}
