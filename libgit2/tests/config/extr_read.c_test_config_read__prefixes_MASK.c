
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int **,int ) ;

void FUNC_8(void)
{
 git_config *VAR_1;

 FUNC_2(FUNC_7(&VAR_1, FUNC_1("config/config9")));
 FUNC_2(FUNC_6(&VAR_0, VAR_1, "remote.ab.url"));
 FUNC_0("http://example.com/git/ab", FUNC_4(&VAR_0));
 FUNC_3(&VAR_0);

 FUNC_2(FUNC_6(&VAR_0, VAR_1, "remote.abba.url"));
 FUNC_0("http://example.com/git/abba", FUNC_4(&VAR_0));

 FUNC_5(VAR_1);
}
