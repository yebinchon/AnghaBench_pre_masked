
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int value; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct commit*,int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 struct commit* FUNC_4 (int ,struct object_id*) ;
 int VAR_0 ;

int FUNC_5(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct object_id VAR_4;
 struct commit *VAR_5;

 FUNC_0(VAR_3);

 if (!VAR_2)
  return -1;
 if (FUNC_3(VAR_2, &VAR_4))
  return FUNC_2("malformed object name %s", VAR_2);
 VAR_5 = FUNC_4(VAR_0, &VAR_4);
 if (!VAR_5)
  return FUNC_2("no such commit %s", VAR_2);
 FUNC_1(VAR_5, VAR_1->value);
 return 0;
}
