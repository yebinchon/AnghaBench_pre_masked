
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_apply_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
 git_oid VAR_5, VAR_6;
 git_commit *VAR_7, *VAR_8;
 git_tree *VAR_9, *VAR_10;
 git_diff *VAR_11;
 git_diff_options VAR_12 = VAR_3;
 git_apply_options VAR_13 = VAR_2;

 FUNC_0(FUNC_7(&VAR_5, "539bd011c4822c560c1d17cab095006b7a10f707"));
 FUNC_0(FUNC_7(&VAR_6, "7c7bf85e978f1d18c0566f702d2cb7766b9c8d4f"));
 FUNC_0(FUNC_3(&VAR_7, VAR_4, &VAR_5));
 FUNC_0(FUNC_3(&VAR_8, VAR_4, &VAR_6));

 FUNC_0(FUNC_4(&VAR_9, VAR_7));
 FUNC_0(FUNC_4(&VAR_10, VAR_8));

 VAR_13.flags |= VAR_0;
 FUNC_0(FUNC_6(&VAR_11, VAR_4, VAR_9, VAR_10, &VAR_12));
 FUNC_0(FUNC_1(VAR_4, VAR_11, VAR_1, &VAR_13));

 FUNC_9(VAR_4);
 FUNC_10(VAR_4);

 FUNC_5(VAR_11);
 FUNC_8(VAR_9);
 FUNC_8(VAR_10);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
}
