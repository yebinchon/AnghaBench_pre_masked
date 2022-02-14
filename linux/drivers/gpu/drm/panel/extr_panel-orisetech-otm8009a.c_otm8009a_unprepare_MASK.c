
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int prepared; int supply; scalar_t__ reset_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 struct otm8009a* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct otm8009a *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 if (VAR_1->reset_gpio) {
  FUNC_0(VAR_1->reset_gpio, 1);
  FUNC_1(20);
 }

 FUNC_3(VAR_1->supply);

 VAR_1->prepared = 0;

 return 0;
}
