
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr const*,int ,char*,int,int *,int ,int) ;

__attribute__((used)) static char *
FUNC_3 (const struct sockaddr *VAR_2, socklen_t VAR_3)
{
  char VAR_4[VAR_0];
  int VAR_5, VAR_6;

  VAR_5 = VAR_1;
  VAR_6 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_0, ((void*)0), 0, VAR_5);
  if (!VAR_6)
    return FUNC_0 (VAR_4);
  return FUNC_0 (FUNC_1 (VAR_6));
}
