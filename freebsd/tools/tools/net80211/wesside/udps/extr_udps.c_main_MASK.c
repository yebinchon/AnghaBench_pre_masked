
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int s_in ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (TYPE_1__) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (struct timeval*,int ,int) ;
 int FUNC_12 (int,struct sockaddr_in*) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (char*,char*,char*) ;

int FUNC_19(int VAR_5, char* VAR_6[]) {
 int VAR_7 = 6969;
 struct sockaddr_in VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[64];
 struct timeval VAR_13;
 int VAR_14 = 0;
 fd_set VAR_15;
 char VAR_16[17];

 if( VAR_5 > 1)
  VAR_4 = FUNC_4(VAR_6[1]);

 FUNC_14("Packets per second=%d\n", VAR_4);

 VAR_9 = FUNC_17(VAR_2, VAR_3, VAR_1);
 if( VAR_9 < 0)
  FUNC_6(1, "socket()");

 VAR_8.sin_family = VAR_2;
 VAR_8.sin_port = FUNC_8(VAR_7);
 VAR_8.sin_addr.s_addr = VAR_0;

 if( FUNC_5(VAR_9, (struct sockaddr*)&VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_13("bind()");
  FUNC_7(1);
 }

 while(1) {
  FUNC_3(VAR_14 >= 0);
  VAR_11 = sizeof(struct sockaddr_in);

  FUNC_11(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.tv_usec = 1000*10;
  FUNC_2(&VAR_15);
  FUNC_1(VAR_9, &VAR_15);
  VAR_10 = FUNC_16(VAR_9 + 1, &VAR_15, ((void*)0) ,((void*)0) ,&VAR_13);
  if (VAR_10 == -1) {
   FUNC_13("select()");
   FUNC_7(1);
  }
  if (VAR_10 == 1 && FUNC_0(VAR_9, &VAR_15)) {
   VAR_10 = FUNC_15(VAR_9, VAR_12, 64, 0, (struct sockaddr*)&VAR_8, &VAR_11);

   if(VAR_10 < 0) {
    FUNC_13("read died");
    FUNC_7(1);
   }

   if(VAR_10 == 5 && FUNC_10(VAR_12, "sorbo", 5) == 0) {
    FUNC_18(VAR_16, "%s", FUNC_9(VAR_8.sin_addr));
    FUNC_14("Got signal from %s\n", VAR_16);



    VAR_14 = 2;

   }
  }

  if (VAR_14) {
   FUNC_14("Sending stuff to %s\n", VAR_16);

   FUNC_12(VAR_9, &VAR_8);
   VAR_14--;

   if(VAR_14 == 0)
   FUNC_14("Stopping send\n");
  }
 }
}
