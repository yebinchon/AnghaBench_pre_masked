
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_mode_create_dumb {int pitch; int width; int size; int height; int handle; int bpp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_file*,int ,int*,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct drm_device*) ;

int
FUNC_5(struct drm_file *VAR_5,
       struct drm_device *VAR_6,
       struct drm_mode_create_dumb *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_7->bpp, 8);
 u32 VAR_9;

 switch (VAR_8) {
 case 1:
  VAR_9 = VAR_0;
  break;
 case 2:
  VAR_9 = VAR_2;
  break;
 case 4:
  VAR_9 = VAR_3;
  break;
 default:
  return -VAR_4;
 }


 VAR_7->pitch = FUNC_0(VAR_7->width * VAR_8, 64);


 if (VAR_7->pitch > FUNC_3(FUNC_4(VAR_6), VAR_9,
          VAR_1))
  VAR_7->pitch = FUNC_0(VAR_7->pitch, 4096);

 VAR_7->size = VAR_7->pitch * VAR_7->height;
 return FUNC_2(VAR_5, FUNC_4(VAR_6),
          &VAR_7->size, &VAR_7->handle);
}
