
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_handle_t ;
typedef int * uv_close_cb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_3, int VAR_4) {
  uv_tcp_t* VAR_5;
  int VAR_6;

  FUNC_0(VAR_4 == 0);

  VAR_5 = FUNC_1(sizeof(*VAR_5));
  FUNC_0(VAR_5 != ((void*)0));

  VAR_6 = FUNC_4(VAR_3->loop, VAR_5, VAR_0);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_2(VAR_3, (uv_stream_t*)VAR_5);
  FUNC_0(VAR_6 == VAR_1);

  FUNC_3((uv_handle_t*) VAR_3, ((void*)0));
  FUNC_3((uv_handle_t*) VAR_5, (uv_close_cb)VAR_2);
}
