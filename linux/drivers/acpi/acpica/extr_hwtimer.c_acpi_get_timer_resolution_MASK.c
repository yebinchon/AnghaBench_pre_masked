
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int (*) (int*)) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ) ;

acpi_status FUNC_2(u32 * VAR_4)
{
 FUNC_0(FUNC_2);

 if (!VAR_4) {
  FUNC_1(VAR_1);
 }

 if ((VAR_3.flags & VAR_0) == 0) {
  *VAR_4 = 24;
 } else {
  *VAR_4 = 32;
 }

 FUNC_1(VAR_2);
}
