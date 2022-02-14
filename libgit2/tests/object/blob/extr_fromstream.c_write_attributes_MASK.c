
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(git_repository *VAR_2)
{
 git_buf VAR_3 = VAR_1;

 FUNC_0(FUNC_4(&VAR_3, FUNC_6(VAR_2), "info"));
 FUNC_0(FUNC_4(&VAR_3, FUNC_2(&VAR_3), "attributes"));

 FUNC_0(FUNC_5(FUNC_2(&VAR_3), 0777));
 FUNC_1(FUNC_2(&VAR_3), VAR_0);

 FUNC_3(&VAR_3);
}
