
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; scalar_t__ is_mst; } ;
struct TYPE_2__ {scalar_t__ hpd; } ;
struct radeon_connector {TYPE_1__ hpd; struct radeon_connector_atom_dig* con_priv; scalar_t__ is_mst_connector; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; scalar_t__ dpms; struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct drm_connector*,scalar_t__) ;
 int FUNC_1 (struct radeon_connector*) ;
 scalar_t__ FUNC_2 (struct radeon_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct radeon_connector*) ;
 scalar_t__ FUNC_5 (struct radeon_device*,scalar_t__) ;
 int FUNC_6 (struct radeon_device*,scalar_t__) ;
 struct radeon_connector* FUNC_7 (struct drm_connector*) ;

void FUNC_8(struct drm_connector *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_connector *VAR_8 = FUNC_7(VAR_5);

 if (VAR_5->connector_type == VAR_1) {
  struct radeon_connector_atom_dig *VAR_9 =
   VAR_8->con_priv;

  if (VAR_8->is_mst_connector)
   return;
  if (VAR_9->is_mst) {
   FUNC_3(VAR_5);
   return;
  }
 }



 if (VAR_8->hpd.hpd == VAR_4)
  return;

 FUNC_6(VAR_7, VAR_8->hpd.hpd);



 if (VAR_5->dpms != VAR_3)
  return;


 if (VAR_5->connector_type == VAR_1) {
  struct radeon_connector_atom_dig *VAR_10 =
   VAR_8->con_priv;


  if (VAR_10->dp_sink_type != VAR_0)
   return;


  VAR_10->dp_sink_type = FUNC_2(VAR_8);



  if (VAR_10->dp_sink_type == VAR_0 &&
      FUNC_5(VAR_7, VAR_8->hpd.hpd) &&
      FUNC_4(VAR_8)) {

   if (!FUNC_1(VAR_8))
    return;




   FUNC_0(VAR_5, VAR_2);
   FUNC_0(VAR_5, VAR_3);
  }
 }
}
