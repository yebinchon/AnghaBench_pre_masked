
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_diff_generated ;
struct TYPE_4__ {int new_iter; int nitem; int old_iter; int oitem; } ;
typedef TYPE_1__ diff_in_progress ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(
 git_diff_generated *VAR_0, diff_in_progress *VAR_1)
{
 int VAR_2 = 0;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) < 0)
  return VAR_2;

 if (!(VAR_2 = FUNC_0(&VAR_1->oitem, VAR_1->old_iter)))
  VAR_2 = FUNC_0(&VAR_1->nitem, VAR_1->new_iter);

 return VAR_2;
}
