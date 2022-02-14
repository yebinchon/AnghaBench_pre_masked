
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_5(const char* VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;


 FUNC_1(FUNC_4(&VAR_4, "submodule.%s.url", VAR_2));
 FUNC_0(VAR_1, FUNC_2(&VAR_4), VAR_3);

 FUNC_3(&VAR_4);
}
