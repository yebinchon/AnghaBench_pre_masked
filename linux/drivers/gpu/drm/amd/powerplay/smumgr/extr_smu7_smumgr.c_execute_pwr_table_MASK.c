
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int device; } ;
struct TYPE_3__ {int reg; int data; } ;
typedef TYPE_1__ PWR_Command_Table ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_0, const PWR_Command_Table *VAR_1, int VAR_2)
{
 int VAR_3;
 uint32_t VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = VAR_1->reg;
  VAR_5 = VAR_1->data;
  if (VAR_4 != 0xffffffff)
   FUNC_0(VAR_0->device, VAR_4, VAR_5);
  else
   break;
  VAR_1++;
 }
}
