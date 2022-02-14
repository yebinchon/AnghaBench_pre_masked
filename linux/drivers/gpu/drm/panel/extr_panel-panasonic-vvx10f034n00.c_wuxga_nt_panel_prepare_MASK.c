
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wuxga_nt_panel {int prepared; int supply; int earliest_wake; } ;
struct drm_panel {int dev; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct wuxga_nt_panel* FUNC_6 (struct drm_panel*) ;
 int FUNC_7 (struct wuxga_nt_panel*) ;

__attribute__((used)) static int FUNC_8(struct drm_panel *VAR_1)
{
 struct wuxga_nt_panel *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;
 s64 VAR_4;

 if (VAR_2->prepared)
  return 0;





 VAR_4 = FUNC_2(VAR_2->earliest_wake, FUNC_1());


 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 if (VAR_4 > 0)
  FUNC_3(VAR_4);

 VAR_3 = FUNC_5(VAR_2->supply);
 if (VAR_3 < 0)
  return VAR_3;





 FUNC_3(250);

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "failed to set panel on: %d\n", VAR_3);
  goto poweroff;
 }

 VAR_2->prepared = 1;

 return 0;

poweroff:
 FUNC_4(VAR_2->supply);

 return VAR_3;
}
