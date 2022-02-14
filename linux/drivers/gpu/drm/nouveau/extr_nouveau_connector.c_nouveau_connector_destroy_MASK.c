
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_connector* name; scalar_t__ transfer; } ;
struct nouveau_connector {TYPE_1__ aux; struct drm_connector* edid; int hpd; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_connector*) ;
 struct nouveau_connector* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct drm_connector *VAR_0)
{
 struct nouveau_connector *VAR_1 = FUNC_5(VAR_0);
 FUNC_6(&VAR_1->hpd);
 FUNC_4(VAR_1->edid);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 if (VAR_1->aux.transfer) {
  FUNC_3(&VAR_1->aux);
  FUNC_2(&VAR_1->aux);
  FUNC_4(VAR_1->aux.name);
 }
 FUNC_4(VAR_0);
}
