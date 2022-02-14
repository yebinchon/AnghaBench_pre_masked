
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int set; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int *,struct object_id const,int*) ;

int FUNC_1(struct oidset *VAR_0, const struct object_id *VAR_1)
{
 int VAR_2;
 FUNC_0(&VAR_0->set, *VAR_1, &VAR_2);
 return !VAR_2;
}
