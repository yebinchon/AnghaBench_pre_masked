
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int content_len; int content; } ;
typedef TYPE_1__ git_diff_line ;
struct TYPE_6__ {int header_len; int header; } ;
typedef TYPE_2__ git_diff_hunk ;
typedef int git_diff_delta ;
typedef int git_buf ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 const git_diff_line *VAR_2,
 void *VAR_3)
{
 git_buf *VAR_4 = (git_buf *)VAR_3;

 FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_2(VAR_4, VAR_1->header, VAR_1->header_len);

 if (VAR_2)
  FUNC_2(VAR_4, VAR_2->content, VAR_2->content_len);

 return FUNC_1(VAR_4) ? -1 : 0;
}
