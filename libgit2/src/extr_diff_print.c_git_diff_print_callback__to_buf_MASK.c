
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int content_len; int content; int origin; } ;
typedef TYPE_1__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(
 const git_diff_delta *VAR_4,
 const git_diff_hunk *VAR_5,
 const git_diff_line *VAR_6,
 void *VAR_7)
{
 git_buf *VAR_8 = VAR_7;
 FUNC_0(VAR_4); FUNC_0(VAR_5);

 if (!VAR_8) {
  FUNC_3(VAR_3, "buffer pointer must be provided");
  return -1;
 }

 if (VAR_6->origin == VAR_0 ||
  VAR_6->origin == VAR_2 ||
  VAR_6->origin == VAR_1)
  FUNC_2(VAR_8, VAR_6->origin);

 return FUNC_1(VAR_8, VAR_6->content, VAR_6->content_len);
}
