
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int flag ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int*) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_9[2], VAR_10;
 socklen_t VAR_11;




 VAR_10 = FUNC_6(VAR_4, VAR_7, 0);
 if (VAR_10 == -1)
  FUNC_1(-1, "test_ip_hdrincl(): socket(SOCK_STREAM)");

 VAR_9[0] = -1;
 VAR_11 = sizeof(VAR_9[0]);
 if (FUNC_4(VAR_10, VAR_2, VAR_3, VAR_9, &VAR_11) == 0)
  FUNC_1(-1, "test_ip_hdrincl(): initial getsockopt(IP_HDRINCL)");

 if (VAR_8 != VAR_0)
  FUNC_2(-1, "test_ip_hdrincl(): initial getsockopt(IP_HDRINC) "
      "returned %d (%s) not ENOPROTOOPT", VAR_8,
      FUNC_7(VAR_8));

 VAR_9[0] = 1;
 if (FUNC_5(VAR_10, VAR_2, VAR_3, VAR_9, sizeof(VAR_9[0]))
     == 0)
  FUNC_1(-1,"test_ip_hdrincl(): setsockopt(IP_HDRINCL) on TCP "
      "succeeded\n");

 if (VAR_8 != VAR_0)
  FUNC_2(-1, "test_ip_hdrincl(): setsockopt(IP_HDRINCL) on TCP "
      "returned %d (%s) not ENOPROTOOPT\n", VAR_8,
      FUNC_7(VAR_8));

 FUNC_0(VAR_10);




 VAR_10 = FUNC_6(VAR_4, VAR_5, 0);
 if (VAR_10 == -1)
  FUNC_1(-1, "test_ip_hdrincl(): socket(SOCK_DGRAM");

 VAR_9[0] = -1;
 VAR_11 = sizeof(VAR_9[0]);
 if (FUNC_4(VAR_10, VAR_2, VAR_3, VAR_9, &VAR_11) == 0)
  FUNC_1(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) on UDP "
      "succeeded\n");

 if (VAR_8 != VAR_0)
  FUNC_2(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) on UDP "
      "returned %d (%s) not ENOPROTOOPT\n", VAR_8,
      FUNC_7(VAR_8));

 if (FUNC_5(VAR_10, VAR_2, VAR_3, VAR_9, sizeof(VAR_9[0]))
     == 0)
  FUNC_1(-1, "test_ip_hdrincl(): setsockopt(IP_HDRINCL) on UDP "
      "succeeded\n");

 if (VAR_8 != VAR_0)
  FUNC_2(-1, "test_ip_hdrincl(): setsockopt(IP_HDRINCL) on UDP "
      "returned %d (%s) not ENOPROTOOPT\n", VAR_8,
      FUNC_7(VAR_8));

 FUNC_0(VAR_10);
 VAR_10 = FUNC_6(VAR_4, VAR_6, 0);
 if (FUNC_3() != 0) {
  if (VAR_10 != -1)
   FUNC_2(-1, "test_ip_hdrincl: created raw socket as "
       "uid %d", FUNC_3());
  return;
 }
 if (VAR_10 == -1)
  FUNC_1(-1, "test_ip_hdrincl(): socket(PF_INET, SOCK_RAW)");




 VAR_9[0] = -1;
 VAR_9[1] = -1;
 VAR_11 = sizeof(VAR_9);
 if (FUNC_4(VAR_10, VAR_2, VAR_3, VAR_9, &VAR_11) < 0)
  FUNC_1(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) on raw "
      "socket");

 if (VAR_11 != sizeof(VAR_9[0]))
  FUNC_2(-1, "test_ip_hdrincl(): %d bytes returned on "
      "initial get\n", VAR_11);

 if (VAR_9[0] != 0)
  FUNC_2(-1, "test_ip_hdrincl(): initial flag value of %d\n",
      VAR_9[0]);




 VAR_9[0] = 1;
 if (FUNC_5(VAR_10, VAR_2, VAR_3, VAR_9, sizeof(VAR_9[0]))
     < 0)
  FUNC_1(-1, "test_ip_hdrincl(): setsockopt(IP_HDRINCL, 1)");




 VAR_9[0] = -1;
 VAR_9[1] = -1;
 VAR_11 = sizeof(VAR_9);
 if (FUNC_4(VAR_10, VAR_2, VAR_3, VAR_9, &VAR_11) < 0)
  FUNC_1(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) after "
      "set");

 if (VAR_9[0] == 0)
  FUNC_2(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) "
      "after set had flag of %d\n", VAR_9[0]);


 if (VAR_9[0] != 8)
  FUNC_8("test_ip_hdrincl(): WARNING: getsockopt(IP_H"
      "DRINCL) after set had non-historical value of %d\n",
      VAR_9[0]);




 VAR_9[0] = 0;
 if (FUNC_5(VAR_10, VAR_2, VAR_3, VAR_9, sizeof(VAR_9[0]))
     < 0)
  FUNC_1(-1, "test_ip_hdrincl(): setsockopt(IP_HDRINCL, 0)");




 VAR_9[0] = -1;
 VAR_9[1] = -1;
 VAR_11 = sizeof(VAR_9);
 if (FUNC_4(VAR_10, VAR_2, VAR_3, VAR_9, &VAR_11) < 0)
  FUNC_1(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) after "
      "reset");

 if (VAR_9[0] != 0)
  FUNC_2(-1, "test_ip_hdrincl(): getsockopt(IP_HDRINCL) "
      "after set had flag of %d\n", VAR_9[0]);

 FUNC_0(VAR_10);
}
