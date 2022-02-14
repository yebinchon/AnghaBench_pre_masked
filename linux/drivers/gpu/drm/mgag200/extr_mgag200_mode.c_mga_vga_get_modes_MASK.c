
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mga_connector {TYPE_1__* i2c; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct edid*) ;
 struct mga_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct mga_connector *VAR_1 = FUNC_4(VAR_0);
 struct edid *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->i2c->adapter);
 if (VAR_2) {
  FUNC_1(VAR_0, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_3(VAR_2);
 }
 return VAR_3;
}
