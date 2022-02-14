
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {size_t me; struct amdgpu_device* adev; } ;
struct TYPE_6__ {TYPE_2__* inst; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_3__ vcn; } ;
struct TYPE_4__ {int jpeg_pitch; } ;
struct TYPE_5__ {TYPE_1__ external; } ;


 long VAR_0 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (struct amdgpu_ring*,int,struct dma_fence**) ;
 int FUNC_2 (struct dma_fence*) ;
 long FUNC_3 (struct dma_fence*,int,long) ;
 int FUNC_4 (int) ;

int FUNC_5(struct amdgpu_ring *VAR_1, long VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_1->adev;
 uint32_t VAR_4 = 0;
 unsigned VAR_5;
 struct dma_fence *VAR_6 = ((void*)0);
 long VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_1, 1, &VAR_6);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_3(VAR_6, 0, VAR_2);
 if (VAR_7 == 0) {
  VAR_7 = -VAR_0;
  goto error;
 } else if (VAR_7 < 0) {
  goto error;
 } else {
  VAR_7 = 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3->vcn.inst[VAR_1->me].external.jpeg_pitch);
  if (VAR_4 == 0xDEADBEEF)
   break;
  FUNC_4(1);
 }

 if (VAR_5 >= VAR_3->usec_timeout)
  VAR_7 = -VAR_0;

 FUNC_2(VAR_6);
error:
 return VAR_7;
}
