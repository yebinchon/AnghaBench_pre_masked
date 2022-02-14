
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elog_obj {int kobj; int id; } ;
struct elog_attribute {int attr; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct elog_obj *VAR_0,
         struct elog_attribute *VAR_1,
         const char *VAR_2,
         size_t VAR_3)
{
 FUNC_1(VAR_0->id);
 FUNC_2(&VAR_0->kobj, &VAR_1->attr);
 FUNC_0(&VAR_0->kobj);
 return VAR_3;
}
