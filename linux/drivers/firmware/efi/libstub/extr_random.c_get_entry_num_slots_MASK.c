
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_3__ {scalar_t__ type; int num_pages; scalar_t__ phys_addr; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned long,scalar_t__) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(efi_memory_desc_t *VAR_3,
      unsigned long VAR_4,
      unsigned long VAR_5)
{
 unsigned long VAR_6 = 1UL << VAR_5;
 u64 VAR_7, VAR_8, VAR_9;

 if (VAR_3->type != VAR_0)
  return 0;

 VAR_9 = FUNC_0((u64)VAR_2, VAR_3->phys_addr + VAR_3->num_pages*VAR_1 - 1);

 VAR_7 = FUNC_2(VAR_3->phys_addr, VAR_6);
 VAR_8 = FUNC_1(VAR_9 - VAR_4 + 1, VAR_6);

 if (VAR_7 > VAR_8)
  return 0;

 return ((unsigned long)(VAR_8 - VAR_7) >> VAR_5) + 1;
}
