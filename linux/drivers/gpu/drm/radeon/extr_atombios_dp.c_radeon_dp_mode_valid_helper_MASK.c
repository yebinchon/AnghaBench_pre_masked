
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector_atom_dig {int dpcd; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,int ,int,unsigned int*,unsigned int*) ;
 struct radeon_connector* FUNC_2 (struct drm_connector*) ;

int FUNC_3(struct drm_connector *VAR_2,
    struct drm_display_mode *VAR_3)
{
 struct radeon_connector *VAR_4 = FUNC_2(VAR_2);
 struct radeon_connector_atom_dig *VAR_5;
 unsigned VAR_6, VAR_7;
 int VAR_8;

 if ((VAR_3->clock > 340000) &&
     (!FUNC_0(VAR_2)))
  return VAR_0;

 if (!VAR_4->con_priv)
  return VAR_0;
 VAR_5 = VAR_4->con_priv;

 VAR_8 = FUNC_1(VAR_2, VAR_5->dpcd,
        VAR_3->clock,
        &VAR_7,
        &VAR_6);
 if (VAR_8)
  return VAR_0;

 if ((VAR_6 == 540000) &&
     (!FUNC_0(VAR_2)))
  return VAR_0;

 return VAR_1;
}
