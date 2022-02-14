
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,char,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = FUNC_1(VAR_3, '\n', VAR_4);
 int VAR_6;

 FUNC_2(&VAR_0);
 VAR_6 = FUNC_0(VAR_3, VAR_5 ? VAR_5 - VAR_3 : VAR_4);
 FUNC_3(&VAR_0);

 return VAR_6 < 0 ? VAR_6 : VAR_4;
}
