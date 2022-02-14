
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_iv_entry {unsigned int* src_data; int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {unsigned int num_hpd; } ;
struct amdgpu_device {int hotplug_work; TYPE_1__ mode_info; } ;
struct TYPE_4__ {int hpd; int reg; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1,
        struct amdgpu_irq_src *VAR_2,
        struct amdgpu_iv_entry *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 unsigned VAR_6;

 if (VAR_3->src_data[0] >= VAR_1->mode_info.num_hpd) {
  FUNC_0("Unhandled interrupt: %d %d\n", VAR_3->src_id, VAR_3->src_data[0]);
  return 0;
 }

 VAR_6 = VAR_3->src_data[0];
 VAR_4 = FUNC_1(VAR_0[VAR_6].reg);
 VAR_5 = VAR_0[VAR_6].hpd;

 if (VAR_4 & VAR_5) {
  FUNC_2(VAR_1, VAR_6);
  FUNC_3(&VAR_1->hotplug_work);
  FUNC_0("IH: HPD%d\n", VAR_6 + 1);
 }

 return 0;
}
