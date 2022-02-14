
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct commit *VAR_2 = *(const struct commit **)VAR_0;
 const struct commit *VAR_3 = *(const struct commit **)VAR_1;
 return FUNC_0(&VAR_2->object.oid, &VAR_3->object.oid);
}
