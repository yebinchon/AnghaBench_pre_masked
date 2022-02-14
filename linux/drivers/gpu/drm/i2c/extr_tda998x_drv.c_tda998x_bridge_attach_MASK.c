
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int dummy; } ;
struct drm_bridge {int dev; } ;


 struct tda998x_priv* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct tda998x_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_bridge *VAR_0)
{
 struct tda998x_priv *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_0->dev);
}
