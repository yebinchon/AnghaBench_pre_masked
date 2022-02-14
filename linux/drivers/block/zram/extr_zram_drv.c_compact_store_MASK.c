
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int init_lock; int mem_pool; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zram*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct zram *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->init_lock);
 if (!FUNC_2(VAR_5)) {
  FUNC_3(&VAR_5->init_lock);
  return -VAR_0;
 }

 FUNC_4(VAR_5->mem_pool);
 FUNC_3(&VAR_5->init_lock);

 return VAR_4;
}
