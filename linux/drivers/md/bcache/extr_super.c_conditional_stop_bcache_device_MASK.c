
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cached_dev {scalar_t__ stop_when_cache_set_failed; int io_disable; int has_dirty; } ;
struct TYPE_4__ {int set_uuid; } ;
struct cache_set {TYPE_2__ sb; } ;
struct bcache_device {TYPE_1__* disk; } ;
struct TYPE_3__ {int disk_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bcache_device*) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct cache_set *VAR_1,
        struct bcache_device *VAR_2,
        struct cached_dev *VAR_3)
{
 if (VAR_3->stop_when_cache_set_failed == VAR_0) {
  FUNC_2("stop_when_cache_set_failed of %s is \"always\", stop it for failed cache set %pU.",
   VAR_2->disk->disk_name, VAR_1->sb.set_uuid);
  FUNC_1(VAR_2);
 } else if (FUNC_0(&VAR_3->has_dirty)) {




  FUNC_2("stop_when_cache_set_failed of %s is \"auto\" and cache is dirty, stop it to avoid potential data corruption.",
   VAR_2->disk->disk_name);
  VAR_3->io_disable = 1;

  FUNC_3();
  FUNC_1(VAR_2);
 } else {




  FUNC_2("stop_when_cache_set_failed of %s is \"auto\" and cache is clean, keep it alive.",
   VAR_2->disk->disk_name);
 }
}
