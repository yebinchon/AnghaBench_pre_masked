
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {struct dm_dirty_log* log; } ;
struct dm_dirty_log {int dummy; } ;



struct dm_dirty_log *FUNC_0(struct dm_region_hash *VAR_0)
{
 return VAR_0->log;
}
