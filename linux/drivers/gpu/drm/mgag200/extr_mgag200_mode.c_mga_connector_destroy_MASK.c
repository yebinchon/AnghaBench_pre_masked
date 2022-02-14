
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_connector {int i2c; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int ) ;
 struct mga_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_0)
{
 struct mga_connector *VAR_1 = FUNC_3(VAR_0);
 FUNC_2(VAR_1->i2c);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
