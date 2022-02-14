
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cache_info {int dummy; } ;
struct cache_attr {int (* show ) (struct cache_info*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct cache_info*,char*) ;
 struct cache_attr* FUNC_1 (struct attribute*) ;
 struct cache_info* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject * VAR_0, struct attribute * VAR_1, char * VAR_2)
{
 struct cache_attr *VAR_3 = FUNC_1(VAR_1);
 struct cache_info *VAR_4 = FUNC_2(VAR_0);
 ssize_t VAR_5;

 VAR_5 = VAR_3->show ? VAR_3->show(VAR_4, VAR_2) : 0;
 return VAR_5;
}
