
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_encoder*,struct drm_connector*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct amdgpu_connector* FUNC_3 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

enum drm_connector_status
FUNC_5(struct drm_encoder *VAR_16,
       struct drm_connector *VAR_17)
{
 struct drm_device *VAR_18 = VAR_16->dev;
 struct amdgpu_device *VAR_19 = VAR_18->dev_private;
 struct amdgpu_encoder *VAR_20 = FUNC_4(VAR_16);
 struct amdgpu_connector *VAR_21 = FUNC_3(VAR_17);
 uint32_t VAR_22;

 if (!FUNC_2(VAR_16, VAR_17)) {
  FUNC_0("detect returned false \n");
  return VAR_14;
 }

 VAR_22 = FUNC_1(VAR_15);

 FUNC_0("Bios 0 scratch %x %08x\n", VAR_22, VAR_20->devices);
 if (VAR_21->devices & VAR_0) {
  if (VAR_22 & VAR_4)
   return VAR_12;
 }
 if (VAR_21->devices & VAR_1) {
  if (VAR_22 & VAR_5)
   return VAR_12;
 }
 if (VAR_21->devices & VAR_2) {
  if (VAR_22 & (VAR_6|VAR_7))
   return VAR_12;
 }
 if (VAR_21->devices & VAR_3) {
  if (VAR_22 & (VAR_8 | VAR_9))
   return VAR_12;
  else if (VAR_22 & (VAR_10 | VAR_11))
   return VAR_12;
 }
 return VAR_13;
}
