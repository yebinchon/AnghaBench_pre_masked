
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
struct TYPE_4__ {int hpd; scalar_t__ reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_4,
       struct amdgpu_irq_src *VAR_5,
       struct amdgpu_iv_entry *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 if (VAR_6->src_data[0] >= VAR_4->mode_info.num_hpd) {
  FUNC_0("Unhandled interrupt: %d %d\n", VAR_6->src_id, VAR_6->src_data[0]);
  return 0;
 }

 VAR_10 = VAR_6->src_data[0];
 VAR_7 = FUNC_1(VAR_2[VAR_10].reg);
 VAR_8 = VAR_2[VAR_10].hpd;

 if (VAR_7 & VAR_8) {
  VAR_9 = FUNC_1(VAR_3 + VAR_1[VAR_10]);
  VAR_9 |= VAR_0;
  FUNC_2(VAR_3 + VAR_1[VAR_10], VAR_9);
  FUNC_3(&VAR_4->hotplug_work);
  FUNC_0("IH: HPD%d\n", VAR_10 + 1);
 }

 return 0;

}
