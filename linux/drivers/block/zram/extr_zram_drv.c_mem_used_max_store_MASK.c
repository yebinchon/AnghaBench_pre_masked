
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_used_pages; } ;
struct zram {int init_lock; int mem_pool; TYPE_1__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct zram*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct zram *VAR_7 = FUNC_1(VAR_1);

 VAR_5 = FUNC_4(VAR_3, 10, &VAR_6);
 if (VAR_5 || VAR_6 != 0)
  return -VAR_0;

 FUNC_2(&VAR_7->init_lock);
 if (FUNC_3(VAR_7)) {
  FUNC_0(&VAR_7->stats.max_used_pages,
    FUNC_6(VAR_7->mem_pool));
 }
 FUNC_5(&VAR_7->init_lock);

 return VAR_4;
}
