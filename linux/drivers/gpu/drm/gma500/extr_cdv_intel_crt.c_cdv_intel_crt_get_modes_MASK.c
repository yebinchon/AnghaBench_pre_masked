
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gma_encoder {TYPE_1__* ddc_bus; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int adapter; } ;


 struct gma_encoder* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,int *) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_0,
           &VAR_1->ddc_bus->adapter);
}
