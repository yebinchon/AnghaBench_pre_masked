
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ondisk_cache_entry {int dummy; } ;
struct mem_pool {int dummy; } ;
struct index_state {int version; } ;
struct cache_entry {int dummy; } ;


 struct cache_entry* FUNC_0 (struct mem_pool*,int ,struct ondisk_cache_entry*,unsigned long*,struct cache_entry const*) ;
 int FUNC_1 (struct index_state*,int,struct cache_entry*) ;

__attribute__((used)) static unsigned long FUNC_2(struct index_state *VAR_0,
   struct mem_pool *VAR_1, int VAR_2, int VAR_3, const char *VAR_4,
   unsigned long VAR_5, const struct cache_entry *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_5;

 for (VAR_7 = VAR_2; VAR_7 < VAR_2 + VAR_3; VAR_7++) {
  struct ondisk_cache_entry *VAR_9;
  struct cache_entry *VAR_10;
  unsigned long VAR_11;

  VAR_9 = (struct ondisk_cache_entry *)(VAR_4 + VAR_8);
  VAR_10 = FUNC_0(VAR_1, VAR_0->version, VAR_9, &VAR_11, VAR_6);
  FUNC_1(VAR_0, VAR_7, VAR_10);

  VAR_8 += VAR_11;
  VAR_6 = VAR_10;
 }
 return VAR_8 - VAR_5;
}
