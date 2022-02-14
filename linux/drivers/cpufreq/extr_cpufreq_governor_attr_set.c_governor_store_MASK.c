
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct governor_attr {int (* store ) (struct gov_attr_set*,char const*,size_t) ;} ;
struct gov_attr_set {int update_lock; scalar_t__ usage_count; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gov_attr_set*,char const*,size_t) ;
 struct governor_attr* FUNC_3 (struct attribute*) ;
 struct gov_attr_set* FUNC_4 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_1, struct attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct gov_attr_set *VAR_5 = FUNC_4(VAR_1);
 struct governor_attr *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 FUNC_0(&VAR_5->update_lock);
 VAR_7 = VAR_5->usage_count ? VAR_6->store(VAR_5, VAR_3, VAR_4) : -VAR_0;
 FUNC_1(&VAR_5->update_lock);
 return VAR_7;
}
