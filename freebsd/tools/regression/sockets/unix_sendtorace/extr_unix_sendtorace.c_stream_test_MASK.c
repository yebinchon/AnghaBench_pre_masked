
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_un*,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct sockaddr_un VAR_5;
 pid_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_1, VAR_3, 0);
 if (VAR_7 < 0)
  FUNC_2(-1, "stream_test: socket");

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.sun_len = sizeof(VAR_5);
 VAR_5.sun_family = VAR_0;
 FUNC_8(VAR_5.sun_path, VAR_4);

 if (FUNC_0(VAR_7, (struct sockaddr *)&VAR_5, sizeof(VAR_5)) < 0)
  FUNC_2(-1, "stream_test: bind");

 if (FUNC_5(VAR_7, -1) < 0)
  FUNC_2(-1, "stream_test: listen");

 VAR_6 = FUNC_3();
 if (VAR_6 < 0)
  FUNC_2(-1, "stream_test: fork");

 if (VAR_6 != 0) {
  FUNC_6(1);
  FUNC_9();
  FUNC_4(VAR_6, VAR_2);
  FUNC_6(1);
 } else
  FUNC_10(VAR_7);

 (void)FUNC_11(VAR_4);
}
