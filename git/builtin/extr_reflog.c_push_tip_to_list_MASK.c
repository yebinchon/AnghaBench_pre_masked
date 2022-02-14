
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 struct commit* FUNC_1 (int ,struct object_id const*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const struct object_id *VAR_3,
       int VAR_4, void *VAR_5)
{
 struct commit_list **VAR_6 = VAR_5;
 struct commit *VAR_7;
 if (VAR_4 & VAR_0)
  return 0;
 VAR_7 = FUNC_1(VAR_1, VAR_3, 1);
 if (!VAR_7)
  return 0;
 FUNC_0(VAR_7, VAR_6);
 return 0;
}
