
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_5__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int **,int ) ;

void FUNC_16(void)
{
 git_index *VAR_1;
 git_blob *VAR_2;
 git_buf VAR_3 = { 0 };
 FUNC_2(
  "empty_standard_repo/.gitattributes",
  "hero.*.rev-ident text ident prereverse eol=lf\n");

 FUNC_2(
  "empty_standard_repo/hero.1.rev-ident",
  "This is a test\n$Id$\nHave fun!\n");

 FUNC_2(
  "empty_standard_repo/hero.2.rev-ident",
  "Another test\n$dI$\nCrazy!\n");

 FUNC_3(FUNC_15(&VAR_1, VAR_0));
 FUNC_3(FUNC_11(VAR_1, "hero.1.rev-ident"));
 FUNC_3(FUNC_11(VAR_1, "hero.2.rev-ident"));
 FUNC_4(((void*)0), VAR_0, ((void*)0), 0, "Filter chains\n");
 FUNC_12(VAR_1);

 FUNC_3(FUNC_8(&VAR_2, VAR_0,
  & FUNC_13(VAR_1, "hero.1.rev-ident", 0)->id));
 FUNC_1(
  "\n!nuf evaH\n$dI$\ntset a si sihT", FUNC_9(VAR_2));
 FUNC_3(FUNC_5(&VAR_3, VAR_2, "hero.1.rev-ident", ((void*)0)));


 FUNC_1(
  "This is a test\n$Id$\nHave fun!\n", VAR_3.ptr);
 FUNC_6(VAR_2);

 FUNC_3(FUNC_8(&VAR_2, VAR_0,
  & FUNC_13(VAR_1, "hero.2.rev-ident", 0)->id));
 FUNC_1(
  "\n!yzarC\n$Id$\ntset rehtonA", FUNC_9(VAR_2));
 FUNC_3(FUNC_5(&VAR_3, VAR_2, "hero.2.rev-ident", ((void*)0)));


 FUNC_1(
  "Another test\n$ 59001fe193103b1016b27027c0c827d036fd0ac8 :dI$\nCrazy!\n", VAR_3.ptr);
 FUNC_0(0, FUNC_14(
  FUNC_7(VAR_2), "8ca0df630d728c0c72072b6101b301391ef10095"));
 FUNC_6(VAR_2);

 FUNC_10(&VAR_3);
}
