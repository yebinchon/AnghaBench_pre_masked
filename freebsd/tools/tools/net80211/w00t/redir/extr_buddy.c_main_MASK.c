
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int s_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_7 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;

int FUNC_11(int VAR_8, char *VAR_9[])
{
 int VAR_10, VAR_11;
 struct sockaddr_in VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sin_family = VAR_2;
 VAR_12.sin_port = FUNC_4(666);
 VAR_12.sin_addr.s_addr = VAR_0;

 if ((VAR_14 = FUNC_10(VAR_2, VAR_5, 0)) == -1)
  FUNC_2(1, "socket()");

 if ((VAR_10 = FUNC_10(VAR_12.sin_family, VAR_6, VAR_1)) == -1)
  FUNC_2(1, "socket()");

 if (FUNC_1(VAR_10, (struct sockaddr*)&VAR_12, sizeof(VAR_12)) == -1)
  FUNC_2(1, "bind()");

 if (FUNC_6(VAR_10, 5) == -1)
  FUNC_2(1, "listen()");

 if (FUNC_9(VAR_3, VAR_7) == VAR_4)
  FUNC_2(1, "signal()");

 while (1) {
  VAR_13 = sizeof(VAR_12);
  VAR_11 = FUNC_0(VAR_10, (struct sockaddr*)&VAR_12, &VAR_13);
  if (VAR_11 == -1)
   FUNC_2(1, "accept()");

  FUNC_8("Got dude %s\n", FUNC_5(VAR_12.sin_addr));
  FUNC_3(VAR_11, VAR_14);
  FUNC_8("Done\n");
 }
}
