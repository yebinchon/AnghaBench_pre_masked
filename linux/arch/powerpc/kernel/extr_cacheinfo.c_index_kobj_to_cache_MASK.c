
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cache_index_dir {struct cache* cache; } ;
struct cache {int dummy; } ;


 struct cache_index_dir* FUNC_0 (struct kobject*) ;

__attribute__((used)) static struct cache *FUNC_1(struct kobject *VAR_0)
{
 struct cache_index_dir *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 return VAR_1->cache;
}
