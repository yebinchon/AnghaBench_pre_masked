
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct imc_mem_info {scalar_t__ vbase; } ;
struct TYPE_2__ {int counter_mem_size; struct imc_mem_info* mem_info; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 struct imc_mem_info* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct imc_mem_info*) ;
 int FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_3, VAR_4 = FUNC_0(FUNC_4(), VAR_2);
 struct imc_mem_info *VAR_5 = VAR_0->mem_info;
 int VAR_6 = VAR_0->counter_mem_size;


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_5[VAR_3].vbase)
   FUNC_1((u64)VAR_5[VAR_3].vbase, FUNC_2(VAR_6));
 }

 FUNC_3(VAR_5);
 FUNC_3(VAR_1);
}
