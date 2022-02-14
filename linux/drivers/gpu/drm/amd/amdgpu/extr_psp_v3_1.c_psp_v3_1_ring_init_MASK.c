
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_ring {int ring_type; int ring_size; int ring_mem; int ring_mem_mc_addr; } ;
struct psp_context {struct psp_ring km_ring; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int rbuf; } ;
struct amdgpu_device {TYPE_1__ firmware; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,void**) ;

__attribute__((used)) static int FUNC_1(struct psp_context *VAR_2,
         enum psp_ring_type VAR_3)
{
 int VAR_4 = 0;
 struct psp_ring *VAR_5;
 struct amdgpu_device *VAR_6 = VAR_2->adev;

 VAR_5 = &VAR_2->km_ring;

 VAR_5->ring_type = VAR_3;


 VAR_5->ring_size = 0x1000;
 VAR_4 = FUNC_0(VAR_6, VAR_5->ring_size, VAR_1,
          VAR_0,
          &VAR_6->firmware.rbuf,
          &VAR_5->ring_mem_mc_addr,
          (void **)&VAR_5->ring_mem);
 if (VAR_4) {
  VAR_5->ring_size = 0;
  return VAR_4;
 }

 return 0;
}
