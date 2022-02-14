
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_2; char* member_4; char* member_5; int member_7; int member_6; int * member_3; int member_1; int member_0; } ;
struct checkout_opts {int conflict_style; int merge; int show_progress; int quiet; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct option FUNC_1 (char,char*,int *,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,int *,int ,int ) ;
 struct option FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct option*) ;
 int VAR_2 ;
 struct option* FUNC_6 (struct option*,struct option*) ;

__attribute__((used)) static struct option *FUNC_7(struct checkout_opts *VAR_3,
      struct option *VAR_4)
{
 struct option VAR_5[] = {
  FUNC_4(&VAR_3->quiet, FUNC_0("suppress progress reporting")),
  { VAR_0, 0, "recurse-submodules", ((void*)0),
       "checkout", "control recursive updating of submodules",
       VAR_1, VAR_2 },
  FUNC_1(0, "progress", &VAR_3->show_progress, FUNC_0("force progress reporting")),
  FUNC_1('m', "merge", &VAR_3->merge, FUNC_0("perform a 3-way merge with the new branch")),
  FUNC_3(0, "conflict", &VAR_3->conflict_style, FUNC_0("style"),
      FUNC_0("conflict style (merge or diff3)")),
  FUNC_2()
 };
 struct option *VAR_6 = FUNC_6(VAR_4, VAR_5);
 FUNC_5(VAR_4);
 return VAR_6;
}
