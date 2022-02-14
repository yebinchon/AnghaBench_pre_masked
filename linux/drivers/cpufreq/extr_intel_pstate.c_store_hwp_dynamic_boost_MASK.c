
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_2,
           struct kobj_attribute *VAR_3,
           const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_1);
 VAR_0 = !!VAR_6;
 FUNC_0();
 FUNC_3(&VAR_1);

 return VAR_5;
}
