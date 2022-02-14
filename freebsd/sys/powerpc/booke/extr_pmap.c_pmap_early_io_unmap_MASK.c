
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_4__ {int mas1; scalar_t__ virt; scalar_t__ size; } ;
typedef TYPE_1__ tlb_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(vm_offset_t VAR_4, vm_size_t VAR_5)
{
 int VAR_6;
 tlb_entry_t VAR_7;
 vm_size_t VAR_8;

 VAR_5 = FUNC_0(VAR_5, VAR_1);
 VAR_8 = VAR_5;
 for (VAR_6 = 0; VAR_6 < VAR_2 && VAR_5 > 0; VAR_6++) {
  FUNC_1(&VAR_7, VAR_6);
  if (!(VAR_7.mas1 & VAR_0))
   continue;
  if (VAR_4 <= VAR_7.virt && (VAR_4 + VAR_8) >= (VAR_7.virt + VAR_7.size)) {
   VAR_5 -= VAR_7.size;
   VAR_7.mas1 &= ~VAR_0;
   FUNC_2(&VAR_7, VAR_6);
  }
 }
 if (VAR_3 == VAR_4 + VAR_8)
  VAR_3 -= VAR_8;
}
