
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shortlog {int dummy; } ;
struct rev_info {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct commit* FUNC_2 (struct rev_info*) ;
 scalar_t__ FUNC_3 (struct rev_info*) ;
 int FUNC_4 (struct shortlog*,struct commit*) ;

__attribute__((used)) static void FUNC_5(struct rev_info *VAR_0, struct shortlog *VAR_1)
{
 struct commit *VAR_2;

 if (FUNC_3(VAR_0))
  FUNC_1(FUNC_0("revision walk setup failed"));
 while ((VAR_2 = FUNC_2(VAR_0)) != ((void*)0))
  FUNC_4(VAR_1, VAR_2);
}
