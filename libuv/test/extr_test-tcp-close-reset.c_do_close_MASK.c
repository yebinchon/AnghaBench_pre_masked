
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_tcp_t* VAR_7) {
  if (VAR_3 == 1) {
    FUNC_0(0 == FUNC_2(&VAR_5, (uv_stream_t*) VAR_7, VAR_4));
    FUNC_0(VAR_0 == FUNC_3(VAR_7, VAR_2));
  } else {
    FUNC_0(0 == FUNC_3(VAR_7, VAR_2));
    FUNC_0(VAR_1 == FUNC_2(&VAR_5, (uv_stream_t*) VAR_7, VAR_4));
  }

  FUNC_1((uv_handle_t*) &VAR_6, ((void*)0));
}
