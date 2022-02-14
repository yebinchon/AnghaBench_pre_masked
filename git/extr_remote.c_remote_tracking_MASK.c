
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int fetch; } ;
struct object_id {int dummy; } ;


 char* FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (char*,struct object_id*) ;

__attribute__((used)) static int FUNC_2(struct remote *VAR_0, const char *VAR_1,
      struct object_id *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->fetch, VAR_1);
 if (!VAR_3)
  return -1;
 if (FUNC_1(VAR_3, VAR_2))
  return -1;
 return 0;
}
