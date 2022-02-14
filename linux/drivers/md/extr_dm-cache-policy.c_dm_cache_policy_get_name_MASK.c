
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_cache_policy_type {char const* name; TYPE_1__* real; } ;
struct dm_cache_policy {struct dm_cache_policy_type* private; } ;
struct TYPE_2__ {char const* name; } ;



const char *FUNC_0(struct dm_cache_policy *VAR_0)
{
 struct dm_cache_policy_type *VAR_1 = VAR_0->private;


 if (VAR_1->real)
  return VAR_1->real->name;

 return VAR_1->name;
}
