
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int dummy; } ;
struct etnaviv_file_private {int mmu; int * sched_entity; } ;
struct etnaviv_drm_private {struct etnaviv_gpu** gpu; } ;
struct drm_file {struct etnaviv_file_private* driver_priv; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct etnaviv_file_private*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct etnaviv_drm_private *VAR_3 = VAR_1->dev_private;
 struct etnaviv_file_private *VAR_4 = VAR_2->driver_priv;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct etnaviv_gpu *VAR_6 = VAR_3->gpu[VAR_5];

  if (VAR_6)
   FUNC_0(&VAR_4->sched_entity[VAR_5]);
 }

 FUNC_1(VAR_4->mmu);

 FUNC_2(VAR_4);
}
