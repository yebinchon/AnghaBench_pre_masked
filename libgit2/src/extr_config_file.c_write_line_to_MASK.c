
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(git_buf *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (!VAR_3 && VAR_2 && VAR_1[VAR_2-1] != '\n')
  VAR_3 = FUNC_0(VAR_0, "\n");

 return VAR_3;
}
