
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xo ;
struct TYPE_13__ {int patch; } ;
typedef TYPE_1__ patch_generated_with_delta ;
struct TYPE_14__ {int output; } ;
typedef TYPE_2__ git_xdiff_output ;
typedef int git_patch ;
typedef int git_diff_options ;
struct TYPE_15__ {int as_path; } ;
typedef TYPE_3__ git_diff_file_content_src ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int const*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_3__*,TYPE_3__*,int const*) ;
 int FUNC_6 (TYPE_1__**,int *,int *) ;

__attribute__((used)) static int FUNC_7(
 git_patch **VAR_0,
 git_diff_file_content_src *VAR_1,
 git_diff_file_content_src *VAR_2,
 const git_diff_options *VAR_3)
{
 int VAR_4 = 0;
 patch_generated_with_delta *VAR_5;
 git_xdiff_output VAR_6;

 FUNC_0(VAR_0);
 *VAR_0 = ((void*)0);

 if ((VAR_4 = FUNC_6(
   &VAR_5, &VAR_1->as_path, &VAR_2->as_path)) < 0)
  return VAR_4;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6.output, &VAR_5->patch);
 FUNC_3(&VAR_6, VAR_3);

 if (!(VAR_4 = FUNC_5(VAR_5, &VAR_6, VAR_1, VAR_2, VAR_3)))
  *VAR_0 = (git_patch *)VAR_5;
 else
  FUNC_2((git_patch *)VAR_5);

 return VAR_4;
}
