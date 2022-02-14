
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int,int ) ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_5(uv_connect_t* VAR_9, int VAR_10) {
  unsigned int VAR_11;
  uv_buf_t VAR_12;
  uv_stream_t* VAR_13;

  if (VAR_9 == &VAR_4) {
    FUNC_1(VAR_10 != 0);





    FUNC_3((uv_handle_t*) &VAR_5[VAR_2], VAR_0);
    FUNC_3((uv_handle_t*) &VAR_3, VAR_0);
    return;
  }

  FUNC_1(VAR_10 == 0);
  FUNC_1(VAR_1 <= VAR_9);
  FUNC_1(VAR_9 <= VAR_1 + FUNC_0(VAR_1));
  VAR_11 = VAR_9 - VAR_1;

  VAR_12 = FUNC_2("x", 1);
  VAR_13 = (uv_stream_t*) &VAR_6[VAR_11];
  FUNC_1(0 == FUNC_4(&VAR_8[VAR_11], VAR_13, &VAR_12, 1, VAR_7));
}
