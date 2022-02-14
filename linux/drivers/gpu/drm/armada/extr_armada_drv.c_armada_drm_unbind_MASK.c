
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct armada_private* dev_private; } ;
struct device {int dummy; } ;
struct armada_private {int drm; int linear; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int *) ;
 struct drm_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_2(VAR_0);
 struct armada_private *VAR_2 = VAR_1->dev_private;

 FUNC_6(&VAR_2->drm);
 FUNC_0(&VAR_2->drm);

 FUNC_5(&VAR_2->drm);

 FUNC_3(&VAR_2->drm);

 FUNC_1(VAR_0, &VAR_2->drm);

 FUNC_8(&VAR_2->drm);
 FUNC_7(&VAR_2->linear);

 FUNC_4(&VAR_2->drm);
}
