
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; } ;
struct drm_agp_mem {int pages; int memory; int head; scalar_t__ bound; } ;
struct drm_agp_buffer {int handle; } ;
struct TYPE_2__ {int acquired; } ;


 int VAR_0 ;
 struct drm_agp_mem* FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_agp_mem*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_1, struct drm_agp_buffer *VAR_2)
{
 struct drm_agp_mem *VAR_3;

 if (!VAR_1->agp || !VAR_1->agp->acquired)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1, VAR_2->handle);
 if (!VAR_3)
  return -VAR_0;
 if (VAR_3->bound)
  FUNC_2(VAR_3->memory);

 FUNC_4(&VAR_3->head);

 FUNC_1(VAR_3->memory, VAR_3->pages);
 FUNC_3(VAR_3);
 return 0;
}
