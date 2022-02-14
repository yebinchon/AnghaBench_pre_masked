
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef void* caddr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (void*,size_t) ;
 scalar_t__ FUNC_10 (void*,size_t) ;
 int FUNC_11 (int ,int,void*,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_15(void *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9;
 pid_t VAR_10;

 VAR_10 = FUNC_8();
 if (VAR_10 == -1)
  FUNC_7("fork() failed: %s", FUNC_13(VAR_5));
 if (VAR_10 == 0) {
  if (FUNC_9(VAR_6, VAR_7) != 0)
   FUNC_6(1);
  if (FUNC_11(VAR_2, 0, ((void*)0), 0) != 0)
   FUNC_6(2);
  if (FUNC_12(VAR_4) != 0)
   FUNC_6(3);
  if (FUNC_10(VAR_6, VAR_7) != 0)
   FUNC_6(4);
  FUNC_6(0);
 }

 FUNC_0(FUNC_14(VAR_10, &VAR_8, 0) == VAR_10);
 FUNC_1(!FUNC_3(VAR_8),
     "child exited with status %d", FUNC_2(VAR_8));
 FUNC_0(FUNC_4(VAR_8));
 FUNC_0(FUNC_5(VAR_8) == VAR_4);

 VAR_5 = 0;
 VAR_9 = FUNC_11(VAR_1, VAR_10, VAR_6, 0);
 FUNC_0(VAR_5 == 0);
 FUNC_0(FUNC_11(VAR_3, VAR_10, VAR_6, VAR_9) == 0);
 FUNC_0(FUNC_11(VAR_0, VAR_10, (caddr_t)1, 0) == 0);
 FUNC_0(FUNC_14(VAR_10, &VAR_8, 0) == VAR_10);
 FUNC_0(FUNC_3(VAR_8));
 FUNC_1(FUNC_2(VAR_8) == 0,
     "child exited with status %d", FUNC_5(VAR_8));
}
