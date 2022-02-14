
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int,int*,char*) ;
 int FUNC_8 (int,int*,char*) ;

int
FUNC_9(void)
{
 int VAR_6, VAR_7[2];

 FUNC_5("1..49\n");

 VAR_6 = FUNC_4();
 if (VAR_6 == -1)
  FUNC_2(VAR_5, "kqueue", ((void*)0), ((void*)0));
 FUNC_0("kqueue()");





 if (FUNC_6(VAR_2, VAR_3, 0, VAR_7) == -1)
  FUNC_2(VAR_5, "socketpair", "PF_UNIX, SOCK_DGRAM", ((void*)0));
 FUNC_0("socketpair() 1");

 if (FUNC_3(VAR_7[0], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_DGRAM", "O_NONBLOCK");
 FUNC_0("fcntl() 1");
 if (FUNC_3(VAR_7[1], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_DGRAM", "O_NONBLOCK");
 FUNC_0("fnctl() 2");

 FUNC_7(VAR_6, VAR_7, "PF_UNIX, SOCK_DGRAM");

 if (FUNC_1(VAR_7[0]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_DGRAM", "sv[0]");
 FUNC_0("close() 1");
 if (FUNC_1(VAR_7[1]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_DGRAM", "sv[1]");
 FUNC_0("close() 2");
 if (FUNC_6(VAR_2, VAR_4, 0, VAR_7) == -1)
  FUNC_2(VAR_5, "socketpair", "PF_UNIX, SOCK_STREAM", ((void*)0));
 FUNC_0("socketpair() 2");

 if (FUNC_3(VAR_7[0], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_STREAM", "O_NONBLOCK");
 FUNC_0("fcntl() 3");
 if (FUNC_3(VAR_7[1], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_STREAM", "O_NONBLOCK");
 FUNC_0("fcntl() 4");

 FUNC_7(VAR_6, VAR_7, "PF_UNIX, SOCK_STREAM");

 if (FUNC_1(VAR_7[0]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_STREAM", "sv[0]");
 FUNC_0("close() 3");
 if (FUNC_1(VAR_7[1]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_STREAM", "sv[1]");
 FUNC_0("close() 4");





 if (FUNC_6(VAR_2, VAR_4, 0, VAR_7) == -1)
  FUNC_2(VAR_5, "socketpair", "PF_UNIX, SOCK_STREAM", ((void*)0));
 FUNC_0("socketpair() 3");

 if (FUNC_3(VAR_7[0], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_STREAM", "O_NONBLOCK");
 FUNC_0("fcntl() 5");
 if (FUNC_3(VAR_7[1], VAR_0, VAR_1) != 0)
  FUNC_2(VAR_5, "fcntl", "PF_UNIX, SOCK_STREAM", "O_NONBLOCK");
 FUNC_0("fcntl() 6");

 FUNC_8(VAR_6, VAR_7, "PF_UNIX, SOCK_STREAM");

 if (FUNC_1(VAR_7[0]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_STREAM", "sv[0]");
 FUNC_0("close() 5");
 if (FUNC_1(VAR_7[1]) == -1)
  FUNC_2(VAR_5, "close", "PF_UNIX/SOCK_STREAM", "sv[1]");
 FUNC_0("close() 6");

 if (FUNC_1(VAR_6) == -1)
  FUNC_2(VAR_5, "close", "kq", ((void*)0));
 FUNC_0("close() 7");

 return (0);
}
