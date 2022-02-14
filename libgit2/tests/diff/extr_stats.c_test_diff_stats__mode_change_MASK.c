
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int ) ;

void FUNC_6(void)
{
 git_buf VAR_4 = VAR_0;
 const char *VAR_5 =
 " file1.txt.renamed | 0\n" " 1 file changed, 0 insertions(+), 0 deletions(-)\n" " mode change 100644 => 100755 file1.txt.renamed\n";



 FUNC_2(
  &VAR_3, "7ade76dd34bba4733cf9878079f9fd4a456a9189", 0);

 FUNC_1(FUNC_5(&VAR_4, VAR_3, VAR_1 | VAR_2, 0));
 FUNC_0(VAR_5, FUNC_3(&VAR_4));
 FUNC_4(&VAR_4);
}
