
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int un ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (struct sockaddr_un*,int ,int) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int,void*,int,int ,int *,int *) ;
 int FUNC_10 (int,char*,int,int ,struct sockaddr*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;

int
FUNC_17(void)
{
 struct sockaddr_un VAR_7;
 pid_t VAR_8;
 int VAR_9;

 if (FUNC_8(VAR_6) == -1)
  FUNC_4(1, "mkstemp");
 VAR_9 = FUNC_14(VAR_1, VAR_3, 0);
 if (VAR_9 == -1)
  FUNC_5(-1, "socket");
 FUNC_7(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sun_family = VAR_0;
 FUNC_16(VAR_6);
 FUNC_15(VAR_7.sun_path, VAR_6);
 if (FUNC_2(VAR_9, (struct sockaddr *)&VAR_7, sizeof(VAR_7)) == -1)
  FUNC_5(-1, "bind");
 VAR_8 = FUNC_6();
 if (VAR_8 == -1)
  FUNC_5(-1, "fork");
 if (VAR_8 == 0) {
  int VAR_10;
  char VAR_11[] = "AAAAAAAAA";

  FUNC_3(VAR_9);
  VAR_10 = FUNC_14(VAR_0, VAR_3, 0);
  if (VAR_10 == -1)
   FUNC_5(-1,"socket");
  if (FUNC_10(VAR_10, VAR_11, sizeof(VAR_11), 0, (struct sockaddr *)&VAR_7,
      sizeof(VAR_7)) != sizeof(VAR_11))
   FUNC_5(-1,"sendto");
  FUNC_3(VAR_10);
  FUNC_0(0);
 }

 FUNC_13(5);


 if (FUNC_9(VAR_9, (void *)-1, 1, 0, ((void*)0), ((void*)0)) != -1)
  FUNC_5(-1,"recvfrom succeeded when failure expected");

 (void)FUNC_12(VAR_2, VAR_4);
 if (FUNC_11(VAR_5) == 0) {




  FUNC_1(5);
  (void)FUNC_9(VAR_9, (void *)-1, 1, 0, ((void*)0), ((void*)0));
 }



 return (0);
}
