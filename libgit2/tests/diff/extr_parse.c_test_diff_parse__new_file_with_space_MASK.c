
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int new_prefix; int old_prefix; } ;
struct TYPE_12__ {TYPE_4__* delta; TYPE_2__ diff_opts; } ;
typedef TYPE_5__ git_patch ;
typedef int git_diff ;
struct TYPE_10__ {int path; } ;
struct TYPE_8__ {int path; } ;
struct TYPE_11__ {TYPE_3__ new_file; TYPE_1__ old_file; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__**,int *,int ) ;
 int FUNC_7 (char const*) ;

void FUNC_8(void)
{
 const char *VAR_1 = VAR_0;
 git_patch *VAR_2;
 git_diff *VAR_3;

 FUNC_2(FUNC_4(&VAR_3, VAR_1, FUNC_7(VAR_1)));
 FUNC_2(FUNC_6((git_patch **) &VAR_2, VAR_3, 0));

 FUNC_0(VAR_2->diff_opts.old_prefix, ((void*)0));
 FUNC_0(VAR_2->delta->old_file.path, ((void*)0));
 FUNC_1(VAR_2->diff_opts.new_prefix, "b/");
 FUNC_1(VAR_2->delta->new_file.path, "sp ace.txt");

 FUNC_5(VAR_2);
 FUNC_3(VAR_3);
}
