
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_cache_statistics {int write_misses; int write_hits; int read_misses; int read_hits; } ;
struct TYPE_2__ {int write_miss; int write_hit; int read_miss; int read_hit; } ;
struct cache {TYPE_1__ stats; int cmd; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct dm_cache_statistics*) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_0)
{
 struct dm_cache_statistics VAR_1;

 FUNC_1(VAR_0->cmd, &VAR_1);
 FUNC_0(&VAR_0->stats.read_hit, VAR_1.read_hits);
 FUNC_0(&VAR_0->stats.read_miss, VAR_1.read_misses);
 FUNC_0(&VAR_0->stats.write_hit, VAR_1.write_hits);
 FUNC_0(&VAR_0->stats.write_miss, VAR_1.write_misses);
}
