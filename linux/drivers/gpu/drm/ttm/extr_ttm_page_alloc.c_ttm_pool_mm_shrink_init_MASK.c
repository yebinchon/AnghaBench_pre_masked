
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int scan_objects; int count_objects; } ;
struct ttm_pool_manager {TYPE_1__ mm_shrink; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ttm_pool_manager *VAR_2)
{
 VAR_2->mm_shrink.count_objects = VAR_0;
 VAR_2->mm_shrink.scan_objects = VAR_1;
 VAR_2->mm_shrink.seeks = 1;
 return FUNC_0(&VAR_2->mm_shrink);
}
