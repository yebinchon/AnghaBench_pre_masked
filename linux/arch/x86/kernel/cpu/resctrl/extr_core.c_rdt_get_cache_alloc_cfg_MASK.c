
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cos_max; } ;
union cpuid_0x10_x_edx {TYPE_1__ split; int full; } ;
struct TYPE_5__ {int cbm_len; } ;
union cpuid_0x10_1_eax {TYPE_2__ split; int full; } ;
typedef int u32 ;
struct TYPE_6__ {int cbm_len; int shareable_bits; } ;
struct rdt_resource {int default_ctrl; int data_width; int alloc_capable; int alloc_enabled; TYPE_3__ cache; scalar_t__ num_closid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int *,int*,int*,int *) ;

__attribute__((used)) static void FUNC_2(int VAR_0, struct rdt_resource *VAR_1)
{
 union cpuid_0x10_1_eax VAR_2;
 union cpuid_0x10_x_edx VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_1(0x00000010, VAR_0, &VAR_2.full, &VAR_4, &VAR_5, &VAR_3.full);
 VAR_1->num_closid = VAR_3.split.cos_max + 1;
 VAR_1->cache.cbm_len = VAR_2.split.cbm_len + 1;
 VAR_1->default_ctrl = FUNC_0(VAR_2.split.cbm_len + 1) - 1;
 VAR_1->cache.shareable_bits = VAR_4 & VAR_1->default_ctrl;
 VAR_1->data_width = (VAR_1->cache.cbm_len + 3) / 4;
 VAR_1->alloc_capable = 1;
 VAR_1->alloc_enabled = 1;
}
