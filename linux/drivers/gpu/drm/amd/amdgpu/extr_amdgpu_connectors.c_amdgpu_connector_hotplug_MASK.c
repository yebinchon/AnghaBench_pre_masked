
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {scalar_t__ dpms; scalar_t__ connector_type; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct TYPE_2__ {scalar_t__ hpd; } ;
struct amdgpu_connector {TYPE_1__ hpd; struct amdgpu_connector_atom_dig* con_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct amdgpu_connector*) ;
 scalar_t__ FUNC_1 (struct amdgpu_connector*) ;
 scalar_t__ FUNC_2 (struct amdgpu_connector*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_4 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_5 (struct drm_connector*,scalar_t__) ;
 struct amdgpu_connector* FUNC_6 (struct drm_connector*) ;

void FUNC_7(struct drm_connector *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_connector *VAR_8 = FUNC_6(VAR_5);




 if (VAR_8->hpd.hpd == VAR_0)
  return;

 FUNC_4(VAR_7, VAR_8->hpd.hpd);


 if (VAR_5->dpms != VAR_4)
  return;


 if (VAR_5->connector_type == VAR_2) {
  struct amdgpu_connector_atom_dig *VAR_9 =
   VAR_8->con_priv;


  if (VAR_9->dp_sink_type != VAR_1)
   return;


  VAR_9->dp_sink_type = FUNC_1(VAR_8);



  if (VAR_9->dp_sink_type == VAR_1 &&
      FUNC_3(VAR_7, VAR_8->hpd.hpd) &&
      FUNC_2(VAR_8)) {

   if (FUNC_0(VAR_8))
    return;




   FUNC_5(VAR_5, VAR_3);
   FUNC_5(VAR_5, VAR_4);
  }
 }
}
