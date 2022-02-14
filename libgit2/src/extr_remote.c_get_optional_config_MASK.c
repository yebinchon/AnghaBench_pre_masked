
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * git_config_foreach_cb ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int *,int *,void*) ;
 int FUNC_3 (void*,int *,char const*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(
 bool *VAR_1, git_config *VAR_2, git_buf *VAR_3,
 git_config_foreach_cb VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 const char *VAR_7 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_3))
  return -1;

 if (VAR_4 != ((void*)0))
  VAR_6 = FUNC_2(VAR_2, VAR_7, ((void*)0), VAR_4, VAR_5);
 else
  VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_7);

 if (VAR_1)
  *VAR_1 = !VAR_6;

 if (VAR_6 == VAR_0) {
  FUNC_4();
  VAR_6 = 0;
 }

 return VAR_6;
}
