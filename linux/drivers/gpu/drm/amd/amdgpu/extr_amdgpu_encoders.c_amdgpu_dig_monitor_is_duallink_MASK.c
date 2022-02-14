
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int connector_type; } ;
struct amdgpu_connector_atom_dig {int dp_sink_type; } ;
struct amdgpu_connector {struct amdgpu_connector_atom_dig* con_priv; int use_digital; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct drm_connector*) ;
 struct drm_connector* FUNC_1 (struct drm_encoder*) ;
 struct drm_connector* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int ) ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;

bool FUNC_5(struct drm_encoder *VAR_2,
        u32 VAR_3)
{
 struct drm_connector *VAR_4;
 struct amdgpu_connector *VAR_5;
 struct amdgpu_connector_atom_dig *VAR_6;

 VAR_4 = FUNC_1(VAR_2);



 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_4(VAR_4);

 switch (VAR_4->connector_type) {
 case 131:
 case 128:
  if (VAR_5->use_digital) {

   if (FUNC_3(FUNC_0(VAR_4))) {
    if (VAR_3 > 340000)
     return 1;
    else
     return 0;
   } else {
    if (VAR_3 > 165000)
     return 1;
    else
     return 0;
   }
  } else
   return 0;
 case 132:
 case 129:
 case 130:
  VAR_6 = VAR_5->con_priv;
  if ((VAR_6->dp_sink_type == VAR_0) ||
      (VAR_6->dp_sink_type == VAR_1))
   return 0;
  else {

   if (FUNC_3(FUNC_0(VAR_4))) {
    if (VAR_3 > 340000)
     return 1;
    else
     return 0;
   } else {
    if (VAR_3 > 165000)
     return 1;
    else
     return 0;
   }
  }
 default:
  return 0;
 }
}
