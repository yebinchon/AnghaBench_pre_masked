
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdvo_device_mapping {int slave_addr; } ;
struct drm_psb_private {struct sdvo_device_mapping* sdvo_mappings; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u8
FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_0->dev_private;
 struct sdvo_device_mapping *VAR_3, *VAR_4;

 if (FUNC_0(VAR_1)) {
  VAR_3 = &VAR_2->sdvo_mappings[0];
  VAR_4 = &VAR_2->sdvo_mappings[1];
 } else {
  VAR_3 = &VAR_2->sdvo_mappings[1];
  VAR_4 = &VAR_2->sdvo_mappings[0];
 }


 if (VAR_3->slave_addr)
  return VAR_3->slave_addr;




 if (VAR_4->slave_addr) {
  if (VAR_4->slave_addr == 0x70)
   return 0x72;
  else
   return 0x70;
 }




 if (FUNC_0(VAR_1))
  return 0x70;
 else
  return 0x72;
}
