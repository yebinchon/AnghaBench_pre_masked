
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_buf ;
typedef int checkout_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(
 checkout_data *VAR_2, const git_index_entry *VAR_3)
{
 git_buf *VAR_4;

 if (VAR_3->mode != VAR_1)
  return 1;

 if (FUNC_0(&VAR_4, VAR_2, VAR_3->path) < 0)
  return 0;

 return !VAR_4 || !FUNC_1(VAR_4, VAR_0);
}
