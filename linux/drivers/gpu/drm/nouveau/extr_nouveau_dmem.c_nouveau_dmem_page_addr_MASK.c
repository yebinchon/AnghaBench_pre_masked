
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {struct nouveau_dmem_chunk* zone_device_data; } ;
struct nouveau_dmem_chunk {unsigned long pfn_first; TYPE_2__* bo; } ;
struct TYPE_3__ {unsigned long offset; } ;
struct TYPE_4__ {TYPE_1__ bo; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_1(struct page *VAR_1)
{
 struct nouveau_dmem_chunk *VAR_2 = VAR_1->zone_device_data;
 unsigned long VAR_3 = FUNC_0(VAR_1) - VAR_2->pfn_first;

 return (VAR_3 << VAR_0) + VAR_2->bo->bo.offset;
}
