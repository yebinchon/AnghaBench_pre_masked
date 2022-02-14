
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,struct sockaddr const*,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int *,int *,int,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_14(void) {




  struct sockaddr_in VAR_7;
  int VAR_8;
  uv_buf_t VAR_9;

  FUNC_0(0 == FUNC_4("0.0.0.0", VAR_0, &VAR_7));

  VAR_8 = FUNC_8(FUNC_3(), &VAR_2, 1);
  FUNC_0(VAR_8 == 0);

  FUNC_9(&VAR_2, 0);

  FUNC_0(1 == FUNC_6((uv_stream_t*) &VAR_2));
  FUNC_0(1 == FUNC_7((uv_stream_t*) &VAR_2));
  FUNC_0(0 == FUNC_5((uv_handle_t*) &VAR_2));

  VAR_9 = FUNC_2("hello\n", 6);

  VAR_8 = FUNC_12(FUNC_3(), &VAR_3);
  FUNC_0(VAR_8 == 0);
  VAR_8 = FUNC_12(FUNC_3(), &VAR_4);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_11(&VAR_3, (const struct sockaddr*) &VAR_7, 0);
  FUNC_0(VAR_8 == 0);
  VAR_8 = FUNC_11(&VAR_4, (const struct sockaddr*) &VAR_7, 0);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_13(&VAR_5, (uv_stream_t*)&VAR_2, &VAR_9, 1,
                (uv_stream_t*)&VAR_3, ((void*)0));
  FUNC_0(VAR_8 == 0);
  VAR_8 = FUNC_13(&VAR_6, (uv_stream_t*)&VAR_2, &VAR_9, 1,
                (uv_stream_t*)&VAR_4, ((void*)0));
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_10(FUNC_3(), VAR_1);
  FUNC_0(VAR_8 == 0);

  FUNC_1();
  return 0;
}
