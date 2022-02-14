
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ origin; int content_len; int content; } ;
typedef TYPE_1__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,int,int ,int *) ;
 void* VAR_3 ;

int FUNC_3(
 const git_diff_delta *VAR_4,
 const git_diff_hunk *VAR_5,
 const git_diff_line *VAR_6,
 void *VAR_7)
{
 FILE *VAR_8 = VAR_7 ? VAR_7 : VAR_3;

 FUNC_0(VAR_4); FUNC_0(VAR_5);

 if (VAR_6->origin == VAR_1 ||
  VAR_6->origin == VAR_0 ||
  VAR_6->origin == VAR_2)
  FUNC_1(VAR_6->origin, VAR_8);
 FUNC_2(VAR_6->content, 1, VAR_6->content_len, VAR_8);
 return 0;
}
