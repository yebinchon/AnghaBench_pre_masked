
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct auth_group {int dummy; } ;


 int FUNC_0 (struct auth_group const*) ;
 int * FUNC_1 (struct auth_group const*,struct sockaddr_storage const*) ;

int
FUNC_2(const struct auth_group *VAR_0, const struct sockaddr_storage *VAR_1)
{

 if (!FUNC_0(VAR_0))
  return (0);

 if (FUNC_1(VAR_0, VAR_1) == ((void*)0))
  return (1);

 return (0);
}
