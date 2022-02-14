
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ucAction; } ;
union dig_transmitter_control {TYPE_2__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct TYPE_7__ {int atom_context; } ;
struct amdgpu_device {TYPE_3__ mode_info; } ;
struct TYPE_8__ {int hpd; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct amdgpu_connector {TYPE_4__ hpd; TYPE_1__ base; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int *,int *) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (union dig_transmitter_control*,int ,int) ;
 struct amdgpu_connector* FUNC_6 (struct drm_connector*) ;

bool
FUNC_7(struct drm_connector *VAR_5,
         int VAR_6)
{
 struct amdgpu_connector *VAR_7 = FUNC_6(VAR_5);
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 union dig_transmitter_control VAR_10;
 int VAR_11 = FUNC_0(VAR_2, VAR_4);
 uint8_t VAR_12, VAR_13;

 if (VAR_5->connector_type != VAR_3)
  goto done;

 if ((VAR_6 != VAR_1) &&
     (VAR_6 != VAR_0))
  goto done;

 if (!FUNC_2(VAR_9->mode_info.atom_context, VAR_11, &VAR_12, &VAR_13))
  goto done;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.v1.ucAction = VAR_6;

 FUNC_1(VAR_9->mode_info.atom_context, VAR_11, (uint32_t *)&VAR_10);


 if (VAR_6 == VAR_1) {
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < 300; VAR_14++) {
   if (FUNC_3(VAR_9, VAR_7->hpd.hpd))
    return 1;
   FUNC_4(1);
  }
  return 0;
 }
done:
 return 1;
}
