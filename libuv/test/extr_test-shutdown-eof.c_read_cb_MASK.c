
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_stream_t ;
struct TYPE_3__ {char* base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(uv_stream_t* VAR_4, ssize_t VAR_5, const uv_buf_t* VAR_6) {
  FUNC_0((uv_tcp_t*)VAR_4 == &VAR_3);

  if (VAR_5 == 0) {
    FUNC_1(VAR_6->base);
    return;
  }

  if (!VAR_2) {
    FUNC_0(VAR_5 == 1);
    FUNC_0(!VAR_1);
    FUNC_0(VAR_6->base[0] == 'Q');
    FUNC_1(VAR_6->base);
    VAR_2 = 1;
    FUNC_2("got Q");
  } else {
    FUNC_0(VAR_5 == VAR_0);
    if (VAR_6->base) {
      FUNC_1(VAR_6->base);
    }
    VAR_1 = 1;
    FUNC_2("got EOF");
  }
}
