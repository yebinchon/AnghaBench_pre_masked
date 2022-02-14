
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int prepared; scalar_t__ reset_gpio; int supply; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct otm8009a*) ;
 struct otm8009a* FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct otm8009a *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_5(VAR_1->supply);
 if (VAR_2 < 0) {
  FUNC_0("failed to enable supply: %d\n", VAR_2);
  return VAR_2;
 }

 if (VAR_1->reset_gpio) {
  FUNC_1(VAR_1->reset_gpio, 0);
  FUNC_1(VAR_1->reset_gpio, 1);
  FUNC_2(20);
  FUNC_1(VAR_1->reset_gpio, 0);
  FUNC_2(100);
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->prepared = 1;

 return 0;
}
