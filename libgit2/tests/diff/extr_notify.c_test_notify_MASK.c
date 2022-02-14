
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int notify_expected ;
struct TYPE_8__ {char** strings; int count; } ;
struct TYPE_9__ {int flags; int * payload; TYPE_1__ pathspec; int notify_cb; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_10__ {int files; } ;
typedef TYPE_3__ diff_expects ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int *,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_7(
 char **VAR_6,
 int VAR_7,
 notify_expected *VAR_8,
 int VAR_9)
{
 git_diff_options VAR_10 = VAR_2;
 git_diff *VAR_11 = ((void*)0);
 diff_expects VAR_12;

 VAR_5 = FUNC_2("status");

 VAR_10.flags |= VAR_0 | VAR_1;
 VAR_10.notify_cb = VAR_3;
 VAR_10.pathspec.strings = VAR_6;
 VAR_10.pathspec.count = VAR_7;

 VAR_10.payload = VAR_8;
 FUNC_6(&VAR_12, 0, sizeof(VAR_12));

 FUNC_1(FUNC_5(&VAR_11, VAR_5, ((void*)0), &VAR_10));
 FUNC_1(FUNC_3(VAR_11, VAR_4, ((void*)0), ((void*)0), ((void*)0), &VAR_12));

 FUNC_0(VAR_9, VAR_12.files);

 FUNC_4(VAR_11);
}
