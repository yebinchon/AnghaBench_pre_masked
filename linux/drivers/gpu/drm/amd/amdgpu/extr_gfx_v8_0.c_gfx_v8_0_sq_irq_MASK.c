
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {unsigned int* src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {unsigned int ih_data; int work; } ;
struct TYPE_3__ {TYPE_2__ sq_work; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (struct amdgpu_device*,unsigned int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
      struct amdgpu_irq_src *VAR_1,
      struct amdgpu_iv_entry *VAR_2)
{
 unsigned VAR_3 = VAR_2->src_data[0];






 if (FUNC_2(&VAR_0->gfx.sq_work.work)) {
  FUNC_0(VAR_0, VAR_3);
 } else {
  VAR_0->gfx.sq_work.ih_data = VAR_3;
  FUNC_1(&VAR_0->gfx.sq_work.work);
 }

 return 0;
}
