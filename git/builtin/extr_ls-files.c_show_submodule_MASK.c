
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct repository {int dummy; } ;
struct dir_struct {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct repository*) ;
 scalar_t__ FUNC_2 (struct repository*) ;
 scalar_t__ FUNC_3 (struct repository*,struct repository*,struct submodule const*) ;
 int FUNC_4 (struct repository*,struct dir_struct*) ;
 struct submodule* FUNC_5 (struct repository*,int *,char const*) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_1,
      struct dir_struct *VAR_2, const char *VAR_3)
{
 struct repository VAR_4;
 const struct submodule *VAR_5 = FUNC_5(VAR_1,
         &VAR_0, VAR_3);

 if (FUNC_3(&VAR_4, VAR_1, VAR_5))
  return;

 if (FUNC_2(&VAR_4) < 0)
  FUNC_0("index file corrupt");

 FUNC_4(&VAR_4, VAR_2);

 FUNC_1(&VAR_4);
}
