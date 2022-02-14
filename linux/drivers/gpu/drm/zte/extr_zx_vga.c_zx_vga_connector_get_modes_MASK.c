
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zx_vga {int connected; scalar_t__ mmio; TYPE_1__* ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int adap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct edid*) ;
 struct zx_vga* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_3)
{
 struct zx_vga *VAR_4 = FUNC_4(VAR_3);
 struct edid *VAR_5;
 int VAR_6;





 FUNC_5(VAR_4->mmio + VAR_0, 0);

 VAR_5 = FUNC_2(VAR_3, &VAR_4->ddc->adap);
 if (!VAR_5) {






  FUNC_5(VAR_4->mmio + VAR_0,
     VAR_2);
  VAR_4->connected = 0;
  return 0;
 }





 FUNC_5(VAR_4->mmio + VAR_0, VAR_1);

 FUNC_1(VAR_3, VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_5);
 FUNC_3(VAR_5);

 return VAR_6;
}
