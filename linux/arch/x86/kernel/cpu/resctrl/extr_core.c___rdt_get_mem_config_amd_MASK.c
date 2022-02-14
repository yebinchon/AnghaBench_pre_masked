
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cos_max; } ;
union cpuid_0x10_x_edx {TYPE_1__ split; int full; } ;
union cpuid_0x10_3_eax {int full; } ;
typedef int u32 ;
struct TYPE_4__ {int delay_linear; int bw_gran; scalar_t__ min_bw; } ;
struct rdt_resource {int data_width; int alloc_capable; int alloc_enabled; TYPE_2__ membw; int default_ctrl; scalar_t__ num_closid; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int *,int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1(struct rdt_resource *VAR_1)
{
 union cpuid_0x10_3_eax VAR_2;
 union cpuid_0x10_x_edx VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_0(0x80000020, 1, &VAR_2.full, &VAR_4, &VAR_5, &VAR_3.full);
 VAR_1->num_closid = VAR_3.split.cos_max + 1;
 VAR_1->default_ctrl = VAR_0;


 VAR_1->membw.delay_linear = 0;

 VAR_1->membw.min_bw = 0;
 VAR_1->membw.bw_gran = 1;

 VAR_1->data_width = 4;

 VAR_1->alloc_capable = 1;
 VAR_1->alloc_enabled = 1;

 return 1;
}
