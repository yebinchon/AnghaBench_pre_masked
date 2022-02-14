
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imc_mem_info {int vbase; } ;
struct TYPE_2__ {struct imc_mem_info* mem_info; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(int VAR_2)
{
 struct imc_mem_info *VAR_3;
 int VAR_4 = (VAR_2 / VAR_1);

 VAR_3 = &VAR_0->mem_info[VAR_4];
 if (!VAR_3->vbase)
  return 0;

 return 1;
}
