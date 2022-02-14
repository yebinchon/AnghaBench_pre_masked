
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_hash_dev {TYPE_2__* pdata; } ;
struct TYPE_4__ {unsigned int algs_info_size; TYPE_1__* algs_info; } ;
struct TYPE_3__ {unsigned int size; int * algs_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct stm32_hash_dev *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->pdata->algs_info_size; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->pdata->algs_info[VAR_1].size; VAR_2++)
   FUNC_0(
    &VAR_0->pdata->algs_info[VAR_1].algs_list[VAR_2]);
 }

 return 0;
}
