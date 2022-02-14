
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_connector {TYPE_1__* ddc_bus; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int has_aux; int aux; } ;


 int FUNC_0 (int *) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ddc_bus && VAR_1->ddc_bus->has_aux) {
  FUNC_0(&VAR_1->ddc_bus->aux);
  VAR_1->ddc_bus->has_aux = 0;
 }
}
