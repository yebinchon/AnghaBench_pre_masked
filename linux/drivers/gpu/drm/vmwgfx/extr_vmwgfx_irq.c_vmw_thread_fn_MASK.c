
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int cman; int irqthread_pending; int fence_queue; int fman; } ;
struct drm_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct vmw_private* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = (struct drm_device *)VAR_5;
 struct vmw_private *VAR_7 = FUNC_3(VAR_6);
 irqreturn_t VAR_8 = VAR_1;

 if (FUNC_0(VAR_3,
          VAR_7->irqthread_pending)) {
  FUNC_2(VAR_7->fman);
  FUNC_4(&VAR_7->fence_queue);
  VAR_8 = VAR_0;
 }

 if (FUNC_0(VAR_2,
          VAR_7->irqthread_pending)) {
  FUNC_1(VAR_7->cman);
  VAR_8 = VAR_0;
 }

 return VAR_8;
}
