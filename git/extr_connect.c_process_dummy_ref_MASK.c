
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct object_id*) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{
 struct object_id VAR_2;
 const char *VAR_3;

 if (FUNC_1(VAR_1, &VAR_2, &VAR_3))
  return 0;
 if (*VAR_3 != ' ')
  return 0;
 VAR_3++;

 return FUNC_0(&VAR_0, &VAR_2) && !FUNC_2(VAR_3, "capabilities^{}");
}
