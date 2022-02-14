
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int is_on; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tda998x_priv* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct tda998x_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_3)
{
 struct tda998x_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->is_on) {

  FUNC_1(VAR_4, VAR_0, 0x00);
  FUNC_1(VAR_4, VAR_1, 0x00);
  FUNC_1(VAR_4, VAR_2, 0x00);

  VAR_4->is_on = 0;
 }
}
