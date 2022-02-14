
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct ast_connector {int i2c; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 struct ast_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct ast_connector *VAR_1 = FUNC_4(VAR_0);
 FUNC_0(VAR_1->i2c);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
