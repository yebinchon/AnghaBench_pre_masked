
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 git_filebuf VAR_2 = VAR_1;

 FUNC_1(FUNC_3("foo", 0777));
 FUNC_0(VAR_0, FUNC_2(&VAR_2, "foo", 0, 0666));
 FUNC_1(FUNC_4("foo"));
}
