
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3, struct sockaddr *VAR_4, socklen_t VAR_5)
{

 if (FUNC_0(VAR_3, VAR_4, VAR_5) < 0 && VAR_1 != VAR_0)
  FUNC_1(-1, "%s: connect", VAR_2);
}
