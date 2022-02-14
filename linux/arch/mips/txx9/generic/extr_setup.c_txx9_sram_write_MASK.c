
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9_sramc_dev {scalar_t__ base; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {size_t size; struct txx9_sramc_dev* private; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 int FUNC_0 (scalar_t__,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_0, struct kobject *VAR_1,
          struct bin_attribute *VAR_2,
          char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct txx9_sramc_dev *VAR_6 = VAR_2->private;
 size_t VAR_7 = VAR_2->size;

 if (VAR_4 >= VAR_7)
  return 0;
 if (VAR_4 + VAR_5 > VAR_7)
  VAR_5 = VAR_7 - VAR_4;
 FUNC_0(VAR_6->base + VAR_4, VAR_3, VAR_5);
 return VAR_5;
}
