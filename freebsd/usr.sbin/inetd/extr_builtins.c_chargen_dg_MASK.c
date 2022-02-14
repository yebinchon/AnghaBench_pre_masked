
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servtab {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*,struct servtab*) ;
 char* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int,char*,int,int ,struct sockaddr*,int*) ;
 char* VAR_2 ;
 int FUNC_4 (int,char*,int,int ,struct sockaddr*,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, struct servtab *VAR_4)
{
 struct sockaddr_storage VAR_5;
 static char *VAR_6;
 int VAR_7;
 socklen_t VAR_8;
 char VAR_9[VAR_0+2];

 if (VAR_1 == 0) {
  FUNC_1();
  VAR_6 = VAR_2;
 }

 VAR_8 = sizeof(VAR_5);
 if (FUNC_3(VAR_3, VAR_9, sizeof(VAR_9), 0,
       (struct sockaddr *)&VAR_5, &VAR_8) < 0)
  return;

 if (FUNC_0((struct sockaddr *)&VAR_5, VAR_4))
  return;

 if ((VAR_7 = VAR_1 - VAR_6) >= VAR_0)
  FUNC_2(VAR_9, VAR_6, VAR_0);
 else {
  FUNC_2(VAR_9, VAR_6, VAR_7);
  FUNC_2(VAR_9 + VAR_7, VAR_2, VAR_0 - VAR_7);
 }
 if (++VAR_6 == VAR_1)
  VAR_6 = VAR_2;
 VAR_9[VAR_0] = '\r';
 VAR_9[VAR_0 + 1] = '\n';
 (void) FUNC_4(VAR_3, VAR_9, sizeof(VAR_9), 0, (struct sockaddr *)&VAR_5, VAR_8);
}
