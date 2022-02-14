
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_branch_t ;
typedef int git_branch_iterator ;
struct TYPE_7__ {int flags; int iter; } ;
typedef TYPE_2__ branch_iter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**,int ) ;

int FUNC_3(git_reference **VAR_4, git_branch_t *VAR_5, git_branch_iterator *VAR_6)
{
 branch_iter *VAR_7 = (branch_iter *) VAR_6;
 git_reference *VAR_8;
 int VAR_9;

 while ((VAR_9 = FUNC_2(&VAR_8, VAR_7->iter)) == 0) {
  if ((VAR_7->flags & VAR_0) &&
      !FUNC_0(VAR_8->name, VAR_2)) {
   *VAR_4 = VAR_8;
   *VAR_5 = VAR_0;

   return 0;
  } else if ((VAR_7->flags & VAR_1) &&
       !FUNC_0(VAR_8->name, VAR_3)) {
   *VAR_4 = VAR_8;
   *VAR_5 = VAR_1;

   return 0;
  } else {
   FUNC_1(VAR_8);
  }
 }

 return VAR_9;
}
