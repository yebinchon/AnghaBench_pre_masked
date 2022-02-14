
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u64 ;
struct zs_pool_stats {int pages_compacted; } ;
struct TYPE_2__ {int huge_pages; int same_pages; int compr_data_size; int max_used_pages; int pages_stored; } ;
struct zram {long limit_pages; int init_lock; TYPE_1__ stats; int mem_pool; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 struct zram* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct zram*) ;
 int FUNC_5 (struct zs_pool_stats*,int,int) ;
 int FUNC_6 (char*,int ,char*,long,long,long,long,long,long,int ,long) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (int ) ;
 int FUNC_9 (int ,struct zs_pool_stats*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct zram *VAR_5 = FUNC_2(VAR_2);
 struct zs_pool_stats VAR_6;
 u64 VAR_7, VAR_8 = 0;
 long VAR_9;
 ssize_t VAR_10;

 FUNC_5(&VAR_6, 0x00, sizeof(struct zs_pool_stats));

 FUNC_3(&VAR_5->init_lock);
 if (FUNC_4(VAR_5)) {
  VAR_8 = FUNC_8(VAR_5->mem_pool);
  FUNC_9(VAR_5->mem_pool, &VAR_6);
 }

 VAR_7 = FUNC_0(&VAR_5->stats.pages_stored);
 VAR_9 = FUNC_1(&VAR_5->stats.max_used_pages);

 VAR_10 = FUNC_6(VAR_4, VAR_1,
   "%8llu %8llu %8llu %8lu %8ld %8llu %8lu %8llu\n",
   VAR_7 << VAR_0,
   (u64)FUNC_0(&VAR_5->stats.compr_data_size),
   VAR_8 << VAR_0,
   VAR_5->limit_pages << VAR_0,
   VAR_9 << VAR_0,
   (u64)FUNC_0(&VAR_5->stats.same_pages),
   VAR_6.pages_compacted,
   (u64)FUNC_0(&VAR_5->stats.huge_pages));
 FUNC_7(&VAR_5->init_lock);

 return VAR_10;
}
