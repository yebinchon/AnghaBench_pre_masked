
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct pcap_pkthdr {scalar_t__ caplen; } ;
typedef int s_in ;
typedef int rd ;
typedef int pcap_t ;
typedef int fd_set ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,struct pcap_pkthdr*) ;
 int * FUNC_13 (char*,int,int ,int,char*) ;
 int FUNC_14 (char*) ;
 int VAR_12 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_17 (int,unsigned char*,char*,unsigned short,unsigned char) ;
 int FUNC_18 (int,int ,int ,int*,int) ;
 int FUNC_19 (int ,int ,int ) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*) ;

int FUNC_22(int VAR_13, char *VAR_14[]) {
 int VAR_15, VAR_16;
 int VAR_17 = 1;
 int VAR_18 = 0;
 char VAR_19[16] = "\x00";
 unsigned char VAR_20 = 0;
 unsigned short VAR_21;
 struct sockaddr_in VAR_22;
 struct timeval VAR_23;
 fd_set VAR_24;
 unsigned char* VAR_25 = 0;

 if (VAR_13 < 2) {
  FUNC_15("Usage: %s <sip> [pps]\n", VAR_14[0]);
  FUNC_7(1);
 }

 if (VAR_13 > 2) {
  VAR_12 = FUNC_3(VAR_14[2]);
 }

 FUNC_15("PPS=%d\n", VAR_12);

 VAR_25 = VAR_14[1];

 FUNC_9(&VAR_22, 0, sizeof(VAR_22));
 VAR_16 = FUNC_19 (VAR_7, VAR_9, VAR_3);
 if (VAR_15 == -1) {
  FUNC_14("socket()");
  FUNC_7(1);
 }
 VAR_22.sin_family = VAR_7;
 VAR_22.sin_addr.s_addr = VAR_1;
 VAR_22.sin_port = FUNC_8(VAR_0);
 if (FUNC_4 (VAR_16, (struct sockaddr*)&VAR_22, sizeof(VAR_22)) == -1) {
  FUNC_14("bind()");
  FUNC_7(1);
 }

 VAR_17 = 1;
 if (FUNC_18(VAR_16, VAR_2, VAR_5, &VAR_17, sizeof(VAR_17)) == -1) {
  FUNC_14("setsockopt()");
  FUNC_7(1);
 }

 VAR_15 = FUNC_19 (VAR_7, VAR_10, VAR_3);
 if (VAR_15 == -1) {
  FUNC_14("socket()");
  FUNC_7(1);
 }

 VAR_17 = 1;
 if (FUNC_18(VAR_15, VAR_2, VAR_4, &VAR_17, sizeof(VAR_17)) == -1) {
  FUNC_14("setsockopt()");
  FUNC_7(1);
 }
 while (1) {
  FUNC_2(&VAR_24);
  FUNC_1(VAR_16, &VAR_24);
  VAR_23.tv_sec = 0;
  VAR_23.tv_usec = 10*1000;
  VAR_17 = FUNC_16(VAR_16+1, &VAR_24, ((void*)0), ((void*)0), &VAR_23);
  if (VAR_17 == -1) {
   FUNC_14("select()");
   FUNC_7(1);
  }
  if (VAR_17 == 1 && FUNC_0(VAR_16, &VAR_24)) {
   char VAR_26[16];
   unsigned char VAR_27;
   if (FUNC_5(VAR_16, VAR_26, &VAR_27, &VAR_21)) {
    int VAR_28 = 0;
    if (VAR_27 != VAR_20 || FUNC_20(VAR_26, VAR_19) != 0 ||
        VAR_18 == 0) {
         VAR_28 = 1;
    }
    VAR_20 = VAR_27;
    FUNC_21(VAR_19, VAR_26);

    FUNC_15("Got signal from %s:%d TTL=%d\n",
           VAR_19, VAR_21, VAR_20);
    VAR_18 = 2;

    if (VAR_28) {
     FUNC_15("Sending ttl (%d)...\n", VAR_20);
     FUNC_17(VAR_15, VAR_25, VAR_19, VAR_21, 69 + (VAR_11-VAR_20));
    }
   }
  }

  if (VAR_18) {
   FUNC_15("Sending stuff to %s...\n", VAR_19);
   FUNC_17(VAR_15, VAR_25, VAR_19, VAR_21, VAR_8);
   VAR_18--;

   if (VAR_18 == 0) {
    FUNC_15("Stopping send\n");
   }
  }
 }





 FUNC_6(VAR_15);
 FUNC_6(VAR_16);
 FUNC_7(0);
}
