
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int is_on; int vip_cntrl_0; int vip_cntrl_1; int vip_cntrl_2; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tda998x_priv* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct tda998x_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_6)
{
 struct tda998x_priv *VAR_7 = FUNC_0(VAR_6);

 if (!VAR_7->is_on) {

  FUNC_1(VAR_7, VAR_0, 0xff);
  FUNC_1(VAR_7, VAR_1, 0xff);
  FUNC_1(VAR_7, VAR_2, 0xff);

  FUNC_1(VAR_7, VAR_3, VAR_7->vip_cntrl_0);
  FUNC_1(VAR_7, VAR_4, VAR_7->vip_cntrl_1);
  FUNC_1(VAR_7, VAR_5, VAR_7->vip_cntrl_2);

  VAR_7->is_on = 1;
 }
}
