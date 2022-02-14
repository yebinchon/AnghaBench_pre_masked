
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct smu7_leakage_voltage {size_t count; size_t* leakage_id; size_t* actual_voltage; } ;
struct pp_hwmgr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_1,
  uint32_t *VAR_2, struct smu7_leakage_voltage *VAR_3)
{
 uint32_t VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {


  if (VAR_3->leakage_id[VAR_4] == *VAR_2) {
   *VAR_2 = VAR_3->actual_voltage[VAR_4];
   break;
  }
 }

 if (*VAR_2 > VAR_0)
  FUNC_0("Voltage value looks like a Leakage ID but it's not patched \n");
}
