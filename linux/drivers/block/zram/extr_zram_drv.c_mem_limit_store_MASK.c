
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zram {int limit_pages; int init_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 u64 VAR_6;
 char *VAR_7;
 struct zram *VAR_8 = FUNC_1(VAR_2);

 VAR_6 = FUNC_3(VAR_4, &VAR_7);
 if (VAR_4 == VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_8->init_lock);
 VAR_8->limit_pages = FUNC_0(VAR_6) >> VAR_1;
 FUNC_4(&VAR_8->init_lock);

 return VAR_5;
}
