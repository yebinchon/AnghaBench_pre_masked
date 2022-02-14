
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_addrlen; int ai_addr; scalar_t__ ai_next; void* ai_protocol; void* ai_socktype; void* ai_family; int ai_flags; } ;
typedef int port ;
typedef int int255 ;
typedef int int1 ;
typedef int int0 ;
typedef int hints ;
typedef int fd_mask ;
struct TYPE_2__ {int fd; void* events; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct addrinfo*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_19 ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_20 ;
 int * VAR_21 ;
 void* FUNC_8 (int) ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_1__* VAR_29 ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int ,int const*,int) ;
 int FUNC_12 (char*,int,char*,int) ;
 scalar_t__ FUNC_13 (void*,void*,void*) ;
 struct addrinfo* VAR_30 ;

__attribute__((used)) static void
FUNC_14(void)
{
 int VAR_31;
 const int VAR_32 = 0, VAR_33 = 1, VAR_34 = 255;
 struct addrinfo VAR_35, *VAR_36;
 char VAR_37[VAR_11];

 FUNC_1(&VAR_20);
 VAR_24 = 0;
 VAR_21 = ((void*)0);
 FUNC_12(VAR_37, sizeof(VAR_37), "%u", VAR_16);

 FUNC_10(&VAR_35, 0, sizeof(VAR_35));
 VAR_35.ai_family = VAR_12;
 VAR_35.ai_socktype = VAR_17;
 VAR_35.ai_protocol = VAR_2;
 VAR_35.ai_flags = VAR_0;
 VAR_31 = FUNC_6(((void*)0), VAR_37, &VAR_35, &VAR_36);
 if (VAR_31) {
  FUNC_3("%s", FUNC_5(VAR_31));

 }
 if (VAR_36->ai_next) {
  FUNC_3(":: resolved to multiple address");

 }

 VAR_27 = FUNC_13(VAR_36->ai_family, VAR_36->ai_socktype, VAR_36->ai_protocol);
 if (VAR_27 < 0) {
  FUNC_3("rip socket");

 }







 if (FUNC_2(VAR_27, VAR_36->ai_addr, VAR_36->ai_addrlen) < 0) {
  FUNC_3("rip bind");

 }
 if (FUNC_11(VAR_27, VAR_1, VAR_4,
     &VAR_34, sizeof(VAR_34)) < 0) {
  FUNC_3("rip IPV6_MULTICAST_HOPS");

 }
 if (FUNC_11(VAR_27, VAR_1, VAR_5,
     &VAR_32, sizeof(VAR_32)) < 0) {
  FUNC_3("rip IPV6_MULTICAST_LOOP");

 }
 if (FUNC_11(VAR_27, VAR_1, VAR_6,
     &VAR_33, sizeof(VAR_33)) < 0) {
  FUNC_3("rip IPV6_PKTINFO");

 }
 if (FUNC_11(VAR_27, VAR_1, VAR_3,
     &VAR_33, sizeof(VAR_33)) < 0) {
  FUNC_3("rip IPV6_HOPLIMIT");

 }

 FUNC_4(VAR_36);

 FUNC_10(&VAR_35, 0, sizeof(VAR_35));
 VAR_35.ai_family = VAR_12;
 VAR_35.ai_socktype = VAR_17;
 VAR_35.ai_protocol = VAR_2;
 VAR_31 = FUNC_6(VAR_15, VAR_37, &VAR_35, &VAR_36);
 if (VAR_31) {
  FUNC_3("%s", FUNC_5(VAR_31));

 }
 if (VAR_36->ai_next) {
  FUNC_3("%s resolved to multiple address", VAR_15);

 }
 FUNC_9(&VAR_26, VAR_36->ai_addr, VAR_36->ai_addrlen);
 FUNC_4(VAR_36);





 VAR_22 = VAR_27;


 if (VAR_23 == 0) {
  if ((VAR_28 = FUNC_13(VAR_13, VAR_18, 0)) < 0) {
   FUNC_3("route socket");

  }




  if (VAR_28 > VAR_22)
   VAR_22 = VAR_28;

 } else {



  VAR_28 = -1;

 }


 VAR_19 = FUNC_7(VAR_22 + 1, VAR_10) * sizeof(fd_mask);
 if ((VAR_30 = FUNC_8(VAR_19)) == ((void*)0)) {
  FUNC_3("malloc");

 }
 if ((VAR_25 = FUNC_8(VAR_19)) == ((void*)0)) {
  FUNC_3("malloc");

 }
 FUNC_10(VAR_30, 0, VAR_19);
 FUNC_0(VAR_27, VAR_30);
 if (VAR_28 >= 0)
  FUNC_0(VAR_28, VAR_30);

}
