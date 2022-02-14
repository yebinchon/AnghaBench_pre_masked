
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (struct object_id const*) ;
 scalar_t__ FUNC_1 (int *,struct object_id*) ;
 int FUNC_2 (char const*,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const struct object_id *VAR_2, int VAR_3, void *VAR_4)
{
 struct object_id VAR_5;

 if (FUNC_3(VAR_1, "refs/tags/") &&
     !FUNC_2(VAR_1, &VAR_5) &&
     FUNC_1(&VAR_0, &VAR_5))
  FUNC_0(VAR_2);
 return 0;
}
