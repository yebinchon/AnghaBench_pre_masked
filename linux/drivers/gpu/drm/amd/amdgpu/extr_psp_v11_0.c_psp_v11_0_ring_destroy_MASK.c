
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_ring {int ring_mem; int ring_mem_mc_addr; } ;
struct psp_context {struct amdgpu_device* adev; struct psp_ring km_ring; } ;
struct TYPE_2__ {int rbuf; } ;
struct amdgpu_device {TYPE_1__ firmware; } ;
typedef enum psp_ring_type { ____Placeholder_psp_ring_type } psp_ring_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (struct psp_context*,int) ;

__attribute__((used)) static int FUNC_3(struct psp_context *VAR_0,
     enum psp_ring_type VAR_1)
{
 int VAR_2 = 0;
 struct psp_ring *VAR_3 = &VAR_0->km_ring;
 struct amdgpu_device *VAR_4 = VAR_0->adev;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0("Fail to stop psp ring\n");

 FUNC_1(&VAR_4->firmware.rbuf,
         &VAR_3->ring_mem_mc_addr,
         (void **)&VAR_3->ring_mem);

 return VAR_2;
}
