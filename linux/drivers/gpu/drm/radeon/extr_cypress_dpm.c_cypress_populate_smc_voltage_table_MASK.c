
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct atom_voltage_table {unsigned int count; TYPE_1__* entries; } ;
struct TYPE_5__ {int * lowSMIO; scalar_t__* highSMIO; } ;
struct TYPE_4__ {int smio_low; } ;
typedef TYPE_2__ RV770_SMC_STATETABLE ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
            struct atom_voltage_table *VAR_1,
            RV770_SMC_STATETABLE *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  VAR_2->highSMIO[VAR_3] = 0;
  VAR_2->lowSMIO[VAR_3] |= FUNC_0(VAR_1->entries[VAR_3].smio_low);
 }
}
