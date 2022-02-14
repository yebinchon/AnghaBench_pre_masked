
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* git_transport_cb ) (int **,int *,void*) ;
typedef int git_transport ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int (*) (int **,int *,void*),char const*,void**) ;

int FUNC_3(git_transport **VAR_3, git_remote *VAR_4, const char *VAR_5)
{
 git_transport_cb VAR_6;
 git_transport *VAR_7;
 void *VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_2(VAR_6, VAR_5, &VAR_8)) == VAR_0) {
  FUNC_1(VAR_1, "unsupported URL protocol");
  return -1;
 } else if (VAR_9 < 0)
  return VAR_9;

 if ((VAR_9 = VAR_6(&VAR_7, VAR_4, VAR_8)) < 0)
  return VAR_9;

 FUNC_0(VAR_7, VAR_2, "git_transport");

 *VAR_3 = VAR_7;

 return 0;
}
