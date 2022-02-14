
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_cache_statistics {void* write_misses; void* write_hits; void* read_misses; void* read_hits; } ;
struct TYPE_2__ {int write_miss; int write_hit; int read_miss; int read_hit; } ;
struct cache {int cmd; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct dm_cache_statistics*) ;
 scalar_t__ FUNC_2 (struct cache*) ;

__attribute__((used)) static void FUNC_3(struct cache *VAR_1)
{
 struct dm_cache_statistics VAR_2;

 if (FUNC_2(VAR_1) >= VAR_0)
  return;

 VAR_2.read_hits = FUNC_0(&VAR_1->stats.read_hit);
 VAR_2.read_misses = FUNC_0(&VAR_1->stats.read_miss);
 VAR_2.write_hits = FUNC_0(&VAR_1->stats.write_hit);
 VAR_2.write_misses = FUNC_0(&VAR_1->stats.write_miss);

 FUNC_1(VAR_1->cmd, &VAR_2);
}
