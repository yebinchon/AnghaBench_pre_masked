
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {unsigned int devices_max_used; int caching; struct bcache_device** devices; } ;
struct bcache_device {unsigned int id; struct cache_set* c; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bcache_device *VAR_0, struct cache_set *VAR_1,
     unsigned int VAR_2)
{
 VAR_0->id = VAR_2;
 VAR_0->c = VAR_1;
 VAR_1->devices[VAR_2] = VAR_0;

 if (VAR_2 >= VAR_1->devices_max_used)
  VAR_1->devices_max_used = VAR_2 + 1;

 FUNC_0(&VAR_1->caching);
}
