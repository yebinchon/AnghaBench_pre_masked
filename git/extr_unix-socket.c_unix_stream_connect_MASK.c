
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sockaddr_context {int dummy; } ;
struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct unix_sockaddr_context*) ;
 scalar_t__ FUNC_3 (struct sockaddr_un*,char const*,struct unix_sockaddr_context*) ;
 int FUNC_4 () ;

int FUNC_5(const char *VAR_1)
{
 int VAR_2, VAR_3;
 struct sockaddr_un VAR_4;
 struct unix_sockaddr_context VAR_5;

 if (FUNC_3(&VAR_4, VAR_1, &VAR_5) < 0)
  return -1;
 VAR_2 = FUNC_4();
 if (FUNC_1(VAR_2, (struct sockaddr *)&VAR_4, sizeof(VAR_4)) < 0)
  goto fail;
 FUNC_2(&VAR_5);
 return VAR_2;

fail:
 VAR_3 = VAR_0;
 FUNC_2(&VAR_5);
 FUNC_0(VAR_2);
 VAR_0 = VAR_3;
 return -1;
}
