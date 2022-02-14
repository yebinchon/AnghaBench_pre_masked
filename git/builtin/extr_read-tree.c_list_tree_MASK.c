
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct tree* FUNC_1 (struct object_id*) ;
 struct tree** VAR_2 ;

__attribute__((used)) static int FUNC_2(struct object_id *VAR_3)
{
 struct tree *VAR_4;

 if (VAR_1 >= VAR_0)
  FUNC_0("I cannot read more than %d trees", VAR_0);
 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return -1;
 VAR_2[VAR_1++] = VAR_4;
 return 0;
}
