
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin_local ;
typedef int sin ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sockaddr_in*,struct sockaddr_in*) ;

__attribute__((used)) static void
FUNC_11(pid_t VAR_7, int VAR_8)
{
 struct sockaddr_in VAR_9, VAR_10;
 int VAR_11, VAR_12;
 socklen_t VAR_13;

 FUNC_8(1);

 VAR_12 = FUNC_9(VAR_2, VAR_4, 0);
 if (VAR_12 < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_6(VAR_7, VAR_3);
  VAR_6 = VAR_11;
  FUNC_3(-1, "socket");
 }

 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_addr.s_addr = FUNC_7(VAR_1);
 VAR_9.sin_port = FUNC_5(VAR_5);

 if (FUNC_2(VAR_12, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_6(VAR_7, VAR_3);
  VAR_6 = VAR_11;
  FUNC_3(-1, "connect");
 }

 VAR_13 = sizeof(VAR_10);
 if (FUNC_4(VAR_12, (struct sockaddr *)&VAR_10, &VAR_13) < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_6(VAR_7, VAR_3);
  VAR_6 = VAR_11;
  FUNC_3(-1, "getsockname");
 }

 if (VAR_8) {
  if (FUNC_10(&VAR_10, &VAR_9) < 0) {
   VAR_11 = VAR_6;
   (void)FUNC_6(VAR_7, VAR_3);
   VAR_6 = VAR_11;
   FUNC_3(-1, "tcp_drop");
  }
  FUNC_8(2);
 }
 FUNC_1(VAR_12);
}
