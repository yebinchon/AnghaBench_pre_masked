
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int dummy; } ;
struct etnaviv_drm_private {struct etnaviv_gpu** gpu; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct etnaviv_gpu*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1)
{
 struct etnaviv_drm_private *VAR_2 = VAR_1->dev_private;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct etnaviv_gpu *VAR_4 = VAR_2->gpu[VAR_3];

  if (VAR_4) {
   int VAR_5;

   VAR_5 = FUNC_0(VAR_4);
   if (VAR_5)
    VAR_2->gpu[VAR_3] = ((void*)0);
  }
 }
}
