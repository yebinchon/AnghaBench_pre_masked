
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hi; int lo; } ;
union uint64_overlay {int full; TYPE_1__ part; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

acpi_status
FUNC_3(u64 VAR_2, u32 VAR_3, u64 *VAR_4)
{
 union uint64_overlay VAR_5;
 union uint64_overlay VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_1);

 VAR_5.full = VAR_2;





 FUNC_1(0, VAR_5.part.hi, VAR_3,
     VAR_6.part.hi, VAR_7);

 FUNC_1(0, VAR_5.part.lo, VAR_3,
     VAR_6.part.lo, VAR_7);

 VAR_6.part.hi += VAR_7;



 if (VAR_4) {
  *VAR_4 = VAR_6.full;
 }

 FUNC_2(VAR_0);
}
