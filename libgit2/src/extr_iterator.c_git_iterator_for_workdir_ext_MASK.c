
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*,int *,int *,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_4(
 git_iterator **VAR_5,
 git_repository *VAR_6,
 const char *VAR_7,
 git_index *VAR_8,
 git_tree *VAR_9,
 git_iterator_options *VAR_10)
{
 git_iterator_options VAR_11 = VAR_3;

 if (!VAR_7) {
  if (FUNC_0(VAR_6, "scan working directory") < 0)
   return VAR_0;

  VAR_7 = FUNC_1(VAR_6);
 }


 if (VAR_10)
  FUNC_3(&VAR_11, VAR_10, sizeof(git_iterator_options));

 VAR_11.flags |= VAR_1 |
  VAR_2;

 return FUNC_2(VAR_5,
  VAR_6, VAR_7, VAR_8, VAR_9, VAR_4, &VAR_11);
}
