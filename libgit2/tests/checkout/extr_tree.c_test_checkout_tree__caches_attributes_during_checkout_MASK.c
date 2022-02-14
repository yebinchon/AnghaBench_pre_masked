
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_10__ {TYPE_1__ paths; int checkout_strategy; int progress_cb; } ;
typedef TYPE_2__ git_checkout_options ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int VAR_5 ;

void FUNC_9(void)
{
 git_checkout_options VAR_6 = VAR_2;
 git_oid VAR_7;
 git_object *VAR_8 = ((void*)0);
 git_buf VAR_9 = VAR_0, VAR_10 = VAR_0;
 char *VAR_11[] = { "ident1.txt", "ident2.txt" };

 VAR_6.progress_cb = VAR_5;

 FUNC_0(VAR_4, "master");
 VAR_6.checkout_strategy = VAR_1;
 VAR_6.paths.strings = VAR_11;
 VAR_6.paths.count = 2;

 FUNC_2(FUNC_8(&VAR_7, VAR_4, "refs/heads/ident"));
 FUNC_2(FUNC_7(&VAR_8, VAR_4, &VAR_7, VAR_3));

 FUNC_2(FUNC_4(VAR_4, VAR_8, &VAR_6));

 FUNC_2(FUNC_5(&VAR_9, "testrepo/ident1.txt"));
 FUNC_2(FUNC_5(&VAR_10, "testrepo/ident2.txt"));

 FUNC_1(VAR_9, "# $Id$", 6);
 FUNC_1(VAR_10, "# $Id$", 6);

 FUNC_2(FUNC_4(VAR_4, VAR_8, &VAR_6));

 FUNC_2(FUNC_5(&VAR_9, "testrepo/ident1.txt"));
 FUNC_2(FUNC_5(&VAR_10, "testrepo/ident2.txt"));

 FUNC_1(VAR_9, "# $Id: ", 7);
 FUNC_1(VAR_10, "# $Id: ", 7);

 FUNC_3(&VAR_9);
 FUNC_3(&VAR_10);
 FUNC_6(VAR_8);
}
