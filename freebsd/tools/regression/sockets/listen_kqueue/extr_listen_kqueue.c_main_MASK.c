
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct kevent {uintptr_t ident; } ;
typedef int socklen_t ;
typedef int opt ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int,int ,int,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (uintptr_t,struct sockaddr*,int *) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int*) ;
 int FUNC_9 (int,struct kevent*,int,struct kevent*,int,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct sockaddr_in*,int ,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,int ,int ,int*,int) ;
 int FUNC_15 (int ,int ,int ) ;

int
FUNC_16()
{
 struct sockaddr_in VAR_11;
 struct kevent VAR_12[2];
 socklen_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if ((VAR_14 = FUNC_10()) == -1)
  FUNC_5(1, "kqueue");

 if ((VAR_15 = FUNC_15(VAR_6, VAR_7, 0)) == -1)
  FUNC_5(1, "socket");

 FUNC_0(&VAR_12[0], VAR_15, VAR_1, VAR_3 | VAR_4, 0, 0, ((void*)0));
 FUNC_0(&VAR_12[1], VAR_15, VAR_2, VAR_3 | VAR_4, 0, 0, ((void*)0));

 VAR_16 = 1;
 if (FUNC_14(VAR_15, VAR_8, VAR_9, &VAR_16, sizeof(VAR_16)) == -1)
  FUNC_5(1, "setsockopt");

 if (FUNC_9(VAR_14, VAR_12, 2, ((void*)0), 0, ((void*)0)) == -1)
     FUNC_5(1, "kevent");

 if (FUNC_14(VAR_15, VAR_8, VAR_10, &VAR_16, sizeof(VAR_16)) == -1)
  FUNC_5(1, "setsockopt");

 FUNC_12(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.sin_family = VAR_0;
 VAR_11.sin_port = FUNC_7(10000);

 if (FUNC_2(VAR_15, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) == -1)
  FUNC_5(1, "bind");
 if (FUNC_11(VAR_15, 0x80) == -1)
  FUNC_5(1, "listen");

 if (FUNC_8(VAR_15, VAR_5, &VAR_16) == -1)
  FUNC_5(1, "ioctl(FIONBIO)");

 if (FUNC_9(VAR_14, VAR_12, 2, ((void*)0), 0, ((void*)0)) == -1)
  FUNC_5(1, "kevent");

 VAR_17 = FUNC_6();
 if (VAR_17 == -1)
  FUNC_5(1, "fork");
 if (VAR_17 == 0) {
  if (FUNC_3(VAR_15) == -1)
   FUNC_5(1, "close");
  if ((VAR_15 = FUNC_15(VAR_6, VAR_7, 0)) == -1)
   FUNC_5(1, "socket");
  if (FUNC_4(VAR_15, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) == -1)
   FUNC_5(1, "connect");
 } else {
  VAR_18 = FUNC_9(VAR_14, ((void*)0), 0, VAR_12, 2, ((void*)0));
  if (VAR_18 < 1)
   FUNC_5(1, "kevent");
  for (int VAR_20 = 0; VAR_20 < VAR_18; ++VAR_20) {
   if (VAR_12[VAR_20].ident == (uintptr_t )VAR_15) {
    VAR_19 = FUNC_1(VAR_12[VAR_20].ident,
        (struct sockaddr *)&VAR_11, &VAR_13);
    if (VAR_19 == -1)
     FUNC_5(1, "accept");
    FUNC_13("OK\n");
   }
  }
 }
}
