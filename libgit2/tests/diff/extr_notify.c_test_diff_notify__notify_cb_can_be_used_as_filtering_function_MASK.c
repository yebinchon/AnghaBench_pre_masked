
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char** strings; int count; } ;
struct TYPE_9__ {int flags; TYPE_1__ pathspec; int notify_cb; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_10__ {int files; } ;
typedef TYPE_3__ diff_expects ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int *,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

void FUNC_7(void)
{
 git_diff_options VAR_6 = VAR_2;
 git_diff *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 diff_expects VAR_9;

 VAR_5 = FUNC_2("status");

 VAR_6.flags |= VAR_0 | VAR_1;
 VAR_6.notify_cb = VAR_4;
 VAR_6.pathspec.strings = &VAR_8;
 VAR_6.pathspec.count = 1;

 VAR_8 = "*_deleted";
 FUNC_6(&VAR_9, 0, sizeof(VAR_9));

 FUNC_1(FUNC_5(&VAR_7, VAR_5, ((void*)0), &VAR_6));
 FUNC_1(FUNC_3(VAR_7, VAR_3, ((void*)0), ((void*)0), ((void*)0), &VAR_9));

 FUNC_0(0, VAR_9.files);

 FUNC_4(VAR_7);
}
