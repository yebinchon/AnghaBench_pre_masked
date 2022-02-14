
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servtab {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int buffer ;


 scalar_t__ FUNC_0 (struct sockaddr*,struct servtab*) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_3 (int,char*,int ,int ,struct sockaddr*,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(int VAR_0, struct servtab *VAR_1)
{
 char VAR_2[256];
 time_t VAR_3;
 struct sockaddr_storage VAR_4;
 socklen_t VAR_5;

 VAR_3 = FUNC_6((time_t *) 0);

 VAR_5 = sizeof(VAR_4);
 if (FUNC_2(VAR_0, VAR_2, sizeof(VAR_2), 0,
       (struct sockaddr *)&VAR_4, &VAR_5) < 0)
  return;

 if (FUNC_0((struct sockaddr *)&VAR_4, VAR_1))
  return;

 (void) FUNC_4(VAR_2, "%.24s\r\n", FUNC_1(&VAR_3));
 (void) FUNC_3(VAR_0, VAR_2, FUNC_5(VAR_2), 0,
        (struct sockaddr *)&VAR_4, VAR_5);
}
