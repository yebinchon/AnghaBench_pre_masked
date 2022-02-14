
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
struct TYPE_3__ {int mas1; int mas2; int mas3; scalar_t__ mas7; } ;
typedef TYPE_1__ tlb_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,char*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int
FUNC_3(int VAR_13, vm_paddr_t VAR_14, vm_size_t VAR_15, vm_offset_t *VAR_16)
{
 uint32_t VAR_17;
 vm_paddr_t VAR_18;
 vm_paddr_t VAR_19;
 unsigned int VAR_20;
 vm_size_t VAR_21;
 tlb_entry_t VAR_22;

 *VAR_16 = (vm_offset_t)((void*)0);

 FUNC_1(&VAR_22, VAR_13);

 if (!(VAR_22.mas1 & VAR_5))
  return (VAR_0);





 VAR_17 = VAR_22.mas2 & (VAR_8 | VAR_7);
 if (VAR_17 != (VAR_8 | VAR_7))
  return (VAR_1);

 VAR_17 = VAR_22.mas3 & (VAR_10 | VAR_11);
 if (VAR_17 != (VAR_10 | VAR_11))
  return (VAR_1);


 VAR_20 = (VAR_22.mas1 & VAR_3) >> VAR_4;
 FUNC_0((VAR_20), ("tlb1_iomapped: invalid entry tsize"));

 VAR_21 = FUNC_2(VAR_20);
 VAR_18 = (((vm_paddr_t)VAR_22.mas7 & VAR_12) << 32) |
     (VAR_22.mas3 & VAR_9);
 VAR_19 = VAR_18 + VAR_21;

 if ((VAR_14 < VAR_18) || ((VAR_14 + VAR_15) > VAR_19))
  return (VAR_2);


 *VAR_16 = (VAR_22.mas2 & VAR_6) + (VAR_14 - VAR_18);
 return (0);
}
