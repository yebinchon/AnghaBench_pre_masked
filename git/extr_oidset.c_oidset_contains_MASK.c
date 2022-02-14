
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset {int set; } ;
struct object_id {int dummy; } ;
typedef scalar_t__ khiter_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct object_id const) ;

int FUNC_2(const struct oidset *VAR_0, const struct object_id *VAR_1)
{
 khiter_t VAR_2 = FUNC_1(&VAR_0->set, *VAR_1);
 return VAR_2 != FUNC_0(&VAR_0->set);
}
