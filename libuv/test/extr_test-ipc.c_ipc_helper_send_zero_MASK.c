
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *,int *,int,int ) ;
 int VAR_4 ;

int FUNC_11(void) {
  int VAR_5;
  uv_buf_t VAR_6;

  VAR_6 = FUNC_2(0, 0);

  VAR_5 = FUNC_7(FUNC_3(), &VAR_1, 0);
  FUNC_0(VAR_5 == 0);

  FUNC_8(&VAR_1, 0);

  FUNC_0(1 == FUNC_5((uv_stream_t*) &VAR_1));
  FUNC_0(1 == FUNC_6((uv_stream_t*) &VAR_1));
  FUNC_0(0 == FUNC_4((uv_handle_t*) &VAR_1));

  VAR_5 = FUNC_10(&VAR_4,
               (uv_stream_t*)&VAR_1,
               &VAR_6,
               1,
               VAR_3);

  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_9(FUNC_3(), VAR_0);
  FUNC_0(VAR_5 == 0);

  FUNC_0(VAR_2 == 1);

  FUNC_1();
  return 0;
}
