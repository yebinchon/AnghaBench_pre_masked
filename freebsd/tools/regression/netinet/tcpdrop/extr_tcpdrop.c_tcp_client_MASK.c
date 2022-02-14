
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int sin_local ;
typedef int sin ;
typedef int pid_t ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_7 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char*,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct sockaddr_in*,struct sockaddr_in*) ;

__attribute__((used)) static void
FUNC_12(pid_t VAR_8, u_short VAR_9)
{
 struct sockaddr_in VAR_10, VAR_11;
 int VAR_12, VAR_13;
 socklen_t VAR_14;
 ssize_t VAR_15;
 char VAR_16;

 FUNC_9(1);

 VAR_13 = FUNC_10(VAR_4, VAR_6, 0);
 if (VAR_13 < 0) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "socket");
 }

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.sin_family = VAR_0;
 VAR_10.sin_len = sizeof(VAR_10);
 VAR_10.sin_addr.s_addr = FUNC_7(VAR_2);
 VAR_10.sin_port = VAR_9;

 if (FUNC_2(VAR_13, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "connect");
 }

 VAR_14 = sizeof(VAR_11);
 if (FUNC_5(VAR_13, (struct sockaddr *)&VAR_11, &VAR_14) < 0) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "getsockname");
 }






 VAR_16 = 'A';
 VAR_15 = FUNC_8(VAR_13, &VAR_16, sizeof(VAR_16), VAR_3);
 if (VAR_15 < 0) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "tcp_client: send (1)");
 }
 if (VAR_15 != sizeof(VAR_16)) {
  (void)FUNC_6(VAR_8, VAR_5);
  FUNC_4(-1, "tcp_client: send (1) len");
 }

 FUNC_9(5);
 if (FUNC_11(&VAR_11, &VAR_10) < 0) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "tcp_client: tcp_drop");
 }
 FUNC_9(5);

 VAR_16 = 'A';
 VAR_15 = FUNC_8(VAR_13, &VAR_16, sizeof(VAR_16), VAR_3);
 if (VAR_15 >= 0) {
  (void)FUNC_6(VAR_8, VAR_5);
  FUNC_4(-1, "tcp_client: send (2): success");
 } else if (VAR_7 != VAR_1) {
  VAR_12 = VAR_7;
  (void)FUNC_6(VAR_8, VAR_5);
  VAR_7 = VAR_12;
  FUNC_3(-1, "tcp_client: send (2)");
 }
 FUNC_1(VAR_13);
}
