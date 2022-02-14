
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 git_buf VAR_4 = VAR_0;

 FUNC_0(VAR_3 || VAR_1);

 if (!VAR_3) {
  FUNC_3(FUNC_6(&VAR_4, VAR_2));
  FUNC_1(VAR_1, FUNC_4(&VAR_4));
 } else
  FUNC_2(FUNC_6(&VAR_4, VAR_2));

 FUNC_5(&VAR_4);
}
