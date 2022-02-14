
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int drm_i810_private_t ;
struct TYPE_3__ {int func; } ;
typedef TYPE_1__ drm_i810_init_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int *,TYPE_1__*) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 drm_i810_private_t *VAR_6;
 drm_i810_init_t *VAR_7 = VAR_4;
 int VAR_8 = 0;

 switch (VAR_7->func) {
 case 128:
  FUNC_0("Using v1.4 init.\n");
  VAR_6 = FUNC_3(sizeof(drm_i810_private_t), VAR_2);
  if (VAR_6 == ((void*)0))
   return -VAR_1;
  VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_7);
  break;

 case 129:
  FUNC_0("DMA Cleanup\n");
  VAR_8 = FUNC_1(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_8;
}
