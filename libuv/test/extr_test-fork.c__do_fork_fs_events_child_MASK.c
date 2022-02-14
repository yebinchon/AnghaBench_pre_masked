
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(int VAR_1) {

  pid_t VAR_2;
  uv_loop_t VAR_3;


  FUNC_3(FUNC_6(), VAR_1);
  VAR_2 = FUNC_4();
  FUNC_0(VAR_2 != -1);

  if (VAR_2 != 0) {

    FUNC_2(VAR_2);
  } else {






    FUNC_5("Running child\n");
    FUNC_9(&VAR_3);
    FUNC_5("Child first watch\n");
    FUNC_3(&VAR_3, VAR_1);
    FUNC_0(0 == FUNC_7(&VAR_3));
    FUNC_5("Child second watch default loop\n");

    FUNC_0(0 == FUNC_8(FUNC_6()));





    FUNC_10(FUNC_6());
    FUNC_3(FUNC_6(), VAR_1);





    FUNC_0(0 == FUNC_7(FUNC_6()));

    FUNC_5("Exiting child \n");
  }

  FUNC_1();
  return 0;

}
