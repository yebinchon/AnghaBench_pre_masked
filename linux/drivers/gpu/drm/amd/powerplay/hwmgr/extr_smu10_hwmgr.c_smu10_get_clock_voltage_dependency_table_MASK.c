
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct smu10_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_5__ {int Freq; int Vol; } ;
struct TYPE_4__ {int clk; int vol; } ;
typedef TYPE_2__ DpmClock_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct smu10_voltage_dependency_table* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2,
   struct smu10_voltage_dependency_table **VAR_3,
   uint32_t VAR_4, const DpmClock_t *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 struct smu10_voltage_dependency_table *VAR_8;

 VAR_6 = sizeof(uint32_t) + sizeof(struct smu10_voltage_dependency_table) * VAR_4;
 VAR_8 = FUNC_0(VAR_6, VAR_1);

 if (((void*)0) == VAR_8)
  return -VAR_0;

 VAR_8->count = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_8->count; VAR_7++) {
  VAR_8->entries[VAR_7].clk = VAR_5->Freq * 100;
  VAR_8->entries[VAR_7].vol = VAR_5->Vol;
  VAR_5++;
 }

 *VAR_3 = VAR_8;

 return 0;
}
