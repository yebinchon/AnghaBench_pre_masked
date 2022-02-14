
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(int VAR_1, struct sockaddr *VAR_2, socklen_t *VAR_3)
{

 if (FUNC_1(VAR_1, VAR_2, VAR_3) < 0)
  FUNC_0(-1, "%s: getsockname", VAR_0);
}
