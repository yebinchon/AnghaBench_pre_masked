
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ non_desktop; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {TYPE_2__ display_info; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct drm_connector*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_connector **VAR_0,
       unsigned int VAR_1,
       bool *VAR_2)
{
 bool VAR_3 = 0;
 struct drm_connector *VAR_4;
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_0[VAR_5];
  VAR_2[VAR_5] = FUNC_1(VAR_4, 1);
  FUNC_0("connector %d enabled? %s\n", VAR_4->base.id,
         VAR_4->display_info.non_desktop ? "non desktop" : VAR_2[VAR_5] ? "yes" : "no");

  VAR_3 |= VAR_2[VAR_5];
 }

 if (VAR_3)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2[VAR_5] = FUNC_1(VAR_0[VAR_5], 0);
}
