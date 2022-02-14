
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct prefix_count {char* member_0; int member_2; int count; int expected; scalar_t__ prefix; int member_1; } ;
typedef int git_remote ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int **,int ,char*,int ) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int ,int ,struct prefix_count**) ;
 int FUNC_14 (int *,char*,int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(void)
{
 git_remote *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_4(&VAR_1, "./test1");
 FUNC_3(FUNC_14(&VAR_4, "./test1", 0));

 FUNC_3(FUNC_9(&VAR_5, VAR_4, "origin", FUNC_2("testrepo.git")));
 FUNC_11(VAR_5);
 FUNC_3(FUNC_8(VAR_4, "origin", "+refs/notes/*:refs/origin/notes/*"));

 FUNC_3(FUNC_12(&VAR_5, VAR_4, "origin"));

 FUNC_3(FUNC_6(&VAR_6, FUNC_15(VAR_4), "FETCH_HEAD"));
 FUNC_0(!FUNC_7(VAR_6.ptr));
 FUNC_3(FUNC_10(VAR_5, ((void*)0), ((void*)0), ((void*)0)));
 FUNC_0(FUNC_7(VAR_6.ptr));

 {
  int VAR_7;
  struct prefix_count VAR_8[] = {
   {"refs/notes/", 0, 1},
   {"refs/heads/", 0, 12},
   {"refs/tags/", 0, 7},
   {((void*)0), 0, 0},
  };

  FUNC_3(FUNC_13(VAR_4, VAR_2, &VAR_8));
  FUNC_0(VAR_3);
  for (VAR_7 = 0; VAR_8[VAR_7].prefix; VAR_7++)
   FUNC_1(VAR_8[VAR_7].expected, VAR_8[VAR_7].count);
 }

 FUNC_11(VAR_5);
 FUNC_5(&VAR_6);
}
