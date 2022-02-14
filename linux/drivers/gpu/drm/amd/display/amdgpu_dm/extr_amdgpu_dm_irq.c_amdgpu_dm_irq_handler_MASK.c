
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_iv_entry {int * src_data; int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int dc; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0,
     struct amdgpu_irq_src *VAR_1,
     struct amdgpu_iv_entry *VAR_2)
{

 enum dc_irq_source VAR_3 =
  FUNC_3(
   VAR_0->dm.dc,
   VAR_2->src_id,
   VAR_2->src_data[0]);

 FUNC_2(VAR_0->dm.dc, VAR_3);


 FUNC_0(VAR_0, VAR_3);

 FUNC_1(VAR_0, VAR_3);

 return 0;
}
