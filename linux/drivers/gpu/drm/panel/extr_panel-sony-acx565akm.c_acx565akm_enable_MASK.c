
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_panel {int dummy; } ;
struct acx565akm_panel {int mutex; } ;


 int FUNC_0 (struct acx565akm_panel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct acx565akm_panel* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct acx565akm_panel *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->mutex);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->mutex);

 return 0;
}
