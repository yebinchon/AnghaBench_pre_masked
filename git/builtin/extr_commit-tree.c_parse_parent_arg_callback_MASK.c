
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct commit_list** value; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;


 int FUNC_0 (int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct object_id*,int ) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,struct object_id*) ;
 int FUNC_5 (int ,struct object_id*) ;
 int FUNC_6 (int ,struct commit_list**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(const struct option *VAR_2,
  const char *VAR_3, int VAR_4)
{
 struct object_id VAR_5;
 struct commit_list **VAR_6 = VAR_2->value;

 FUNC_0(VAR_4, VAR_3);

 if (FUNC_4(VAR_3, &VAR_5))
  FUNC_3(FUNC_1("not a valid object name %s"), VAR_3);

 FUNC_2(&VAR_5, VAR_0);
 FUNC_6(FUNC_5(VAR_1, &VAR_5), VAR_6);
 return 0;
}
