
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int slb_kern_bitmap; unsigned int slb_used_bitmap; scalar_t__ slb_cache_ptr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2(void)
{
 FUNC_0();
 FUNC_1()->slb_cache_ptr = 0;

 FUNC_1()->slb_kern_bitmap = (1U << VAR_0) - 1;
 FUNC_1()->slb_used_bitmap = FUNC_1()->slb_kern_bitmap;
}
