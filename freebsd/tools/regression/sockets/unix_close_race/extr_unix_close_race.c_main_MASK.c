
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_un {int sun_path; void* sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int servaddr ;
typedef int ncpus ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int *) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_un*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (void*,int ,int ) ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (char*,int*,size_t*,int *,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;

int
FUNC_20(void)
{
 struct sockaddr_un VAR_6;
 int VAR_7, VAR_8, VAR_9;
 u_int VAR_10, VAR_11;
 size_t VAR_12;

 VAR_12 = sizeof(VAR_11);
 if (FUNC_16("kern.smp.cpus", &VAR_11, &VAR_12, ((void*)0), 0) < 0)
  FUNC_5(1, "kern.smp.cpus");
 if (VAR_12 != sizeof(VAR_11))
  FUNC_6(1, "kern.smp.cpus: invalid length");
 if (VAR_11 < 2)
  FUNC_19("SMP not present, test may be unable to trigger race");

 if (FUNC_11(VAR_5) == -1)
  FUNC_5(1, "mkstemp failed");
 FUNC_17(VAR_5);





 if ((VAR_7 = FUNC_14(VAR_0, VAR_3, 0)) < 0)
  FUNC_5(1, "parent: socket error");
 (void)FUNC_17(VAR_5);
 FUNC_2(&VAR_6, sizeof(VAR_6));
 VAR_6.sun_family = VAR_0;
 FUNC_15(VAR_6.sun_path, VAR_5);
 if (FUNC_1(VAR_7, (struct sockaddr *) &VAR_6,
     sizeof(VAR_6)) < 0)
  FUNC_5(1, "parent: bind error");
 if (FUNC_10(VAR_7, 1024) < 0)
  FUNC_5(1, "parent: listen error");

 VAR_9 = FUNC_8();
 if (VAR_9 == -1)
  FUNC_5(1, "fork()");
 if (VAR_9 != 0) {




  FUNC_3(VAR_7);
  FUNC_13(1);
  FUNC_2(&VAR_6, sizeof(VAR_6));
  VAR_6.sun_family = VAR_0;
  FUNC_15(VAR_6.sun_path, VAR_5);
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if ((VAR_8 = FUNC_14(VAR_0, VAR_3, 0)) < 0) {
    (void)FUNC_9(VAR_9, VAR_2);
    FUNC_5(1, "parent: socket error");
   }
   if (FUNC_4(VAR_8, (struct sockaddr *)&VAR_6,
       sizeof(VAR_6)) < 0) {
        (void)FUNC_9(VAR_9, VAR_2);
    FUNC_5(1, "parent: connect error");
   }
   if (FUNC_3(VAR_8) < 0) {
    (void)FUNC_9(VAR_9, VAR_2);
    FUNC_5(1, "parent: close error");
   }
   FUNC_18(VAR_4);
  }
  (void)FUNC_9(VAR_9, VAR_2);
 } else {




  for ( ; ; ) {
   if ((VAR_8 = FUNC_0(VAR_7,
       (struct sockaddr *)((void*)0), ((void*)0))) < 0)
    FUNC_5(1, "child: accept error");
   if (FUNC_3(VAR_8) < 0)
    FUNC_5(1, "child: close error");
  }
 }
 FUNC_12("OK\n");
 FUNC_7(0);
}
