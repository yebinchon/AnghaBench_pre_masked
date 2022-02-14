
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd101t2587_panel {int prepared; int supply; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 struct osd101t2587_panel* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct osd101t2587_panel *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 FUNC_0(VAR_1->supply);
 VAR_1->prepared = 0;

 return 0;
}
