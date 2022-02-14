
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int len; struct cache* private; } ;
struct cache {int origin_dev; int cache_dev; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0,
     iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 int VAR_3 = 0;
 struct cache *VAR_4 = VAR_0->private;

 VAR_3 = VAR_1(VAR_0, VAR_4->cache_dev, 0, FUNC_0(VAR_4->cache_dev), VAR_2);
 if (!VAR_3)
  VAR_3 = VAR_1(VAR_0, VAR_4->origin_dev, 0, VAR_0->len, VAR_2);

 return VAR_3;
}
