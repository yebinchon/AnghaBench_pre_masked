
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_pathspec_match_list ;
typedef int git_pathspec ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(
 git_pathspec_match_list **VAR_1,
 git_index *VAR_2,
 uint32_t VAR_3,
 git_pathspec *VAR_4)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_0;
 int VAR_7 = 0;

 FUNC_0(VAR_2);

 VAR_6.flags = FUNC_5(VAR_3);

 if (!(VAR_7 = FUNC_2(&VAR_5, FUNC_1(VAR_2), VAR_2, &VAR_6))) {
  VAR_7 = FUNC_4(VAR_1, VAR_5, VAR_3, VAR_4);
  FUNC_3(VAR_5);
 }

 return VAR_7;
}
