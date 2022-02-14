
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int mem_pool_allocated; } ;


 int FUNC_0 (struct cache_entry const*) ;
 unsigned int FUNC_1 (struct cache_entry const*) ;
 struct cache_entry* FUNC_2 (struct index_state*,int ) ;
 int FUNC_3 (struct cache_entry*,struct cache_entry const*,unsigned int) ;

struct cache_entry *FUNC_4(const struct cache_entry *VAR_0,
        struct index_state *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 struct cache_entry *VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_0));
 VAR_3 = VAR_4->mem_pool_allocated;

 FUNC_3(VAR_4, VAR_0, VAR_2);
 VAR_4->mem_pool_allocated = VAR_3;
 return VAR_4;
}
