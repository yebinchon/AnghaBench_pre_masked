
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wuxga_nt_panel {int prepared; int earliest_wake; int supply; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct wuxga_nt_panel* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_1)
{
 struct wuxga_nt_panel *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->prepared)
  return 0;

 FUNC_2(VAR_2->supply);
 VAR_2->earliest_wake = FUNC_0(FUNC_1(), VAR_0);
 VAR_2->prepared = 0;

 return 0;
}
