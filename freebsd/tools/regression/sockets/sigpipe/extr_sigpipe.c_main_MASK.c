
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*) ;
 int VAR_2 ;
 long FUNC_3 (char*,char**,int) ;
 int FUNC_4 (long,int*) ;
 int FUNC_5 (long) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;

int
FUNC_13(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 int VAR_6[2];
 long VAR_7;

 if (VAR_3 != 2)
  FUNC_11();

 VAR_7 = FUNC_3(VAR_4[1], &VAR_5, 10);
 if (VAR_7 < 0 || VAR_7 > 65535 || *VAR_5 != '\0')
  FUNC_11();


 FUNC_12("sigpipe: SO_NOSIGPIPE not defined, skipping some tests");





 if (FUNC_2(VAR_0, VAR_1, 0, VAR_6) < 0)
  FUNC_0(-1, "socketpair(PF_LOCAL, SOCK_STREAM)");
 FUNC_8("test_send_wantsignal(PF_LOCAL)", VAR_6[0],
     VAR_6[1]);
 if (FUNC_2(VAR_0, VAR_1, 0, VAR_6) < 0)
  FUNC_0(-1, "socketpair(PF_LOCAL, SOCK_STREAM)");
 FUNC_10("test_write_wantsignal(PF_LOCAL)", VAR_6[0],
     VAR_6[1]);
 FUNC_5(VAR_7);
 FUNC_4(VAR_7, VAR_6);
 FUNC_8("test_send_wantsignal(PF_INET)", VAR_6[0],
     VAR_6[1]);







 FUNC_4(VAR_7, VAR_6);
 FUNC_10("test_write_wantsignal(PF_INET)", VAR_6[0],
     VAR_6[1]);






 FUNC_6();

 FUNC_1(VAR_2, "PASS\n");
 return (0);
}
