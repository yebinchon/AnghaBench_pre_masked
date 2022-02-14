
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e63m0 {int prepared; } ;
struct drm_panel {int dummy; } ;


 struct s6e63m0* FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct s6e63m0*) ;
 int FUNC_2 (struct s6e63m0*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct s6e63m0 *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 if (!VAR_1->prepared)
  return 0;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->prepared = 0;

 return 0;
}
