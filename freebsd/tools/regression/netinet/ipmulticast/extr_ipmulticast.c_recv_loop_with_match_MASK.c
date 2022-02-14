
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_11__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {TYPE_6__ sin_addr; } ;
struct TYPE_10__ {scalar_t__ sa_family; int sa_len; } ;
struct TYPE_9__ {TYPE_1__ sin; TYPE_3__ sa; } ;
typedef TYPE_2__ sockunion_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int,int *,int ,int ) ;
 char* FUNC_5 (TYPE_6__) ;
 int VAR_9 ;
 int FUNC_6 (int,char*,int,int ,TYPE_3__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(int VAR_14, sockunion_t *VAR_15, sockunion_t *VAR_16)
{
 int VAR_17;
 sockunion_t VAR_18;
 char VAR_19[VAR_3];
 ssize_t VAR_20;
 size_t VAR_21;
 int VAR_22;
 char VAR_23[VAR_5];
 char VAR_24[VAR_3];

 FUNC_1(VAR_16->sa.sa_family == VAR_0);




 if (VAR_13 == 0)
  return (0);

 VAR_17 = FUNC_4(&VAR_15->sa, VAR_15->sa.sa_len, VAR_19,
     VAR_3, ((void*)0), 0, VAR_4);
 if (VAR_17) {
  FUNC_2(VAR_11, "getnameinfo: %s\n", FUNC_3(VAR_17));
  return (VAR_17);
 }

 VAR_17 = FUNC_4(&VAR_16->sa, VAR_16->sa.sa_len, VAR_24,
     VAR_3, ((void*)0), 0, VAR_4);
 if (VAR_17) {
  FUNC_2(VAR_11, "getnameinfo: %s\n", FUNC_3(VAR_17));
  return (VAR_17);
 }

 FUNC_2(VAR_12,
     "Waiting %d seconds for inbound traffic on group %s\n"
     "Expecting no traffic from blocked source: %s\n",
     (int)VAR_13, VAR_19, VAR_24);

 FUNC_8(128, VAR_10);
 FUNC_8(129, VAR_10);

 VAR_17 = 0;
 VAR_21 = 0;
 FUNC_0(VAR_13);
 while (0 == (VAR_22 = FUNC_7(VAR_9))) {
  VAR_20 = FUNC_6(VAR_14, VAR_23, VAR_5, 0, &VAR_18.sa,
      (socklen_t *)&VAR_18.sa.sa_len);
  if (VAR_7) {
   FUNC_2(VAR_11, "debug: packet received from %s\n",
       FUNC_5(VAR_18.sin.sin_addr));
  }
  if (VAR_16 &&
      VAR_16->sin.sin_addr.s_addr == VAR_18.sin.sin_addr.s_addr)
   break;
  VAR_21++;
 }

 if (VAR_8) {
  FUNC_2(VAR_11, "Number of datagrams received from "
      "non-blocked sources: %d\n", (int)VAR_21);
 }

 switch (VAR_22) {
 case 129:
  break;
 case 128:
  FUNC_2(VAR_11, "interrupted\n");
  VAR_17 = 20;
  break;
 case 0:
  FUNC_2(VAR_11, "FAIL: got packet from blocked source\n");
  VAR_17 = VAR_1;
  break;
 default:
  FUNC_9("recvfrom");
  VAR_17 = VAR_2;
  break;
 }

 FUNC_8(128, VAR_6);
 FUNC_8(129, VAR_6);

 return (VAR_17);
}
