
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold_block {int dummy; } ;
struct threshold_attr {int (* show ) (struct threshold_block*,char*) ;} ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct threshold_block*,char*) ;
 struct threshold_attr* FUNC_1 (struct attribute*) ;
 struct threshold_block* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2, char *VAR_3)
{
 struct threshold_block *VAR_4 = FUNC_2(VAR_1);
 struct threshold_attr *VAR_5 = FUNC_1(VAR_2);
 ssize_t VAR_6;

 VAR_6 = VAR_5->show ? VAR_5->show(VAR_4, VAR_3) : -VAR_0;

 return VAR_6;
}
