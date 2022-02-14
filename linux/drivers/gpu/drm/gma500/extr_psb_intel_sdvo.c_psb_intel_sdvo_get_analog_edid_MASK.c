
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_psb_private {size_t crt_ddc_pin; TYPE_2__* gmbus; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_4__ {int adapter; } ;
struct TYPE_3__ {struct drm_psb_private* dev_private; } ;


 struct edid* FUNC_0 (struct drm_connector*,int *) ;

__attribute__((used)) static struct edid *
FUNC_1(struct drm_connector *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev->dev_private;

 return FUNC_0(VAR_0,
       &VAR_1->gmbus[VAR_1->crt_ddc_pin].adapter);
}
