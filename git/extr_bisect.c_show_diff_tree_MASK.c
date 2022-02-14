
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct repository {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ FUNC_0 (char const**) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 int FUNC_3 (struct repository*,struct rev_info*,char const*) ;
 int FUNC_4 (scalar_t__,char const**,struct rev_info*,int *) ;

__attribute__((used)) static void FUNC_5(struct repository *VAR_1,
      const char *VAR_2,
      struct commit *VAR_3)
{
 const char *VAR_4[] = {
  "diff-tree", "--pretty", "--stat", "--summary", "--cc", ((void*)0)
 };
 struct rev_info VAR_5;

 FUNC_1(VAR_0, ((void*)0));
 FUNC_3(VAR_1, &VAR_5, VAR_2);

 FUNC_4(FUNC_0(VAR_4) - 1, VAR_4, &VAR_5, ((void*)0));
 FUNC_2(&VAR_5, VAR_3);
}
