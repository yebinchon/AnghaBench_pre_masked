
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
  struct sockaddr_storage VAR_2;
  socklen_t VAR_3;

  VAR_3 = sizeof(VAR_2);
  if (FUNC_0(VAR_1, (struct sockaddr *)&VAR_2, &VAR_3) == -1)
    return VAR_0;
  return VAR_2.ss_family;
}
