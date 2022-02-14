
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_2__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct amdgpu_device {TYPE_1__ mman; } ;


 int FUNC_0 (struct amdgpu_ring*,int ,int ,unsigned int,int *,struct dma_fence**,int,int) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*,int) ;
 unsigned long VAR_0 ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1, unsigned VAR_2,
        uint64_t VAR_3, uint64_t VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 struct dma_fence *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 VAR_6 = VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct amdgpu_ring *VAR_11 = VAR_1->mman.buffer_funcs_ring;
  VAR_10 = FUNC_0(VAR_11, VAR_3, VAR_4, VAR_2, ((void*)0), &VAR_8,
           0, 0);
  if (VAR_10)
   goto exit_do_move;
  VAR_10 = FUNC_2(VAR_8, 0);
  if (VAR_10)
   goto exit_do_move;
  FUNC_1(VAR_8);
 }
 VAR_7 = VAR_0;
 VAR_10 = FUNC_3(VAR_7 - VAR_6);

exit_do_move:
 if (VAR_8)
  FUNC_1(VAR_8);
 return VAR_10;
}
