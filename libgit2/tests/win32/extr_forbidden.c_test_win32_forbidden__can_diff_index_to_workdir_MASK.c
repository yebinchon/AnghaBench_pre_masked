
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_index ;
struct TYPE_3__ {int status; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int **,int ,int *,int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;

void FUNC_10(void)
{
 git_index *VAR_2;
 git_diff *VAR_3;
 const git_diff_delta *VAR_4;
 git_tree *VAR_5;
 size_t VAR_6;

 FUNC_1(FUNC_8(&VAR_2, VAR_1));
 FUNC_1(FUNC_7(&VAR_5, VAR_1));
 FUNC_1(FUNC_4(&VAR_3, VAR_1, VAR_2, ((void*)0)));

 for (VAR_6 = 0; VAR_6 < FUNC_5(VAR_3); VAR_6++) {
  VAR_4 = FUNC_3(VAR_3, VAR_6);
  FUNC_0(VAR_0, VAR_4->status);
 }

 FUNC_2(VAR_3);
 FUNC_9(VAR_5);
 FUNC_6(VAR_2);
}
