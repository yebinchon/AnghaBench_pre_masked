
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(void)
{
 git_filebuf VAR_2 = VAR_0;

 FUNC_0(FUNC_2(&VAR_2, VAR_1, 0, 0666));

 FUNC_3(&VAR_2, "[color]\n\tui = auto\n");
 FUNC_3(&VAR_2, "[core]\n\teditor = \n");

 FUNC_0(FUNC_1(&VAR_2));
}
