
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {unsigned int ring_size; int ptr_mask; int use_bus_addr; int * rptr_cpu; void* rptr_addr; int * wptr_cpu; void* wptr_addr; int * ring; void* gpu_addr; int ring_obj; scalar_t__ rptr; } ;
struct TYPE_2__ {int * wb; void* gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; int dev; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,void**,void**) ;
 int FUNC_1 (struct amdgpu_device*,unsigned int) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int*) ;
 int * FUNC_3 (int ,int,void**,int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (unsigned int) ;

int FUNC_6(struct amdgpu_device *VAR_4, struct amdgpu_ih_ring *VAR_5,
   unsigned VAR_6, bool VAR_7)
{
 u32 VAR_8;
 int VAR_9;


 VAR_8 = FUNC_5(VAR_6 / 4);
 VAR_6 = (1 << VAR_8) * 4;
 VAR_5->ring_size = VAR_6;
 VAR_5->ptr_mask = VAR_5->ring_size - 1;
 VAR_5->rptr = 0;
 VAR_5->use_bus_addr = VAR_7;

 if (VAR_7) {
  dma_addr_t VAR_10;

  if (VAR_5->ring)
   return 0;




  VAR_5->ring = FUNC_3(VAR_4->dev, VAR_5->ring_size + 8,
           &VAR_10, VAR_2);
  if (VAR_5->ring == ((void*)0))
   return -VAR_1;

  FUNC_4((void *)VAR_5->ring, 0, VAR_5->ring_size + 8);
  VAR_5->gpu_addr = VAR_10;
  VAR_5->wptr_addr = VAR_10 + VAR_5->ring_size;
  VAR_5->wptr_cpu = &VAR_5->ring[VAR_5->ring_size / 4];
  VAR_5->rptr_addr = VAR_10 + VAR_5->ring_size + 4;
  VAR_5->rptr_cpu = &VAR_5->ring[(VAR_5->ring_size / 4) + 1];
 } else {
  unsigned VAR_11, VAR_12;

  VAR_9 = FUNC_2(VAR_4, &VAR_11);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_2(VAR_4, &VAR_12);
  if (VAR_9) {
   FUNC_1(VAR_4, VAR_11);
   return VAR_9;
  }

  VAR_9 = FUNC_0(VAR_4, VAR_5->ring_size, VAR_3,
         VAR_0,
         &VAR_5->ring_obj, &VAR_5->gpu_addr,
         (void **)&VAR_5->ring);
  if (VAR_9) {
   FUNC_1(VAR_4, VAR_12);
   FUNC_1(VAR_4, VAR_11);
   return VAR_9;
  }

  VAR_5->wptr_addr = VAR_4->wb.gpu_addr + VAR_11 * 4;
  VAR_5->wptr_cpu = &VAR_4->wb.wb[VAR_11];
  VAR_5->rptr_addr = VAR_4->wb.gpu_addr + VAR_12 * 4;
  VAR_5->rptr_cpu = &VAR_4->wb.wb[VAR_12];
 }
 return 0;
}
