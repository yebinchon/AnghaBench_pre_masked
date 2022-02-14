
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jh057n {int prepared; int vcc; int iovcc; } ;
struct drm_panel {int dummy; } ;


 struct jh057n* FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 FUNC_1(VAR_1->iovcc);
 FUNC_1(VAR_1->vcc);
 VAR_1->prepared = 0;

 return 0;
}
