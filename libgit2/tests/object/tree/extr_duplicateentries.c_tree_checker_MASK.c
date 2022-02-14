
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;
typedef int git_filemode_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *) ;

__attribute__((used)) static void FUNC_10(
 git_oid *VAR_1,
 const char *VAR_2,
 git_filemode_t VAR_3)
{
 git_tree *VAR_4;
 const git_tree_entry *VAR_5;
 git_oid VAR_6;

 FUNC_1(FUNC_9(&VAR_4, VAR_0, VAR_1));
 FUNC_0(1, (int)FUNC_7(VAR_4));
 VAR_5 = FUNC_4(VAR_4, 0);

 FUNC_1(FUNC_3(&VAR_6, VAR_2));

 FUNC_0(0, FUNC_2(&VAR_6, FUNC_6(VAR_5)));
 FUNC_0(VAR_3, FUNC_5(VAR_5));

 FUNC_8(VAR_4);
}
