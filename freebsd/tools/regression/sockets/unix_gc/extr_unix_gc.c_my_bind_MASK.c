
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(int VAR_1, struct sockaddr *VAR_2, socklen_t VAR_3)
{

 if (FUNC_0(VAR_1, VAR_2, VAR_3) < 0)
  FUNC_1(-1, "%s: bind", VAR_0);
}
