
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xo ;
typedef int pd ;
struct TYPE_8__ {int base; } ;
struct TYPE_9__ {TYPE_1__ patch; int output; } ;
typedef TYPE_2__ patch_generated_with_delta ;
typedef TYPE_2__ git_xdiff_output ;
typedef int git_diff_options ;
typedef int git_diff_line_cb ;
typedef int git_diff_hunk_cb ;
typedef int git_diff_file_content_src ;
typedef int git_diff_file_cb ;
typedef int git_diff_binary_cb ;


 int FUNC_0 (int *,int const*,int ,int ,int ,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int *,int *,int const*) ;

__attribute__((used)) static int FUNC_5(
 git_diff_file_content_src *VAR_0,
 git_diff_file_content_src *VAR_1,
 const git_diff_options *VAR_2,
 git_diff_file_cb VAR_3,
 git_diff_binary_cb VAR_4,
 git_diff_hunk_cb VAR_5,
 git_diff_line_cb VAR_6,
 void *VAR_7)
{
 int VAR_8 = 0;
 patch_generated_with_delta VAR_9;
 git_xdiff_output VAR_10;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_0(
  &VAR_10.output, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(&VAR_10, VAR_2);

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));

 VAR_8 = FUNC_4(&VAR_9, &VAR_10, VAR_0, VAR_1, VAR_2);

 FUNC_1(&VAR_9.patch.base);

 return VAR_8;
}
