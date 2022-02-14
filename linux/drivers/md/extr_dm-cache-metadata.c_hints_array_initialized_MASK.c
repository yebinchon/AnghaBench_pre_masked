
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {scalar_t__ policy_hint_size; scalar_t__ hint_root; } ;



__attribute__((used)) static bool FUNC_0(struct dm_cache_metadata *VAR_0)
{
 return VAR_0->hint_root && VAR_0->policy_hint_size;
}
