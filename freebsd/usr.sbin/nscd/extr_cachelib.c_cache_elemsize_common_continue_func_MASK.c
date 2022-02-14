
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_policy_item_ {int dummy; } ;
struct TYPE_2__ {scalar_t__ satisf_elemsize; } ;
struct cache_common_entry_ {scalar_t__ items_size; TYPE_1__ common_params; } ;



__attribute__((used)) static int
FUNC_0(struct cache_common_entry_ *VAR_0,
 struct cache_policy_item_ *VAR_1)
{

 return ((VAR_0->items_size > VAR_0->common_params.satisf_elemsize) ? 1
      : 0);
}
