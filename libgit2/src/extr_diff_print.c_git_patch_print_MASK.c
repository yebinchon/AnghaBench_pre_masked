
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef scalar_t__ git_diff_line_cb ;
typedef int git_buf ;
typedef int diff_print_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int ,scalar_t__,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int *) ;

int FUNC_5(
 git_patch *VAR_6,
 git_diff_line_cb VAR_7,
 void *VAR_8)
{
 int VAR_9;
 git_buf VAR_10 = VAR_0;
 diff_print_info VAR_11;

 FUNC_0(VAR_6 && VAR_7);

 if (!(VAR_9 = FUNC_1(
  &VAR_11, &VAR_10, VAR_6,
  VAR_1, VAR_7, VAR_8)))
 {
  VAR_9 = FUNC_4(
   VAR_6,
   VAR_3, VAR_2,
   VAR_4, VAR_5,
   &VAR_11);

  if (VAR_9)
   FUNC_3(VAR_9, "git_patch_print");
 }

 FUNC_2(&VAR_10);

 return VAR_9;
}
