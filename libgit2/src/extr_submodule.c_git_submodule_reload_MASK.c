
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int repo; int name; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(git_submodule *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 git_config *VAR_8;

 FUNC_0(VAR_5);

 FUNC_1(VAR_4);

 VAR_7 = FUNC_4(VAR_4->repo, VAR_4->name, 0);
 if (VAR_7 <= 0) {

  return VAR_7;
 }

 if (!FUNC_3(VAR_4->repo)) {

  if ((VAR_6 = FUNC_5(&VAR_8, VAR_4->repo)) < 0 && VAR_6 != VAR_0)
   return VAR_6;
  if (VAR_8 != ((void*)0)) {
   VAR_6 = FUNC_7(VAR_4, VAR_8);
   FUNC_2(VAR_8);

   if (VAR_6 < 0)
    return VAR_6;
  }


  VAR_4->flags &=
   ~(VAR_1 |
     VAR_3 |
     VAR_2);

  VAR_6 = FUNC_6(VAR_4);
 }

 if (VAR_6 == 0 && (VAR_6 = FUNC_9(VAR_4)) == 0)
  VAR_6 = FUNC_8(VAR_4);

 return VAR_6;
}
