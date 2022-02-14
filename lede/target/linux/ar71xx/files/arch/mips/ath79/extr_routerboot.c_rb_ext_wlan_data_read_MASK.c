
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {size_t size; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int *,size_t) ;
 int * VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_1(struct file *VAR_2, struct kobject *VAR_3,
        struct bin_attribute *VAR_4, char *VAR_5,
        loff_t VAR_6, size_t VAR_7)
{
         if (VAR_6 + VAR_7 > VAR_4->size)
                 return -VAR_0;

         FUNC_0(VAR_5, &VAR_1[VAR_6], VAR_7);

         return VAR_7;
}
