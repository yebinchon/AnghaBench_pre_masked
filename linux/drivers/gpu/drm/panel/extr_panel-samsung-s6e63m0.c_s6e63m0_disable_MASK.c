
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e63m0 {int enabled; int bl_dev; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct s6e63m0* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (struct s6e63m0*,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_1)
{
 struct s6e63m0 *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->enabled)
  return 0;

 FUNC_0(VAR_2->bl_dev);

 FUNC_3(VAR_2, VAR_0);
 FUNC_1(200);

 VAR_2->enabled = 0;

 return 0;
}
