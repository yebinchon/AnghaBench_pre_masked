
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cos_max; } ;
union cpuid_0x10_x_edx {TYPE_1__ split; int full; } ;
struct TYPE_5__ {void* max_delay; } ;
union cpuid_0x10_3_eax {TYPE_2__ split; int full; } ;
typedef int u32 ;
struct TYPE_6__ {void* max_delay; int delay_linear; void* bw_gran; void* min_bw; } ;
struct rdt_resource {int data_width; int alloc_capable; int alloc_enabled; TYPE_3__ membw; void* default_ctrl; scalar_t__ num_closid; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int *,int*,int*,int *) ;
 int FUNC_1 (struct rdt_resource*) ;

__attribute__((used)) static bool FUNC_2(struct rdt_resource *VAR_2)
{
 union cpuid_0x10_3_eax VAR_3;
 union cpuid_0x10_x_edx VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_0(0x00000010, 3, &VAR_3.full, &VAR_5, &VAR_6, &VAR_4.full);
 VAR_2->num_closid = VAR_4.split.cos_max + 1;
 VAR_2->membw.max_delay = VAR_3.split.max_delay + 1;
 VAR_2->default_ctrl = VAR_0;
 if (VAR_6 & VAR_1) {
  VAR_2->membw.delay_linear = 1;
  VAR_2->membw.min_bw = VAR_0 - VAR_2->membw.max_delay;
  VAR_2->membw.bw_gran = VAR_0 - VAR_2->membw.max_delay;
 } else {
  if (!FUNC_1(VAR_2))
   return 0;
 }
 VAR_2->data_width = 3;

 VAR_2->alloc_capable = 1;
 VAR_2->alloc_enabled = 1;

 return 1;
}
