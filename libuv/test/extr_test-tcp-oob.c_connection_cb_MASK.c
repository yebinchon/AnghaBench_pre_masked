
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_os_fd_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_7, int VAR_8) {
  int VAR_9;
  uv_os_fd_t VAR_10;

  FUNC_0(0 == VAR_8);
  FUNC_0(0 == FUNC_2(VAR_7, (uv_stream_t*) &VAR_5));
  FUNC_0(0 == FUNC_4((uv_stream_t*) &VAR_5, VAR_2, VAR_6));


  FUNC_0(0 == FUNC_3((uv_handle_t*) &VAR_3, &VAR_10));

  FUNC_0(0 == FUNC_5((uv_stream_t*) &VAR_3, 1));




  do {
    VAR_9 = FUNC_1(VAR_10, "hello", 5, VAR_1);
  } while (VAR_9 < 0 && VAR_4 == VAR_0);
  FUNC_0(5 == VAR_9);

  do {
    VAR_9 = FUNC_1(VAR_10, "hello", 5, VAR_1);
  } while (VAR_9 < 0 && VAR_4 == VAR_0);
  FUNC_0(5 == VAR_9);

  FUNC_0(0 == FUNC_5((uv_stream_t*) &VAR_3, 0));
}
