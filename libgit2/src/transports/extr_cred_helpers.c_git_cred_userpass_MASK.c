
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* username; int password; } ;
typedef TYPE_1__ git_cred_userpass_payload ;
typedef int git_cred ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int **,char const*) ;
 scalar_t__ FUNC_2 (int **,char const*,int ) ;

int FUNC_3(
  git_cred **VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  unsigned int VAR_5,
  void *VAR_6)
{
 git_cred_userpass_payload *VAR_7 = (git_cred_userpass_payload*)VAR_6;
 const char *VAR_8 = ((void*)0);

 FUNC_0(VAR_3);

 if (!VAR_7 || !VAR_7->password) return -1;
 if (VAR_7->username)
  VAR_8 = VAR_7->username;
 else if (VAR_4)
  VAR_8 = VAR_4;
 else
  return -1;

 if (VAR_0 & VAR_5)
  return FUNC_1(VAR_2, VAR_8);

 if ((VAR_1 & VAR_5) == 0 ||
   FUNC_2(VAR_2, VAR_8, VAR_7->password) < 0)
  return -1;

 return 0;
}
