
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(pid_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct sockaddr_in VAR_11;

 VAR_9 = FUNC_10(VAR_2, VAR_4, 0);
 if (VAR_9 < 0) {
  VAR_8 = VAR_6;
  (void)FUNC_7(VAR_7, VAR_3);
  VAR_6 = VAR_8;
  FUNC_4(-1, "tcp_server: socket");
 }

 FUNC_2(&VAR_11, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_len = sizeof(VAR_11);
 VAR_11.sin_addr.s_addr = FUNC_5(VAR_1);
 VAR_11.sin_port = FUNC_6(VAR_5);

 if (FUNC_1(VAR_9, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) < 0) {
  VAR_8 = VAR_6;
  (void)FUNC_7(VAR_7, VAR_3);
  VAR_6 = VAR_8;
  FUNC_4(-1, "tcp_server: bind");
 }

 if (FUNC_8(VAR_9, -1) < 0) {
  VAR_8 = VAR_6;
  (void)FUNC_7(VAR_7, VAR_3);
  VAR_6 = VAR_8;
  FUNC_4(-1, "tcp_server: listen");
 }

 FUNC_9(10);

 VAR_10 = FUNC_0(VAR_9, ((void*)0), ((void*)0));
 if (VAR_10 < 0) {
  VAR_8 = VAR_6;
  (void)FUNC_7(VAR_7, VAR_3);
  VAR_6 = VAR_8;
  FUNC_4(-1, "tcp_server: accept");
 }
 FUNC_3(VAR_10);
 FUNC_3(VAR_9);
}
