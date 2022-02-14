
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_2, const char *VAR_3)
{
 if (VAR_3 == ((void*)0) || FUNC_6(VAR_3) == 0) {
  FUNC_5(VAR_1, "cannot set empty URL");
  return VAR_0;
 }
 return FUNC_4(VAR_2, VAR_3);
}
