
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_work_t ;
typedef int uv_loop_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int * const,int *,int ,int ) ;
 int FUNC_4 (int * const,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(uv_loop_t* const VAR_5) {
  uv_work_t VAR_6;
  int VAR_7;

  FUNC_0(VAR_4 == 0);
  FUNC_0(VAR_2 == 0);
  FUNC_2("Queue in %d\n", FUNC_1());
  VAR_7 = FUNC_3(VAR_5, &VAR_6, VAR_3, VAR_1);
  FUNC_0(VAR_7 == 0);
  FUNC_2("Running in %d\n", FUNC_1());
  FUNC_4(VAR_5, VAR_0);

  FUNC_0(VAR_4 == 1);
  FUNC_0(VAR_2 == 1);


  VAR_4 = 0;
  VAR_2 = 0;
}
