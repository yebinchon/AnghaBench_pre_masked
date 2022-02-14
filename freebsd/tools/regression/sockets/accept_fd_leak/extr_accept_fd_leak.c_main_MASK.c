
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;
typedef scalar_t__ pid_t ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int FUNC_6 (struct sockaddr_in*,int) ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,struct sockaddr*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int,int ,...) ;
 scalar_t__ FUNC_13 () ;
 void* FUNC_14 (int ) ;
 void* FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,int) ;
 int FUNC_17 (char*,...) ;
 int VAR_16 ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (scalar_t__,int*,int ) ;
 int FUNC_25 (char*,int) ;
 int FUNC_26 (char*) ;

int
FUNC_27(void)
{
 struct sockaddr_in VAR_17;
 socklen_t VAR_18;
 pid_t VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_17("1..2\n");




 VAR_20 = FUNC_9(VAR_13);
 VAR_21 = FUNC_9(VAR_13);
 if (VAR_21 != VAR_20 + 1)
  FUNC_10(-1, "Non-sequential fd allocation\n");

 VAR_25 = FUNC_20(VAR_10, VAR_12, 0);
 if (VAR_25 == -1)
  FUNC_10(-1, "socket: %s", FUNC_22(VAR_15));

 FUNC_6(&VAR_17, sizeof(VAR_17));
 VAR_17.sin_len = sizeof(VAR_17);
 VAR_17.sin_family = VAR_0;
 VAR_17.sin_addr.s_addr = FUNC_14(VAR_6);

 FUNC_21();

 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {

  VAR_24 = FUNC_0((int)FUNC_18() % 65535, 1025);
  VAR_17.sin_port = FUNC_15(VAR_24);
  if (FUNC_5(VAR_25, (struct sockaddr *)&VAR_17, sizeof(VAR_17)) == 0)
   break;
  FUNC_25("bind with %d failed", VAR_24);
  FUNC_23(1000);
 }
 if (VAR_23 >= VAR_1) {
  FUNC_17("Bail out!\n");
  FUNC_11(1);
 }

 if (FUNC_16(VAR_25, -1) != 0)
  FUNC_10(-1, "listen: %s", FUNC_22(VAR_15));

 VAR_23 = FUNC_12(VAR_25, VAR_4);
 if (VAR_23 == -1)
  FUNC_10(-1, "ioctl(F_GETFL): %s", FUNC_22(VAR_15));
 VAR_23 |= VAR_9;
 if (FUNC_12(VAR_25, VAR_5, VAR_23) != 0)
  FUNC_10(-1, "ioctl(F_SETFL): %s", FUNC_22(VAR_15));
 VAR_23 = FUNC_12(VAR_25, VAR_4);
 if (VAR_23 == -1)
  FUNC_10(-1, "ioctl(F_GETFL): %s", FUNC_22(VAR_15));
 if ((VAR_23 & VAR_9) != VAR_9)
  FUNC_10(-1, "Failed to set O_NONBLOCK (i=0x%x)\n", VAR_23);

 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {
  VAR_18 = sizeof(VAR_17);
  if (FUNC_4(VAR_25, (struct sockaddr *)&VAR_17, &VAR_18) != -1)
   FUNC_10(-1, "accept succeeded\n");
  if (VAR_15 != VAR_2)
   FUNC_10(-1, "accept: %s", FUNC_22(VAR_15));
 }





 VAR_22 = FUNC_9(VAR_13);
 if (VAR_22 != VAR_21 + 2)
  FUNC_17("not ok 1 - (%d, %d, %d)\n", VAR_20, VAR_21, VAR_22);
 else
  FUNC_17("ok 1\n");





 FUNC_7(VAR_22);
 FUNC_19(VAR_11, VAR_14);
 VAR_19 = FUNC_13();
 if (VAR_19 < 0)
  FUNC_10(-1, "fork: %s", FUNC_22(VAR_15));




 if (VAR_19 == 0) {
  FUNC_7(VAR_20);
  FUNC_7(VAR_21);
  FUNC_7(VAR_25);

  FUNC_6(&VAR_17, sizeof(VAR_17));
  VAR_17.sin_len = sizeof(VAR_17);
  VAR_17.sin_family = VAR_0;
  VAR_17.sin_addr.s_addr = FUNC_14(VAR_6);
  VAR_17.sin_port = FUNC_15(VAR_24);

  for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
   VAR_25 = FUNC_20(VAR_10, VAR_12, 0);
   if (VAR_25 == -1)
    FUNC_10(-1, "socket: %s", FUNC_22(VAR_15));
   if (FUNC_8(VAR_25, (struct sockaddr *)&VAR_17,
       sizeof(VAR_17)) < 0)
    FUNC_10(-1, "connect: %s", FUNC_22(VAR_15));
   FUNC_7(VAR_25);
  }
  FUNC_3(0);
 }


 VAR_23 = FUNC_12(VAR_25, VAR_4);
 if (VAR_23 == -1)
  FUNC_10(-1, "ioctl(F_GETFL): %s", FUNC_22(VAR_15));
 VAR_23 &= ~VAR_9;
 if (FUNC_12(VAR_25, VAR_5, VAR_23) != 0)
  FUNC_10(-1, "ioctl(F_SETFL): %s", FUNC_22(VAR_15));
 VAR_23 = FUNC_12(VAR_25, VAR_4);
 if (VAR_23 == -1)
  FUNC_10(-1, "ioctl(F_GETFL): %s", FUNC_22(VAR_15));
 if (VAR_23 & VAR_9)
  FUNC_10(-1, "Failed to clear O_NONBLOCK (i=0x%x)\n", VAR_23);


 for (VAR_23 = 0; !VAR_16 && VAR_23 < VAR_8; VAR_23++) {
  VAR_18 = sizeof(VAR_17);
  if (FUNC_4(VAR_25, (struct sockaddr *)(uintptr_t)(0x100),
      &VAR_18) != -1)
   FUNC_10(-1, "accept succeeded\n");
  if (VAR_15 != VAR_3)
   FUNC_10(-1, "accept: %s", FUNC_22(VAR_15));
 }

 if (FUNC_24(VAR_19, &VAR_26, 0) < 0)
  FUNC_10(-1, "waitpid: %s", FUNC_22(VAR_15));
 if (!FUNC_2(VAR_26) || FUNC_1(VAR_26) != 0)
  FUNC_26("child process died");





 VAR_22 = FUNC_9(VAR_13);
 if (VAR_22 != VAR_21 + 2)
  FUNC_17("not ok 2 - (%d, %d, %d)\n", VAR_20, VAR_21, VAR_22);
 else
  FUNC_17("ok 2\n");

 return (0);
}
