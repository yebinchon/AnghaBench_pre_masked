
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seiko_panel {int prepared; int dvdd; int avdd; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct seiko_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct seiko_panel *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 FUNC_1(VAR_1->avdd);


 FUNC_0(100);

 FUNC_1(VAR_1->dvdd);

 VAR_1->prepared = 0;

 return 0;
}
