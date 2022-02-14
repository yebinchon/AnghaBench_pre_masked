
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int ctxlist; scalar_t__ dev_private; } ;
typedef int drm_via_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(struct drm_device *VAR_0, int VAR_1)
{
 drm_via_private_t *VAR_2 = (drm_via_private_t *) VAR_0->dev_private;

 FUNC_5(VAR_2, VAR_1);



 if (FUNC_2(&VAR_0->ctxlist)) {
  FUNC_0("Last Context\n");
  FUNC_1(VAR_0);
  FUNC_3(VAR_2);
  FUNC_4(VAR_0);
 }
 return 1;
}
