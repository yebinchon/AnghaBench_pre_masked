
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct atom_voltage_table {unsigned int count; TYPE_1__* entries; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_5__ {int value; scalar_t__ index; } ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef TYPE_2__ SISLANDS_SMC_VOLTAGE_VALUE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1,
         const struct atom_voltage_table *VAR_2,
         u16 VAR_3, SISLANDS_SMC_VOLTAGE_VALUE *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  if (VAR_3 <= VAR_2->entries[VAR_5].value) {
   VAR_4->index = (u8)VAR_5;
   VAR_4->value = FUNC_0(VAR_2->entries[VAR_5].value);
   break;
  }
 }

 if (VAR_5 >= VAR_2->count)
  return -VAR_0;

 return 0;
}
