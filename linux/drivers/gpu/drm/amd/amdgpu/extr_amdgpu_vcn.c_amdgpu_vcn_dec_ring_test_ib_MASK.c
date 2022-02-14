
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct amdgpu_ring*,int,int *) ;
 long FUNC_1 (struct amdgpu_ring*,int,struct dma_fence**) ;
 int FUNC_2 (struct dma_fence*) ;
 long FUNC_3 (struct dma_fence*,int,long) ;

int FUNC_4(struct amdgpu_ring *VAR_1, long VAR_2)
{
 struct dma_fence *VAR_3;
 long VAR_4;

 VAR_4 = FUNC_0(VAR_1, 1, ((void*)0));
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_1(VAR_1, 1, &VAR_3);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_3(VAR_3, 0, VAR_2);
 if (VAR_4 == 0)
  VAR_4 = -VAR_0;
 else if (VAR_4 > 0)
  VAR_4 = 0;

 FUNC_2(VAR_3);
error:
 return VAR_4;
}
