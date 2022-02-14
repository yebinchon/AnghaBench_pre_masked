
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int *,struct commit*) ;
 int VAR_0 ;
 struct commit* FUNC_1 (int ,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_2)
{
 struct commit *VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -1;
 return FUNC_0(&VAR_0, VAR_3);
}
