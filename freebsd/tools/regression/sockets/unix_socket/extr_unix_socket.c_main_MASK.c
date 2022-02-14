
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int*) ;

int
FUNC_5(void)
{
 int VAR_6, VAR_7[2];

 VAR_6 = FUNC_3(VAR_1, VAR_4, 0);
 if (VAR_6 < 0)
  FUNC_1(-1, "socket(PF_LOCAL, SOCK_STREAM, 0)");
 FUNC_0(VAR_6);

 VAR_6 = FUNC_3(VAR_1, VAR_2, 0);
 if (VAR_6 < 0)
  FUNC_1(-1, "socket(PF_LOCAL, SOCK_DGRAM, 0)");
 FUNC_0(VAR_6);

 VAR_6 = FUNC_3(VAR_1, VAR_3, 0);
 if (VAR_6 >= 0) {
  FUNC_0(VAR_6);
  FUNC_2(-1, "socket(PF_LOCAL, SOCK_RAW, 0) returned %d", VAR_6);
 }
 if (VAR_5 != VAR_0)
  FUNC_1(-1, "socket(PF_LOCAL, SOCK_RAW, 0)");

 if (FUNC_4(VAR_1, VAR_4, 0, VAR_7) < 0)
  FUNC_1(-1, "socketpair(PF_LOCAL, SOCK_STREAM, 0, socks)");
 if (VAR_7[0] < 0)
  FUNC_2(-1, "socketpair(PF_LOCAL, SOCK_STREAM, 0, socks) [0] < 0");
 if (VAR_7[1] < 0)
  FUNC_2(-1, "socketpair(PF_LOCAL, SOCK_STREAM, 0, socks) [1] < 1");
 FUNC_0(VAR_7[0]);
 FUNC_0(VAR_7[1]);

 if (FUNC_4(VAR_1, VAR_2, 0, VAR_7) < 0)
  FUNC_1(-1, "socketpair(PF_LOCAL, SOCK_DGRAM, 0, socks)");
 if (VAR_7[0] < 0)
  FUNC_2(-1, "socketpair(PF_LOCAL, SOCK_DGRAM, 0, socks) [0] < 0");
 if (VAR_7[1] < 0)
  FUNC_2(-1, "socketpair(PF_LOCAL, SOCK_DGRAM, 0, socks) [1] < 1");
 FUNC_0(VAR_7[0]);
 FUNC_0(VAR_7[1]);

 return (0);
}
