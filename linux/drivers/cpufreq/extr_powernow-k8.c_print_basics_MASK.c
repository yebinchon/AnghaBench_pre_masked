
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powernow_k8_data {int numps; int batps; TYPE_1__* powernow_table; } ;
struct TYPE_2__ {int frequency; int driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct powernow_k8_data *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->numps; VAR_2++) {
  if (VAR_1->powernow_table[VAR_2].frequency !=
    VAR_0) {
   FUNC_0("fid 0x%x (%d MHz), vid 0x%x\n",
    VAR_1->powernow_table[VAR_2].driver_data & 0xff,
    VAR_1->powernow_table[VAR_2].frequency/1000,
    VAR_1->powernow_table[VAR_2].driver_data >> 8);
  }
 }
 if (VAR_1->batps)
  FUNC_0("Only %d pstates on battery\n", VAR_1->batps);
}
