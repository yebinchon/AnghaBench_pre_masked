
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct servtab {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int result ;


 scalar_t__ FUNC_0 (struct sockaddr*,struct servtab*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, struct servtab *VAR_1)
{
 uint32_t VAR_2;
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;

 VAR_4 = sizeof(VAR_3);
 if (FUNC_2(VAR_0, (char *)&VAR_2, sizeof(VAR_2), 0,
       (struct sockaddr *)&VAR_3, &VAR_4) < 0)
  return;

 if (FUNC_0((struct sockaddr *)&VAR_3, VAR_1))
  return;

 VAR_2 = FUNC_1();
 (void) FUNC_3(VAR_0, (char *) &VAR_2, sizeof(VAR_2), 0,
        (struct sockaddr *)&VAR_3, VAR_4);
}
