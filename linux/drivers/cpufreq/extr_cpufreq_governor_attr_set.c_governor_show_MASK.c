
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct governor_attr {int (* show ) (int ,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*) ;
 struct governor_attr* FUNC_1 (struct attribute*) ;
 int FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct attribute *VAR_1,
        char *VAR_2)
{
 struct governor_attr *VAR_3 = FUNC_1(VAR_1);

 return VAR_3->show(FUNC_2(VAR_0), VAR_2);
}
