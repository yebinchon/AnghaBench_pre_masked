
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_pipe_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(void) {
  uv_pipe_t VAR_0;
  int VAR_1;

  VAR_1 = FUNC_5(FUNC_4(), &VAR_0, 1);
  FUNC_0(VAR_1 == 0);
  VAR_1 = FUNC_6(&VAR_0, 0);
  FUNC_0(VAR_1 == 0);

  FUNC_3();
  FUNC_2((uv_stream_t*) &VAR_0);
  FUNC_7(100);

  FUNC_1();
  return 0;
}
