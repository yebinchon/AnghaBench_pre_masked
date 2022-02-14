
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda998x_priv {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tda998x_priv*,int ) ;
 struct tda998x_priv* FUNC_1 (struct drm_connector*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_4, bool VAR_5)
{
 struct tda998x_priv *VAR_6 = FUNC_1(VAR_4);
 u8 VAR_7 = FUNC_0(VAR_6, VAR_1);

 return (VAR_7 & VAR_0) ? VAR_2 :
   VAR_3;
}
