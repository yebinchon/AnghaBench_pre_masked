
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_regexp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(git_regexp *VAR_2, const char *VAR_3)
{
 int VAR_4;

 if (*VAR_3 == '\0') {
  FUNC_0(VAR_1, "empty pattern");
  return VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3, 0);
 if (!VAR_4)
  return 0;

 FUNC_2(VAR_2);

 return VAR_4;
}
