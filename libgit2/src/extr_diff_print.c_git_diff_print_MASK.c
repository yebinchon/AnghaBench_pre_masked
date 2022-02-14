
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * git_diff_line_cb ;
typedef int * git_diff_hunk_cb ;
typedef int git_diff_format_t ;
typedef int * git_diff_file_cb ;
typedef int * git_diff_binary_cb ;
typedef int git_diff ;
typedef int git_buf ;
typedef int diff_print_info ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ,int *,void*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int,char*) ;

int FUNC_5(
 git_diff *VAR_9,
 git_diff_format_t VAR_10,
 git_diff_line_cb VAR_11,
 void *VAR_12)
{
 int VAR_13;
 git_buf VAR_14 = VAR_0;
 diff_print_info VAR_15;
 git_diff_file_cb VAR_16 = ((void*)0);
 git_diff_binary_cb VAR_17 = ((void*)0);
 git_diff_hunk_cb VAR_18 = ((void*)0);
 git_diff_line_cb VAR_19 = ((void*)0);

 switch (VAR_10) {
 case 130:
  VAR_16 = VAR_6;
  VAR_17 = VAR_5;
  VAR_18 = VAR_7;
  VAR_19 = VAR_8;
  break;
 case 129:
  VAR_16 = VAR_6;
  break;
 case 128:
  VAR_16 = VAR_4;
  break;
 case 132:
  VAR_16 = VAR_2;
  break;
 case 131:
  VAR_16 = VAR_3;
  break;
 default:
  FUNC_3(VAR_1, "unknown diff output format (%d)", VAR_10);
  return -1;
 }

 if (!(VAR_13 = FUNC_0(
   &VAR_15, &VAR_14, VAR_9, VAR_10, VAR_11, VAR_12))) {
  VAR_13 = FUNC_2(
   VAR_9, VAR_16, VAR_17, VAR_18, VAR_19, &VAR_15);

  if (VAR_13)
   FUNC_4(VAR_13, "git_diff_print");
 }

 FUNC_1(&VAR_14);

 return VAR_13;
}
