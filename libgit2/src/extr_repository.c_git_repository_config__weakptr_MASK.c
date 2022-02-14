
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * _config; } ;
typedef TYPE_1__ git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(git_config **VAR_1, git_repository *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->_config == ((void*)0)) {
  git_buf VAR_4 = VAR_0;
  git_buf VAR_5 = VAR_0;
  git_buf VAR_6 = VAR_0;
  git_buf VAR_7 = VAR_0;
  git_config *VAR_8;

  FUNC_5(&VAR_4);
  FUNC_8(&VAR_5);
  FUNC_7(&VAR_6);
  FUNC_6(&VAR_7);


  if (FUNC_3(&VAR_4) == 0)
   FUNC_4(&VAR_4);

  VAR_3 = FUNC_10(
   &VAR_8, VAR_2,
   FUNC_11(&VAR_4),
   FUNC_11(&VAR_5),
   FUNC_11(&VAR_6),
   FUNC_11(&VAR_7));
  if (!VAR_3) {
   FUNC_0(VAR_8, VAR_2);

   VAR_8 = FUNC_1(&VAR_2->_config, ((void*)0), VAR_8);
   if (VAR_8 != ((void*)0)) {
    FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_8);
   }
  }

  FUNC_2(&VAR_4);
  FUNC_2(&VAR_5);
  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
 }

 *VAR_1 = VAR_2->_config;
 return VAR_3;
}
