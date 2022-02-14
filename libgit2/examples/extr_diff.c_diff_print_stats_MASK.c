
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct opts {int output; } ;
typedef int git_diff_stats_format_t ;
typedef int git_diff_stats ;
typedef int git_diff ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_7(git_diff *VAR_9, struct opts *VAR_10)
{
 git_diff_stats *VAR_11;
 git_buf VAR_12 = FUNC_0(((void*)0), 0);
 git_diff_stats_format_t VAR_13 = 0;

 FUNC_1(
  FUNC_4(&VAR_11, VAR_9), "generating stats for diff", ((void*)0));

 if (VAR_10->output & VAR_6)
  VAR_13 |= VAR_0;
 if (VAR_10->output & VAR_5)
  VAR_13 |= VAR_3;
 if (VAR_10->output & VAR_4)
  VAR_13 |= VAR_2;
 if (VAR_10->output & VAR_7)
  VAR_13 |= VAR_1;

 FUNC_1(
  FUNC_6(&VAR_12, VAR_11, VAR_13, 80), "formatting stats", ((void*)0));

 FUNC_2(VAR_12.ptr, VAR_8);

 FUNC_3(&VAR_12);
 FUNC_5(VAR_11);
}
