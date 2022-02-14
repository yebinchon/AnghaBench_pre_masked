
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int ) ;
 int FUNC_3 (char const*) ;

void FUNC_4(void)
{
 const char *VAR_0 =
     "---\n"
     " file | 0\n"
     " 1 file changed, 0 insertions(+), 0 deletions(-)\n"
     " created mode 100644 file\n"
     "\n"
     "diff --git a/file b/file\n"
     "new file mode 100644\n"
     "index 0000000..e69de29\n"
     "-- \n"
     "2.20.1\n";
 git_diff *VAR_1;

 FUNC_0(FUNC_2(
  &VAR_1, VAR_0, FUNC_3(VAR_0)));
 FUNC_1(VAR_1);
}
