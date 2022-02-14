
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node_count; int min_length; } ;
typedef TYPE_1__ git_oid_shorten ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

git_oid_shorten *FUNC_4(size_t VAR_0)
{
 git_oid_shorten *VAR_1;

 FUNC_0((size_t)((int)VAR_0) == VAR_0);

 VAR_1 = FUNC_1(1, sizeof(git_oid_shorten));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_1, 16) < 0) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 VAR_1->node_count = 1;
 VAR_1->min_length = (int)VAR_0;

 return VAR_1;
}
