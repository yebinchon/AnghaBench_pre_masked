
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int devices; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector {int devices; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_encoder*,struct drm_encoder*,int ) ;
 struct drm_encoder* FUNC_3 (struct drm_encoder*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_5 (struct drm_encoder*) ;

enum drm_connector_status
FUNC_6(struct drm_encoder *VAR_18,
       struct drm_connector *VAR_19)
{
 struct drm_device *VAR_20 = VAR_18->dev;
 struct amdgpu_device *VAR_21 = VAR_20->dev_private;
 struct amdgpu_encoder *VAR_22 = FUNC_5(VAR_18);
 struct amdgpu_connector *VAR_23 = FUNC_4(VAR_19);
 struct drm_encoder *VAR_24 = FUNC_3(VAR_18);
 u32 VAR_25;

 if (!VAR_24)
  return VAR_16;

 if ((VAR_23->devices & VAR_2) == 0)
  return VAR_16;


 FUNC_2(VAR_18, VAR_24,
      VAR_13);

 VAR_25 = FUNC_1(VAR_17);

 FUNC_0("Bios 0 scratch %x %08x\n", VAR_25, VAR_22->devices);
 if (VAR_23->devices & VAR_0) {
  if (VAR_25 & VAR_5)
   return VAR_14;
 }
 if (VAR_23->devices & VAR_1) {
  if (VAR_25 & VAR_6)
   return VAR_14;
 }
 if (VAR_23->devices & VAR_3) {
  if (VAR_25 & (VAR_7|VAR_8))
   return VAR_14;
 }
 if (VAR_23->devices & VAR_4) {
  if (VAR_25 & (VAR_9 | VAR_10))
   return VAR_14;
  else if (VAR_25 & (VAR_11 | VAR_12))
   return VAR_14;
 }
 return VAR_15;
}
