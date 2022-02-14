
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* states; int state_count; } ;
struct powernow_k8_data {int irt; int rvo; int exttype; int plllock; int vidmvs; int vstable; TYPE_2__ acpi_data; } ;
struct TYPE_3__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(struct powernow_k8_data *VAR_12,
  unsigned int VAR_13)
{
 u64 VAR_14;

 if (!VAR_12->acpi_data.state_count)
  return;

 VAR_14 = VAR_12->acpi_data.states[VAR_13].control;
 VAR_12->irt = (VAR_14 >> VAR_3) & VAR_2;
 VAR_12->rvo = (VAR_14 >> VAR_9) & VAR_8;
 VAR_12->exttype = (VAR_14 >> VAR_1) & VAR_0;
 VAR_12->plllock = (VAR_14 >> VAR_7) & VAR_6;
 VAR_12->vidmvs = 1 << ((VAR_14 >> VAR_5) & VAR_4);
 VAR_12->vstable = (VAR_14 >> VAR_11) & VAR_10;
}
