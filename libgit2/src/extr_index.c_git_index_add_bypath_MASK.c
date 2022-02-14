
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_submodule ;
struct TYPE_12__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_13__ {int tree; } ;
typedef TYPE_2__ git_index ;
typedef int git_error_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_2__*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char const*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,char const*) ;
 int FUNC_11 (TYPE_1__**,TYPE_2__*,char const*) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__**,int,int,int,int) ;

int FUNC_13(git_index *VAR_3, const char *VAR_4)
{
 git_index_entry *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_2(VAR_3 && VAR_4);

 if ((VAR_6 = FUNC_11(&VAR_5, VAR_3, VAR_4)) == 0)
  VAR_6 = FUNC_12(VAR_3, &VAR_5, 1, 0, 0, 1);


 if (VAR_6 < 0 && VAR_6 != VAR_0)
  return VAR_6;

 if (VAR_6 == VAR_0) {
  git_submodule *VAR_7;
  git_error_state VAR_8;

  FUNC_3(&VAR_8, VAR_6);

  VAR_6 = FUNC_8(&VAR_7, FUNC_0(VAR_3), VAR_4);
  if (VAR_6 == VAR_2)
   return FUNC_5(&VAR_8);

  FUNC_4(&VAR_8);





  if (VAR_6 == VAR_1) {
   if ((VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_4)) < 0)
    return VAR_6;

   if ((VAR_6 = FUNC_12(VAR_3, &VAR_5, 1, 0, 0, 1)) < 0)
    return VAR_6;
  } else if (VAR_6 < 0) {
   return VAR_6;
  } else {
   VAR_6 = FUNC_6(VAR_7, 0);
   FUNC_7(VAR_7);
   return VAR_6;
  }
 }


 if ((VAR_6 = FUNC_10(VAR_3, VAR_4)) < 0 && VAR_6 != VAR_2)
  return VAR_6;

 FUNC_9(VAR_3->tree, VAR_5->path);
 return 0;
}
