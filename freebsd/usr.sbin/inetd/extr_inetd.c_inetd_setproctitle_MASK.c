
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int pbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char const*,...) ;

void
FUNC_4(const char *VAR_2, int VAR_3)
{
 socklen_t VAR_4;
 struct sockaddr_storage VAR_5;
 char VAR_6[80], VAR_7[VAR_0];

 VAR_4 = sizeof(VAR_5);
 if (FUNC_1(VAR_3, (struct sockaddr *)&VAR_5, &VAR_4) == 0) {
  FUNC_0((struct sockaddr *)&VAR_5, VAR_4, VAR_7, sizeof(VAR_7),
       ((void*)0), 0, VAR_1);
  (void) FUNC_3(VAR_6, "%s [%s]", VAR_2, VAR_7);
 } else
  (void) FUNC_3(VAR_6, "%s", VAR_2);
 FUNC_2("%s", VAR_6);
}
