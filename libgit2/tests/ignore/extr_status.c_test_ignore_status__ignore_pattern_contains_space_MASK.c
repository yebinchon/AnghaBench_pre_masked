
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int const) ;
 int FUNC_6 (unsigned int*,int ,char*) ;

void FUNC_7(void)
{
 unsigned int VAR_3;
 const mode_t VAR_4 = 0777;

 VAR_2 = FUNC_4("empty_standard_repo");
 FUNC_3("empty_standard_repo/.gitignore", "foo bar.txt\n");

 FUNC_1(
  "empty_standard_repo/foo bar.txt", "I'm going to be ignored!");

 FUNC_2(FUNC_6(&VAR_3, VAR_2, "foo bar.txt"));
 FUNC_0(VAR_3 == VAR_0);

 FUNC_2(FUNC_5("empty_standard_repo/foo", VAR_4));
 FUNC_1("empty_standard_repo/foo/look-ma.txt", "I'm not going to be ignored!");

 FUNC_2(FUNC_6(&VAR_3, VAR_2, "foo/look-ma.txt"));
 FUNC_0(VAR_3 == VAR_1);
}
