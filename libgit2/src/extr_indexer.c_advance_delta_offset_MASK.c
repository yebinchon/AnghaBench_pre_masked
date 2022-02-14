
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ git_off_t ;
typedef int git_object_t ;
typedef int git_mwindow ;
struct TYPE_3__ {int entry_start; int off; int pack; } ;
typedef TYPE_1__ git_indexer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int **,int *,int ,int ) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static int FUNC_3(git_indexer *VAR_3, git_object_t VAR_4)
{
 git_mwindow *VAR_5 = ((void*)0);

 FUNC_0(VAR_4 == VAR_1 || VAR_4 == VAR_0);

 if (VAR_4 == VAR_1) {
  VAR_3->off += VAR_2;
 } else {
  git_off_t VAR_6 = FUNC_1(VAR_3->pack, &VAR_5, &VAR_3->off, VAR_4, VAR_3->entry_start);
  FUNC_2(&VAR_5);
  if (VAR_6 < 0)
   return (int)VAR_6;
 }

 return 0;
}
