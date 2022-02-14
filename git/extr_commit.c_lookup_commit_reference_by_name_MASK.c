
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,struct object_id*) ;
 struct commit* FUNC_1 (int ,struct object_id*) ;
 scalar_t__ FUNC_2 (struct commit*) ;
 int VAR_0 ;

struct commit *FUNC_3(const char *VAR_1)
{
 struct object_id VAR_2;
 struct commit *VAR_3;

 if (FUNC_0(VAR_1, &VAR_2))
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (FUNC_2(VAR_3))
  return ((void*)0);
 return VAR_3;
}
