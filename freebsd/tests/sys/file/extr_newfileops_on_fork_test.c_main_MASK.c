
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;

int
FUNC_11(void)
{
 struct sockaddr_in VAR_7;
 pthread_t VAR_8;

 VAR_6 = FUNC_10(VAR_2, VAR_4, 0);
 if (VAR_6 < 0)
  FUNC_3(1, "socket");
 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;
 VAR_7.sin_len = sizeof(VAR_7);
 VAR_7.sin_addr.s_addr = FUNC_5(VAR_1);
 VAR_7.sin_port = FUNC_6(VAR_3);
 if (FUNC_0(VAR_6, (struct sockaddr *)&VAR_7, sizeof(VAR_7)) < 0)
  FUNC_3(1, "bind");
 if (FUNC_7(VAR_6, -1) <0)
  FUNC_3(1, "listen");
 if (FUNC_8(&VAR_8, ((void*)0), VAR_5, ((void*)0)) != 0)
  FUNC_3(1, "pthread_create");
 FUNC_9(1);
 FUNC_2();
 FUNC_4(0);
}
