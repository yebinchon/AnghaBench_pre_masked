
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
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
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(pid_t VAR_7, u_short VAR_8, int VAR_9)
{
 struct sockaddr_in VAR_10;
 int VAR_11, VAR_12;

 FUNC_7(1);

 VAR_12 = FUNC_8(VAR_2, VAR_5, 0);
 if (VAR_12 < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_4(VAR_7, VAR_4);
  VAR_6 = VAR_11;
  FUNC_3(-1, "socket");
 }

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.sin_family = VAR_0;
 VAR_10.sin_len = sizeof(VAR_10);
 VAR_10.sin_addr.s_addr = FUNC_5(VAR_1);
 VAR_10.sin_port = VAR_8;

 if (FUNC_2(VAR_12, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_4(VAR_7, VAR_4);
  VAR_6 = VAR_11;
  FUNC_3(-1, "connect");
 }

 if (FUNC_6(VAR_12, VAR_3) < 0) {
  VAR_11 = VAR_6;
  (void)FUNC_4(VAR_7, VAR_4);
  VAR_6 = VAR_11;
  FUNC_3(-1, "shutdown");
 }

 FUNC_7(VAR_9);
 FUNC_1(VAR_12);
}
