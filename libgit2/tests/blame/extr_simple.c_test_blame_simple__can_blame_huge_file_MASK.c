
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_blame_options ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int,int ,char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,char*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void)
{
 git_blame_options VAR_3 = VAR_0;

 FUNC_3(FUNC_6(&VAR_2, FUNC_2("blametest.git")));

 FUNC_3(FUNC_4(&VAR_1, VAR_2, "huge.txt", &VAR_3));
 FUNC_1(2, FUNC_5(VAR_1));
 FUNC_0(VAR_2, VAR_1, 0, 1, 65536, 0, "4eecfea", "huge.txt");
 FUNC_0(VAR_2, VAR_1, 1, 65537, 1, 0, "6653ff4", "huge.txt");
}
