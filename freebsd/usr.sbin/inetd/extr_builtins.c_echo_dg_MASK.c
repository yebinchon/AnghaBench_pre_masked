
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servtab {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int buffer ;


 scalar_t__ FUNC_0 (struct sockaddr*,struct servtab*) ;
 int FUNC_1 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_2 (int,char*,int,int ,struct sockaddr*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, struct servtab *VAR_1)
{
 char VAR_2[65536];
 int VAR_3;
 socklen_t VAR_4;
 struct sockaddr_storage VAR_5;

 VAR_4 = sizeof(VAR_5);
 if ((VAR_3 = FUNC_1(VAR_0, VAR_2, sizeof(VAR_2), 0,
     (struct sockaddr *)&VAR_5, &VAR_4)) < 0)
  return;

 if (FUNC_0((struct sockaddr *)&VAR_5, VAR_1))
  return;

 (void) FUNC_2(VAR_0, VAR_2, VAR_3, 0, (struct sockaddr *)&VAR_5, VAR_4);
}
