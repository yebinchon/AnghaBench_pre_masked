
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int miss_free; int writestall; } ;
struct zram {int init_lock; TYPE_1__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = 1;
 struct zram *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6;

 FUNC_2(&VAR_5->init_lock);
 VAR_6 = FUNC_3(VAR_3, VAR_0,
   "version: %d\n%8llu %8llu\n",
   VAR_4,
   (u64)FUNC_0(&VAR_5->stats.writestall),
   (u64)FUNC_0(&VAR_5->stats.miss_free));
 FUNC_4(&VAR_5->init_lock);

 return VAR_6;
}
