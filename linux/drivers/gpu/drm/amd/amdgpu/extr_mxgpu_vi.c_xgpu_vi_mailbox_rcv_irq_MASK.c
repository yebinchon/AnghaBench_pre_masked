
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_iv_entry {int dummy; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int flr_work; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2,
       struct amdgpu_irq_src *VAR_3,
       struct amdgpu_iv_entry *VAR_4)
{
 int VAR_5;


 if (!VAR_1) {

  VAR_5 = FUNC_1(VAR_2, VAR_0);


  if (!VAR_5)
   FUNC_0(&VAR_2->virt.flr_work);
 }

 return 0;
}
