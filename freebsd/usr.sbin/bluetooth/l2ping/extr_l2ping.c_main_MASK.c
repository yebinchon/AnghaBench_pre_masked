
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_l2cap {int l2cap_len; char l2cap_bdaddr; void* l2cap_family; } ;
struct sockaddr {int dummy; } ;
struct ng_btsocket_l2cap_raw_ping {int result; int echo_size; char* echo_data; } ;
struct hostent {char* h_addr; char* h_name; } ;
typedef int src ;
typedef int sa ;
typedef int r ;
typedef int ng_l2cap_cmd_hdr_t ;
typedef int int32_t ;
typedef int dst ;
typedef char bdaddr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char**,char*,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,char*) ;
 struct hostent* FUNC_3 (char const*,int,void*) ;
 struct hostent* FUNC_4 (int ) ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,struct sockaddr*,int) ;
 int FUNC_9 (int,char*,...) ;
 int VAR_9 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,char**,char*) ;
 scalar_t__ FUNC_15 (struct timeval*,int *) ;
 int VAR_10 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int,int ,struct ng_btsocket_l2cap_raw_ping*,int) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (struct sockaddr_l2cap*,int ,int) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (int) ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_24 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_25 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_26 (char*) ;
 char* FUNC_27 (int) ;
 int FUNC_28 (int ,char**,int) ;
 double FUNC_29 (struct timeval*) ;
 int FUNC_30 (struct timeval*,struct timeval*) ;
 int FUNC_31 () ;

int
FUNC_32(int VAR_15, char *VAR_16[])
{
 bdaddr_t VAR_17, VAR_18;
 struct hostent *VAR_19;
 uint8_t *VAR_20;
 struct sockaddr_l2cap VAR_21;
 int32_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 char *VAR_29, *VAR_30;


 FUNC_20(&VAR_17, VAR_2, sizeof(VAR_17));
 FUNC_20(&VAR_18, VAR_2, sizeof(VAR_18));

 VAR_20 = (uint8_t *) FUNC_6(VAR_3, sizeof(uint8_t));
 if (VAR_20 == ((void*)0)) {
  FUNC_12(VAR_13, "Failed to allocate echo data buffer");
  FUNC_11(1);
 }






 VAR_27 = VAR_4 - sizeof(ng_l2cap_cmd_hdr_t);
 VAR_24 = -1;
 VAR_25 = 1;
 VAR_26 = 0;
 VAR_28 = 0;


 while ((VAR_22 = FUNC_14(VAR_15, VAR_16, "a:c:fi:nS:s:h")) != -1) {
  switch (VAR_22) {
  case 'a':
   if (!FUNC_2(VAR_11, &VAR_18)) {
    if ((VAR_19 = FUNC_4(VAR_11)) == ((void*)0))
     FUNC_10(1, "%s: %s", VAR_11, FUNC_16(VAR_10));

    FUNC_20(&VAR_18, VAR_19->h_addr, sizeof(VAR_18));
   }
   break;

  case 'c':
   VAR_24 = FUNC_28(VAR_11, &VAR_29, 10);
   if (VAR_24 <= 0 || *VAR_29 != '\0')
    FUNC_31();
   break;

  case 'f':
   VAR_26 = 1;
   break;

  case 'i':
   VAR_25 = FUNC_28(VAR_11, &VAR_29, 10);
   if (VAR_25 <= 0 || *VAR_29 != '\0')
    FUNC_31();
   break;

  case 'n':
   VAR_28 = 1;
   break;

  case 'S':
   if (!FUNC_2(VAR_11, &VAR_17)) {
    if ((VAR_19 = FUNC_4(VAR_11)) == ((void*)0))
     FUNC_10(1, "%s: %s", VAR_11, FUNC_16(VAR_10));

    FUNC_20(&VAR_17, VAR_19->h_addr, sizeof(VAR_17));
   }
   break;

  case 's':
                        VAR_27 = FUNC_28(VAR_11, &VAR_29, 10);
                        if (VAR_27 < sizeof(int32_t) ||
       VAR_27 > VAR_3 ||
       *VAR_29 != '\0')
    FUNC_31();
   break;

  case 'h':
  default:
   FUNC_31();
   break;
  }
 }

 if (FUNC_19(&VAR_18, VAR_2, sizeof(VAR_18)) == 0)
  FUNC_31();

 VAR_19 = FUNC_3((const char *)&VAR_18, sizeof(VAR_18), VAR_0);
 if (VAR_19 == ((void*)0) || VAR_19->h_name == ((void*)0) || VAR_19->h_name[0] == '\0' || VAR_28)
  FUNC_0(&VAR_30, "%d", FUNC_5(&VAR_18, ((void*)0)));
 else
  VAR_30 = FUNC_26(VAR_19->h_name);

 if (VAR_30 == ((void*)0))
  FUNC_10(1, "Failed to create remote hostname");

 VAR_23 = FUNC_25(VAR_6, VAR_8, VAR_1);
 if (VAR_23 < 0)
  FUNC_9(2, "Could not create socket");

 FUNC_21(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.l2cap_len = sizeof(VAR_21);
 VAR_21.l2cap_family = VAR_0;
 FUNC_20(&VAR_21.l2cap_bdaddr, &VAR_17, sizeof(VAR_21.l2cap_bdaddr));

 if (FUNC_1(VAR_23, (struct sockaddr *) &VAR_21, sizeof(VAR_21)) < 0)
  FUNC_9(3,
"Could not bind socket, src bdaddr=%s", FUNC_5(&VAR_21.l2cap_bdaddr, ((void*)0)));

 FUNC_21(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.l2cap_len = sizeof(VAR_21);
 VAR_21.l2cap_family = VAR_0;
 FUNC_20(&VAR_21.l2cap_bdaddr, &VAR_18, sizeof(VAR_21.l2cap_bdaddr));

 if (FUNC_8(VAR_23, (struct sockaddr *) &VAR_21, sizeof(VAR_21)) < 0)
  FUNC_9(4,
"Could not connect socket, dst bdaddr=%s", FUNC_5(&VAR_21.l2cap_bdaddr, ((void*)0)));


 for (VAR_22 = 0; VAR_22 < VAR_27; ) {
  int32_t VAR_31 = FUNC_22(VAR_27 - VAR_22, VAR_5);

  FUNC_20(VAR_20 + VAR_22, VAR_12, VAR_31);
  VAR_22 += VAR_31;
 }


 for (VAR_22 = 0; VAR_24 == -1 || VAR_24 > 0; VAR_22 ++) {
  struct ng_btsocket_l2cap_raw_ping VAR_32;
  struct timeval VAR_33, VAR_34;
  int32_t VAR_35;

  if (FUNC_15(&VAR_33, ((void*)0)) < 0)
   FUNC_9(5, "Could not gettimeofday(a)");

  VAR_35 = 0;
  *((int32_t *) VAR_20) = FUNC_17(VAR_22);

  VAR_32.result = 0;
  VAR_32.echo_size = VAR_27;
  VAR_32.echo_data = VAR_20;
  if (FUNC_18(VAR_23, VAR_7, &VAR_32, sizeof(VAR_32)) < 0) {
   VAR_32.result = VAR_9;
   VAR_35 = 1;




  }

  if (FUNC_15(&VAR_34, ((void*)0)) < 0)
   FUNC_9(7, "Could not gettimeofday(b)");

  FUNC_30(&VAR_34, &VAR_33);

  FUNC_12(VAR_14,
"%d bytes from %s seq_no=%d time=%.3f ms result=%#x %s\n",
   VAR_32.echo_size,
   VAR_30,
   FUNC_23(*((int32_t *)(VAR_32.echo_data))),
   FUNC_29(&VAR_34), VAR_32.result,
   ((VAR_35 == 0)? "" : FUNC_27(VAR_9)));

  if (!VAR_26) {

   VAR_33.tv_sec = VAR_25;
   VAR_33.tv_usec = 0;
   FUNC_24(0, ((void*)0), ((void*)0), ((void*)0), &VAR_33);
  }

  if (VAR_24 != -1)
   VAR_24 --;
 }

 FUNC_13(VAR_30);
 FUNC_13(VAR_20);
 FUNC_7(VAR_23);

 return (0);
}
