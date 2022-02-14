
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * robj; int ptr; int gpu_addr; } ;
struct radeon_device {TYPE_1__ vram_scratch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*,int ,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_1 (int *,void**) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->vram_scratch.robj == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_3, VAR_2,
         VAR_0, 1, VAR_1,
         0, ((void*)0), ((void*)0), &VAR_3->vram_scratch.robj);
  if (VAR_4) {
   return VAR_4;
  }
 }

 VAR_4 = FUNC_3(VAR_3->vram_scratch.robj, 0);
 if (FUNC_6(VAR_4 != 0))
  return VAR_4;
 VAR_4 = FUNC_2(VAR_3->vram_scratch.robj,
     VAR_1, &VAR_3->vram_scratch.gpu_addr);
 if (VAR_4) {
  FUNC_5(VAR_3->vram_scratch.robj);
  return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_3->vram_scratch.robj,
    (void **)&VAR_3->vram_scratch.ptr);
 if (VAR_4)
  FUNC_4(VAR_3->vram_scratch.robj);
 FUNC_5(VAR_3->vram_scratch.robj);

 return VAR_4;
}
