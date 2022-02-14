
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_set_client_cap {int capability; int value; } ;
struct drm_file {int stereo_allowed; int universal_planes; int atomic; int aspect_ratio_allowed; int writeback_connectors; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {char* comm; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct drm_device *VAR_5, void *VAR_6, struct drm_file *VAR_7)
{
 struct drm_set_client_cap *VAR_8 = VAR_6;




 if (!FUNC_0(VAR_5, VAR_1))
  return -VAR_3;

 switch (VAR_8->capability) {
 case 130:
  if (VAR_8->value > 1)
   return -VAR_2;
  VAR_7->stereo_allowed = VAR_8->value;
  break;
 case 129:
  if (VAR_8->value > 1)
   return -VAR_2;
  VAR_7->universal_planes = VAR_8->value;
  break;
 case 131:
  if (!FUNC_0(VAR_5, VAR_0))
   return -VAR_3;

  if (VAR_4->comm[0] == 'X' && VAR_8->value == 1) {
   FUNC_1("broken atomic modeset userspace detected, disabling atomic\n");
   return -VAR_3;
  }
  if (VAR_8->value > 2)
   return -VAR_2;
  VAR_7->atomic = VAR_8->value;
  VAR_7->universal_planes = VAR_8->value;



  VAR_7->aspect_ratio_allowed = VAR_8->value;
  break;
 case 132:
  if (VAR_8->value > 1)
   return -VAR_2;
  VAR_7->aspect_ratio_allowed = VAR_8->value;
  break;
 case 128:
  if (!VAR_7->atomic)
   return -VAR_2;
  if (VAR_8->value > 1)
   return -VAR_2;
  VAR_7->writeback_connectors = VAR_8->value;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
