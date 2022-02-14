
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (char*) ;
 struct commit* FUNC_2 (struct rev_info*) ;
 scalar_t__ FUNC_3 (struct rev_info*) ;
 int FUNC_4 (struct commit*) ;
 int FUNC_5 (int ,struct rev_info*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char const**,struct rev_info*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(void)
{
 struct rev_info VAR_1;
 struct commit *VAR_2;
 const char *VAR_3[] = {((void*)0), "--all", ((void*)0)};
 int VAR_4 = FUNC_0(VAR_3) - 1;
 int VAR_5 = 0;

 FUNC_5(VAR_0, &VAR_1, ((void*)0));
 FUNC_7(VAR_4, VAR_3, &VAR_1, ((void*)0));
 if (FUNC_3(&VAR_1))
  FUNC_1("revision walk setup failed");

 while ((VAR_2 = FUNC_2(&VAR_1)) != ((void*)0)) {
  FUNC_4(VAR_2);
  VAR_5 = 1;
 }

 FUNC_6();
 return VAR_5;
}
