
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lo; scalar_t__ hi; } ;
union uint64_overlay {int full; TYPE_1__ part; } ;
typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

acpi_status FUNC_3(u64 VAR_2, u32 VAR_3, u64 *VAR_4)
{
 union uint64_overlay VAR_5;

 FUNC_0(VAR_1);

 VAR_5.full = VAR_2;

 if ((VAR_3 & 63) >= 32) {
  VAR_5.part.lo = VAR_5.part.hi;
  VAR_5.part.hi = 0;
  VAR_3 = (VAR_3 & 63) - 32;
 }
 FUNC_1(VAR_5.part.hi,
      VAR_5.part.lo, VAR_3);



 if (VAR_4) {
  *VAR_4 = VAR_5.full;
 }

 FUNC_2(VAR_0);
}
