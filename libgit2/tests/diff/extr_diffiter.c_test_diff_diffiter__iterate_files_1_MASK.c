
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_diff_delta ;
typedef int git_diff ;
struct TYPE_3__ {int files; int member_0; } ;
typedef TYPE_1__ diff_expects ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int const*,float,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,size_t) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 size_t FUNC_8 (int *) ;

void FUNC_9(void)
{
 git_repository *VAR_0 = FUNC_3("attr");
 git_diff *VAR_1;
 size_t VAR_2, VAR_3;
 diff_expects VAR_4 = { 0 };

 FUNC_2(FUNC_7(&VAR_1, VAR_0, ((void*)0), ((void*)0)));

 VAR_3 = FUNC_8(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  const git_diff_delta *VAR_5 = FUNC_6(VAR_1, VAR_2);
  FUNC_0(VAR_5 != ((void*)0));

  FUNC_4(VAR_5, (float)VAR_2 / (float)VAR_3, &VAR_4);
 }
 FUNC_1(6, VAR_4.files);

 FUNC_5(VAR_1);
}
