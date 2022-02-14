
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_pool {int dummy; } ;
struct cache_entry {int mem_pool_allocated; } ;


 int FUNC_0 (size_t) ;
 struct cache_entry* FUNC_1 (struct mem_pool*,int ) ;

__attribute__((used)) static inline struct cache_entry *FUNC_2(struct mem_pool *VAR_0, size_t VAR_1)
{
 struct cache_entry *VAR_2;
 VAR_2 = FUNC_1(VAR_0, FUNC_0(VAR_1));
 VAR_2->mem_pool_allocated = 1;
 return VAR_2;
}
