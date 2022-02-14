
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur; int snap; } ;
typedef TYPE_1__ git_index_iterator ;
typedef int git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(
 const git_index_entry **VAR_1,
 git_index_iterator *VAR_2)
{
 FUNC_0(VAR_1 && VAR_2);

 if (VAR_2->cur >= FUNC_2(&VAR_2->snap))
  return VAR_0;

 *VAR_1 = (git_index_entry *)FUNC_1(&VAR_2->snap, VAR_2->cur++);
 return 0;
}
