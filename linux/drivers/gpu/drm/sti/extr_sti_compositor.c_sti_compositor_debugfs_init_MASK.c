
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_compositor {scalar_t__* mixer; scalar_t__* vid; } ;
struct drm_minor {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__,struct drm_minor*) ;
 int FUNC_1 (scalar_t__,struct drm_minor*) ;

int FUNC_2(struct sti_compositor *VAR_2,
    struct drm_minor *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2->vid[VAR_4])
   FUNC_1(VAR_2->vid[VAR_4], VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->mixer[VAR_4])
   FUNC_0(VAR_2->mixer[VAR_4], VAR_3);

 return 0;
}
