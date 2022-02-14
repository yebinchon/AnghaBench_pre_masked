
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int **,int ,char*,int ) ;
 int FUNC_8 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_remote *VAR_7;
 git_buf VAR_8 = VAR_0;
 char *VAR_9 = "refs/heads/master";
 char *VAR_10 = "refs/heads/haacked";
 char *VAR_11[] = { VAR_9, VAR_10 };
 git_strarray VAR_12 = {
  VAR_11,
  2,
 };

 FUNC_3(&VAR_1, "./test1");
 FUNC_2(FUNC_11(&VAR_6, "./test1", 0));

 FUNC_2(FUNC_5(&VAR_8, FUNC_12(VAR_6), "FETCH_HEAD"));
 FUNC_2(FUNC_7(&VAR_7, VAR_6, "origin", FUNC_1("testrepo.git")));

 FUNC_0(!FUNC_6(VAR_8.ptr));
 FUNC_2(FUNC_8(VAR_7, &VAR_12, ((void*)0), ((void*)0)));
 FUNC_0(FUNC_6(VAR_8.ptr));

 FUNC_2(FUNC_10(VAR_6, VAR_2, ((void*)0)));
 FUNC_0(VAR_3);
 FUNC_0(VAR_5);
 FUNC_0(VAR_4);

 FUNC_9(VAR_7);
 FUNC_4(&VAR_8);
}
