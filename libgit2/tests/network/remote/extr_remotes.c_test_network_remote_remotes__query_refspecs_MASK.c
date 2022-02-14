
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int **,int ,char*,char*,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int * VAR_2 ;

void FUNC_11(void)
{
 git_remote *VAR_3;
 git_strarray VAR_4;
 int VAR_5;

 FUNC_1(FUNC_4(&VAR_3, VAR_0, "query", "git://github.com/libgit2/libgit2", ((void*)0)));
 FUNC_6(VAR_3);

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  FUNC_1(FUNC_2(VAR_0, "query", VAR_1[VAR_5]));
  FUNC_1(FUNC_3(VAR_0, "query", VAR_2[VAR_5]));
 }

 FUNC_1(FUNC_9(&VAR_3, VAR_0, "query"));

 FUNC_1(FUNC_7(&VAR_4, VAR_3));
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  FUNC_0(VAR_1[VAR_5], VAR_4.strings[VAR_5]);
 }
 FUNC_10(&VAR_4);

 FUNC_1(FUNC_8(&VAR_4, VAR_3));
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  FUNC_0(VAR_2[VAR_5], VAR_4.strings[VAR_5]);
 }
 FUNC_10(&VAR_4);

 FUNC_6(VAR_3);
 FUNC_5(VAR_0, "test");
}
