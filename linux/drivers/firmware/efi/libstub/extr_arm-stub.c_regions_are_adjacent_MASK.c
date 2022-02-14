
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ phys_addr; int num_pages; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(efi_memory_desc_t *VAR_1,
     efi_memory_desc_t *VAR_2)
{
 u64 VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return 0;

 VAR_3 = VAR_1->phys_addr + VAR_1->num_pages * VAR_0;

 return VAR_3 == VAR_2->phys_addr;
}
