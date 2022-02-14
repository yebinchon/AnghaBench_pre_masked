
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbm_len; int shareable_bits; } ;
struct rdt_resource {int num_closid; int data_width; int alloc_capable; int alloc_enabled; TYPE_1__ cache; int default_ctrl; } ;


 struct rdt_resource* VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int VAR_2)
{
 struct rdt_resource *VAR_3 = &VAR_0[VAR_1];
 struct rdt_resource *VAR_4 = &VAR_0[VAR_2];

 VAR_4->num_closid = VAR_3->num_closid / 2;
 VAR_4->cache.cbm_len = VAR_3->cache.cbm_len;
 VAR_4->default_ctrl = VAR_3->default_ctrl;
 VAR_4->cache.shareable_bits = VAR_3->cache.shareable_bits;
 VAR_4->data_width = (VAR_4->cache.cbm_len + 3) / 4;
 VAR_4->alloc_capable = 1;




 VAR_4->alloc_enabled = 0;
}
