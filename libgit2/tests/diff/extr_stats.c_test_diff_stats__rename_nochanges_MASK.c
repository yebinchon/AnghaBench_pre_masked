
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;

void FUNC_10(void)
{
 git_buf VAR_3 = VAR_0;
 const char *VAR_4 =
 " file2.txt.renamed => file2.txt.renamed2 | 0\n"
 " file3.txt.renamed => file3.txt.renamed2 | 0\n"
 " 2 files changed, 0 insertions(+), 0 deletions(-)\n";

 FUNC_3(
  &VAR_2, "3991dce9e71a0641ca49a6a4eea6c9e7ff402ed4", 1);

 FUNC_1(2, FUNC_7(VAR_2));
 FUNC_1(0, FUNC_8(VAR_2));
 FUNC_1(0, FUNC_6(VAR_2));

 FUNC_2(FUNC_9(&VAR_3, VAR_2, VAR_1, 0));
 FUNC_0(VAR_4, FUNC_4(&VAR_3));
 FUNC_5(&VAR_3);
}
