
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ phys_addr; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline u64
FUNC_1(efi_memory_desc_t *VAR_0)
{
 return (VAR_0->phys_addr + FUNC_0(VAR_0));
}
