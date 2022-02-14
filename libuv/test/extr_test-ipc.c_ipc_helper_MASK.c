
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
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,struct sockaddr const*,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int *,int *,int,int *,int *) ;
 int VAR_8 ;

int FUNC_16(int VAR_9) {




  struct sockaddr_in VAR_10;
  int VAR_11;
  uv_buf_t VAR_12;

  FUNC_0(0 == FUNC_5("0.0.0.0", VAR_1, &VAR_10));

  VAR_11 = FUNC_10(FUNC_4(), &VAR_3, 1);
  FUNC_0(VAR_11 == 0);

  FUNC_11(&VAR_3, 0);

  FUNC_0(1 == FUNC_7((uv_stream_t*) &VAR_3));
  FUNC_0(1 == FUNC_8((uv_stream_t*) &VAR_3));
  FUNC_0(0 == FUNC_6((uv_handle_t*) &VAR_3));

  VAR_11 = FUNC_14(FUNC_4(), &VAR_7);
  FUNC_0(VAR_11 == 0);

  VAR_11 = FUNC_13(&VAR_7, (const struct sockaddr*) &VAR_10, 0);
  FUNC_0(VAR_11 == 0);

  if (!VAR_9) {
    VAR_11 = FUNC_9((uv_stream_t*)&VAR_7, VAR_0, VAR_6);
    FUNC_0(VAR_11 == 0);
  }

  VAR_12 = FUNC_3("hello\n", 6);
  VAR_11 = FUNC_15(&VAR_8, (uv_stream_t*)&VAR_3, &VAR_12, 1,
      (uv_stream_t*)&VAR_7, ((void*)0));
  FUNC_0(VAR_11 == 0);

  if (VAR_9) {
    VAR_11 = FUNC_9((uv_stream_t*)&VAR_7, VAR_0, VAR_6);
    FUNC_0(VAR_11 == 0);
  }

  FUNC_2();
  VAR_11 = FUNC_12(FUNC_4(), VAR_2);
  FUNC_0(VAR_11 == 0);

  FUNC_0(VAR_5 == 1);
  FUNC_0(VAR_4 == 3);

  FUNC_1();
  return 0;
}
