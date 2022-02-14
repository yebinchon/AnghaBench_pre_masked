
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {int kobj; scalar_t__ num_cache_leaves; int * cache_leaves; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 FUNC_0(VAR_0[VAR_1].cache_leaves);
 VAR_0[VAR_1].cache_leaves = ((void*)0);
 VAR_0[VAR_1].num_cache_leaves = 0;
 FUNC_1(&VAR_0[VAR_1].kobj, 0, sizeof(struct kobject));
 return;
}
