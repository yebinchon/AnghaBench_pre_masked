
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdma_script_start_addrs {int dummy; } ;
struct sdma_engine {int script_number; int dev; scalar_t__ script_addrs; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct sdma_engine *VAR_1,
  const struct sdma_script_start_addrs *VAR_2)
{
 s32 *VAR_3 = (u32 *)VAR_2;
 s32 *VAR_4 = (u32 *)VAR_1->script_addrs;
 int VAR_5;


 if (!VAR_1->script_number)
  VAR_1->script_number = VAR_0;

 if (VAR_1->script_number > sizeof(struct sdma_script_start_addrs)
      / sizeof(s32)) {
  FUNC_0(VAR_1->dev,
   "SDMA script number %d not match with firmware.\n",
   VAR_1->script_number);
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1->script_number; VAR_5++)
  if (VAR_3[VAR_5] > 0)
   VAR_4[VAR_5] = VAR_3[VAR_5];
}
