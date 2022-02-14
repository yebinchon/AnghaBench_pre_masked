
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_3__ {int num_lines; int new_lineno; int old_lineno; } ;
typedef TYPE_1__ git_diff_line ;


 int FUNC_0 (int,int ,char const*,int) ;
 int FUNC_1 (int ,int ,char const*,int) ;
 int FUNC_2 (TYPE_1__ const**,int *,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, int VAR_2, git_patch *VAR_3, size_t VAR_4, size_t VAR_5, const char *VAR_6, int VAR_7)
{
 const git_diff_line *VAR_8;

 FUNC_1(FUNC_2(&VAR_8, VAR_3, VAR_4, VAR_5), 0, VAR_6, VAR_7);
 FUNC_0(VAR_0, VAR_8->old_lineno, VAR_6, VAR_7);
 FUNC_0(VAR_1, VAR_8->new_lineno, VAR_6, VAR_7);
 FUNC_0(VAR_2, VAR_8->num_lines, VAR_6, VAR_7);
}
