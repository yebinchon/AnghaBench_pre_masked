
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int,int ,int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

void FUNC_9(git_repository *VAR_3)
{
 git_tree *VAR_4;
 git_index *VAR_5;
 git_iterator *VAR_6, *VAR_7, *VAR_8[2];
 git_iterator_options VAR_9 = VAR_1;

 FUNC_0(FUNC_6(&VAR_4, VAR_3));
 FUNC_0(FUNC_7(&VAR_5, VAR_3));

 VAR_9.flags |= VAR_0;

 FUNC_0(FUNC_2(&VAR_6, VAR_4, ((void*)0)));
 FUNC_0(FUNC_3(&VAR_7, VAR_3, VAR_5, ((void*)0), &VAR_9));

 VAR_8[0] = VAR_6;
 VAR_8[1] = VAR_7;

 FUNC_0(FUNC_5(VAR_8, 2, VAR_2, ((void*)0)));

 FUNC_4(VAR_6);
 FUNC_4(VAR_7);

 FUNC_8(VAR_4);
 FUNC_1(VAR_5);
}
