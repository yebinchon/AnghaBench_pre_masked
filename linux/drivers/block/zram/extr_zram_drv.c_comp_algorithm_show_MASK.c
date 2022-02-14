
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int init_lock; int compressor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 size_t VAR_3;
 struct zram *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(&VAR_4->init_lock);
 VAR_3 = FUNC_3(VAR_4->compressor, VAR_2);
 FUNC_2(&VAR_4->init_lock);

 return VAR_3;
}
