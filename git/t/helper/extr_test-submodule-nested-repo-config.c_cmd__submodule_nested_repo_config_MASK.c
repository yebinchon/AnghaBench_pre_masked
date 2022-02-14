
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int dummy; } ;
struct repository {int dummy; } ;


 int FUNC_0 (int,char const**,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct repository*,char const*) ;
 scalar_t__ FUNC_2 (struct repository*,int ,struct submodule const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 struct submodule* FUNC_5 (int ,int *,char const*) ;
 int VAR_1 ;

int FUNC_6(int VAR_2, const char **VAR_3)
{
 struct repository VAR_4;
 const struct submodule *VAR_5;

 if (VAR_2 < 3)
  FUNC_0(VAR_2, VAR_3, "Wrong number of arguments.");

 FUNC_3();

 VAR_5 = FUNC_5(VAR_1, &VAR_0, VAR_3[1]);
 if (FUNC_2(&VAR_4, VAR_1, VAR_5)) {
  FUNC_0(VAR_2, VAR_3, "Submodule not found.");
 }


 FUNC_1(&VAR_4, VAR_3[2]);

 FUNC_4(VAR_1);

 return 0;
}
