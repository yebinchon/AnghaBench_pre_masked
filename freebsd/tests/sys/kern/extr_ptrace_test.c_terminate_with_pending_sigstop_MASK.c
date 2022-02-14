
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int setmask ;
typedef int pthread_t ;
typedef scalar_t__ pid_t ;
typedef int cpusetid_t ;
typedef int cpuset_t ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int,int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_16 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,int ,int ) ;
 int FUNC_18 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_19 (int) ;
 int VAR_8 ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int*) ;
 scalar_t__ FUNC_22 (scalar_t__,int*,int ) ;

__attribute__((used)) static void
FUNC_23(bool VAR_9)
{
 pid_t VAR_10, VAR_11;
 int VAR_12, VAR_13;
 cpuset_t VAR_14;
 cpusetid_t VAR_15;
 pthread_t VAR_16;





 FUNC_0(FUNC_15(VAR_4, FUNC_14(), VAR_2, ((void*)0)) == 0);

 VAR_10 = FUNC_13();
 FUNC_0(VAR_10 >= 0);
 if (VAR_10 == 0) {
  VAR_10 = FUNC_13();
  FUNC_1(VAR_10 >= 0);
  if (VAR_10 == 0) {
   FUNC_20();


   FUNC_3(&VAR_14);
   FUNC_2(0, &VAR_14);
   FUNC_1(FUNC_10(&VAR_15) == 0);
   FUNC_1(FUNC_11(VAR_0,
       VAR_1, VAR_15,
       sizeof(VAR_14), &VAR_14) == 0);

   if (VAR_9) {






    FUNC_1(FUNC_16(&VAR_16, ((void*)0),
        VAR_8, ((void*)0)) == 0);
    FUNC_18(VAR_6);
   } else {






    FUNC_1(FUNC_16(&VAR_16, ((void*)0),
        VAR_7, ((void*)0)) == 0);
    FUNC_19(60);
   }

   FUNC_12(0);
  }

  VAR_11 = FUNC_22(VAR_10, &VAR_12, 0);
  FUNC_1(VAR_11 == VAR_10);
  FUNC_1(FUNC_7(VAR_12));
  FUNC_1(FUNC_8(VAR_12) == VAR_6);

  FUNC_1(FUNC_17(VAR_3, VAR_10, (caddr_t)1, 0) == 0);


  VAR_11 = FUNC_22(VAR_10, &VAR_12, 0);
  FUNC_1(VAR_11 == VAR_10);
  FUNC_1(FUNC_7(VAR_12));
  FUNC_1(FUNC_8(VAR_12) == VAR_6);





  FUNC_12(0);
 }







 for (VAR_13 = 0; VAR_13 < 2; ++VAR_13) {
  VAR_11 = FUNC_21(&VAR_12);
  if (VAR_11 == VAR_10)
   FUNC_0(FUNC_5(VAR_12) &&
       FUNC_4(VAR_12) == 0);
  else
   FUNC_0(FUNC_6(VAR_12) &&
       FUNC_9(VAR_12) == VAR_5);
 }
}
