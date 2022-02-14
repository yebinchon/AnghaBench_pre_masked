
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_6__ {int path; } ;
struct TYPE_5__ {int path; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;

void FUNC_8(void)
{
 const char *VAR_1 = VAR_0;
 git_diff *VAR_2;
 git_patch *VAR_3;
 const git_diff_delta *VAR_4;

 FUNC_1(FUNC_3(&VAR_2, VAR_1, FUNC_7(VAR_1)));
 FUNC_1(FUNC_5(&VAR_3, VAR_2, 0));
 VAR_4 = FUNC_6(VAR_3);

 FUNC_0(VAR_4->old_file.path, "test-file");
 FUNC_0(VAR_4->new_file.path, "test-file");

 FUNC_4(VAR_3);
 FUNC_2(VAR_2);
}
