
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* payload; int data_cb; int hunk_cb; int binary_cb; int file_cb; } ;
typedef TYPE_1__ git_patch_generated_output ;
typedef int git_diff_options ;
typedef int git_diff_line_cb ;
typedef int git_diff_hunk_cb ;
typedef int git_diff_file_cb ;
typedef int git_diff_binary_cb ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(
 git_patch_generated_output *VAR_0,
 const git_diff_options *VAR_1,
 git_diff_file_cb VAR_2,
 git_diff_binary_cb VAR_3,
 git_diff_hunk_cb VAR_4,
 git_diff_line_cb VAR_5,
 void *VAR_6)
{
 FUNC_0(VAR_1);

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->file_cb = VAR_2;
 VAR_0->binary_cb = VAR_3;
 VAR_0->hunk_cb = VAR_4;
 VAR_0->data_cb = VAR_5;
 VAR_0->payload = VAR_6;
}
