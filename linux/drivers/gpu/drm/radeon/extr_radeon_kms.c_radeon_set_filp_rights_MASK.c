
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mutex; } ;
struct radeon_device {TYPE_1__ gem; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0,
       struct drm_file **VAR_1,
       struct drm_file *VAR_2,
       uint32_t *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_0->dev_private;

 FUNC_0(&VAR_4->gem.mutex);
 if (*VAR_3 == 1) {

  if (!*VAR_1)
   *VAR_1 = VAR_2;
 } else if (*VAR_3 == 0) {

  if (*VAR_1 == VAR_2)
   *VAR_1 = ((void*)0);
 }
 *VAR_3 = *VAR_1 == VAR_2 ? 1 : 0;
 FUNC_1(&VAR_4->gem.mutex);
}
