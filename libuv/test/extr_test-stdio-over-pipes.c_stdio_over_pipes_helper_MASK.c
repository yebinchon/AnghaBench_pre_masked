
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;


 unsigned int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *,int,int ) ;

int FUNC_15(void) {

  char* VAR_10[] = {
    "he",
    "ll",
    "o ",
    "wo",
    "rl",
    "d",
    "\n"
  };

  uv_write_t VAR_11[FUNC_0(VAR_10)];
  uv_buf_t VAR_12[FUNC_0(VAR_10)];
  unsigned int VAR_13;
  int VAR_14;
  uv_loop_t* VAR_15 = FUNC_6();

  FUNC_1(VAR_0 == FUNC_7(0));
  FUNC_1(VAR_0 == FUNC_7(1));

  VAR_14 = FUNC_8(VAR_15, &VAR_8, 0);
  FUNC_1(VAR_14 == 0);
  VAR_14 = FUNC_8(VAR_15, &VAR_9, 0);
  FUNC_1(VAR_14 == 0);

  FUNC_9(&VAR_8, 0);
  FUNC_9(&VAR_9, 1);


  FUNC_13((uv_handle_t*)&VAR_8);
  FUNC_13((uv_handle_t*)&VAR_9);

  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++) {
    VAR_12[VAR_13] = FUNC_5((char*)VAR_10[VAR_13], FUNC_4(VAR_10[VAR_13]));
  }

  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++) {
    VAR_14 = FUNC_14(&VAR_11[VAR_13], (uv_stream_t*)&VAR_9, &VAR_12[VAR_13], 1,
      VAR_2);
    FUNC_1(VAR_14 == 0);
  }

  FUNC_3();
  FUNC_12(VAR_15, VAR_1);

  FUNC_1(VAR_3 == 7);
  FUNC_1(VAR_6 == 0);
  FUNC_1(VAR_4 == 0);

  FUNC_11((uv_handle_t*)&VAR_9);
  FUNC_11((uv_handle_t*)&VAR_8);

  VAR_14 = FUNC_10((uv_stream_t*)&VAR_8, VAR_7, VAR_5);
  FUNC_1(VAR_14 == 0);

  FUNC_12(VAR_15, VAR_1);

  FUNC_1(VAR_3 == 7);
  FUNC_1(VAR_6 == 1);
  FUNC_1(VAR_4 == 2);

  FUNC_2();
  return 0;
}
