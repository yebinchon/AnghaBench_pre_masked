
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socktypeset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,char const*,int ,char*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int,char const*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int,char const*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_11(int VAR_15)
{
 const char *VAR_16[] = {"SOCK_DGRAM", "SOCK_STREAM",
     "SOCK_RAW"};
 int VAR_17[] = {VAR_12, VAR_14, VAR_13};
 const char *VAR_18;
 int VAR_19, VAR_20, VAR_21;

 FUNC_6();

 for (VAR_19 = 0; VAR_19 < sizeof(VAR_17)/sizeof(int); VAR_19++) {
  VAR_21 = VAR_17[VAR_19];
  VAR_18 = VAR_16[VAR_19];





  if (FUNC_4() != 0 && VAR_21 == VAR_13)
   continue;
  if (FUNC_3() != 0 && !VAR_15 && VAR_21 == VAR_13)
   continue;




  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_uchar(IP_TOS)",
       VAR_18, VAR_15);
  FUNC_10(VAR_20, VAR_18, VAR_10, "IP_TOS", 0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s %d) for test_ip_uchar(IP_TTL)",
       VAR_18, VAR_15);
  FUNC_10(VAR_20, VAR_18, VAR_11, "IP_TTL", 64);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_RECVOPTS)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_7,
      "IP_RECVOPTS", 0, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
        "(IP_RECVRETOPTS)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_8,
      "IP_RECVRETOPTS", 0, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_RECVDSTADDR)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_5,
      "IP_RECVDSTADDR", 0, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_RECVTTL)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_9, "IP_RECVTTL",
      0, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_RECVIF)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_6, "IP_RECVIF",
      0, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_FAITH)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_1, "IP_FAITH", 0,
      VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_boolean"
       "(IP_ONESBCAST)", VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_4,
      "IP_ONESBCAST", 0, VAR_0);
  FUNC_0(VAR_20);





  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for IP_MULTICAST_TTL",
       VAR_18, VAR_15);
  FUNC_10(VAR_20, VAR_18, VAR_3,
      "IP_MULTICAST_TTL", 1);
  FUNC_0(VAR_20);







  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for IP_MULTICAST_LOOP",
       VAR_18, VAR_15);
  FUNC_5(VAR_20, VAR_18, VAR_2,
      "IP_MULTICAST_LOOP", 1, VAR_0);
  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_options",
       VAR_18, VAR_15);

  FUNC_0(VAR_20);

  VAR_20 = FUNC_2(VAR_21, VAR_15);
  if (VAR_20 == -1)
   FUNC_1(-1, "get_socket(%s, %d) for test_ip_options",
       VAR_18, VAR_15);
  FUNC_8(VAR_20, VAR_18);
  FUNC_0(VAR_20);

  FUNC_7(0, ((void*)0));
  FUNC_9(0, ((void*)0));





 }
}
