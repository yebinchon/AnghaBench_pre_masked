
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct TYPE_4__ {int * handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *,int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_4, int VAR_5) {
  uv_buf_t VAR_6;
  uv_stream_t* VAR_7;
  int VAR_8;

  FUNC_0(VAR_4 == &VAR_1);
  FUNC_0(VAR_5 == 0);

  VAR_7 = VAR_4->handle;
  VAR_0++;


  FUNC_1((uv_tcp_t*)VAR_7);

  VAR_6 = FUNC_2("hello\n", 6);
  VAR_8 = FUNC_3(&VAR_3, VAR_7, &VAR_6, 1, VAR_2);
  FUNC_0(VAR_8 == 0);
}
