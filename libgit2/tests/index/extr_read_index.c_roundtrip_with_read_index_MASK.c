
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_oid ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *) ;

__attribute__((used)) static bool FUNC_10(const char *VAR_2)
{
 git_oid VAR_3, VAR_4;
 git_tree *VAR_5;
 git_index *VAR_6;

 FUNC_0(FUNC_7(&VAR_3, VAR_2));
 FUNC_0(FUNC_9(&VAR_5, VAR_1, &VAR_3));
 FUNC_0(FUNC_2(&VAR_6));
 FUNC_0(FUNC_4(VAR_6, VAR_5));
 FUNC_0(FUNC_3(VAR_0, VAR_6));
 FUNC_0(FUNC_5(&VAR_4, VAR_0));

 FUNC_8(VAR_5);
 FUNC_1(VAR_6);

 return FUNC_6(&VAR_3, &VAR_4);
}
