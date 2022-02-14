
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (long) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 long FUNC_9 (char*,char**,int) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;
 struct sockaddr_in VAR_8;
 char *VAR_9;
 long VAR_10;

 if (VAR_4 != 1)
  FUNC_10();

 FUNC_2(&VAR_8, sizeof(VAR_8));
 VAR_8.sin_len = sizeof(VAR_8);
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = FUNC_5(VAR_1);

 VAR_10 = FUNC_9(VAR_5[0], &VAR_9, 10);
 if (VAR_10 < 1 || VAR_10 > 65535 || *VAR_9 != '\0')
  FUNC_10();
 VAR_8.sin_port = FUNC_6(VAR_10);

 VAR_6 = FUNC_8(VAR_2, VAR_3, 0);
 if (VAR_6 == -1)
  FUNC_4(-1, "socket");

 if (FUNC_1(VAR_6, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) == -1)
  FUNC_4(-1, "bind");

 if (FUNC_7(VAR_6, -1) == -1)
  FUNC_4(-1, "listen");

 while (1) {
  VAR_7 = FUNC_0(VAR_6, ((void*)0), ((void*)0));
  FUNC_3(VAR_7);
 }
}
