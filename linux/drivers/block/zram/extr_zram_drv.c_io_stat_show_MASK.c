
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int notify_free; int invalid_io; int failed_writes; int failed_reads; } ;
struct zram {int init_lock; TYPE_1__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct zram *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5;

 FUNC_2(&VAR_4->init_lock);
 VAR_5 = FUNC_3(VAR_3, VAR_0,
   "%8llu %8llu %8llu %8llu\n",
   (u64)FUNC_0(&VAR_4->stats.failed_reads),
   (u64)FUNC_0(&VAR_4->stats.failed_writes),
   (u64)FUNC_0(&VAR_4->stats.invalid_io),
   (u64)FUNC_0(&VAR_4->stats.notify_free));
 FUNC_4(&VAR_4->init_lock);

 return VAR_5;
}
