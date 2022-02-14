
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_patch ;
typedef int git_diff ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int * VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,size_t) ;
 int FUNC_11 (TYPE_1__*,int *) ;

void FUNC_12(void)
{
 git_repository *VAR_2 = FUNC_4("status");
 git_diff *VAR_3;
 size_t VAR_4, VAR_5;

 FUNC_3(FUNC_7(&VAR_3, VAR_2, ((void*)0), ((void*)0)));

 VAR_5 = FUNC_8(VAR_3);
 FUNC_1(8, (int)VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  git_patch *VAR_6;
  git_buf VAR_7 = VAR_0;

  FUNC_3(FUNC_10(&VAR_6, VAR_3, VAR_4));
  FUNC_0(VAR_6 != ((void*)0));

  FUNC_3(FUNC_11(&VAR_7, VAR_6));

  FUNC_2(VAR_1[VAR_4], VAR_7.ptr);

  FUNC_5(&VAR_7);
  FUNC_9(VAR_6);
 }

 FUNC_6(VAR_3);
}
