
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char** strings; int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_8__ {char* name; int repository; } ;
typedef TYPE_2__ git_remote_create_options ;
typedef int git_remote ;


 TYPE_2__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,char*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(void)
{
 git_remote *VAR_3;
 git_strarray VAR_4;
 git_remote_create_options VAR_5 = VAR_0;

 VAR_5.name = "test-new";
 VAR_5.repository = VAR_2;

 FUNC_3(FUNC_4(&VAR_3, VAR_1, &VAR_5));
 FUNC_2(FUNC_7(VAR_3), "test-new");
 FUNC_2(FUNC_9(VAR_3), VAR_1);
 FUNC_1(FUNC_8(VAR_3), VAR_2);

 FUNC_3(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(1, VAR_4.count);
 FUNC_2("+refs/heads/*:refs/remotes/test-new/*", VAR_4.strings[0]);

 FUNC_10(&VAR_4);
 FUNC_5(VAR_3);
}
