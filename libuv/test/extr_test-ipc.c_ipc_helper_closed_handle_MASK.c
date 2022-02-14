
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 () ;

int FUNC_13(void) {
  int VAR_6;

  FUNC_2(VAR_2, '.', VAR_0);
  VAR_5 = FUNC_4(VAR_2, VAR_0);

  VAR_6 = FUNC_9(FUNC_5(), &VAR_3, 1);
  FUNC_0(VAR_6 == 0);

  FUNC_10(&VAR_3, 0);

  FUNC_0(1 == FUNC_7((uv_stream_t*) &VAR_3));
  FUNC_0(1 == FUNC_8((uv_stream_t*) &VAR_3));
  FUNC_0(0 == FUNC_6((uv_handle_t*) &VAR_3));

  if (FUNC_12() > 0)
    FUNC_3();

  VAR_6 = FUNC_11(FUNC_5(), VAR_1);
  FUNC_0(VAR_6 == 0);

  FUNC_0(VAR_4 == 1);

  FUNC_1();
  return 0;
}
