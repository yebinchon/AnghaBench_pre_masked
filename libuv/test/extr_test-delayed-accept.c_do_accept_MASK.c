
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(uv_timer_t* VAR_2) {
  uv_tcp_t* VAR_3;
  uv_tcp_t* VAR_4 = (uv_tcp_t*)FUNC_1(sizeof *VAR_4);
  int VAR_5;

  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(VAR_4 != ((void*)0));

  VAR_5 = FUNC_5(FUNC_4(), VAR_4);
  FUNC_0(VAR_5 == 0);

  VAR_3 = (uv_tcp_t*)VAR_2->data;
  VAR_5 = FUNC_2((uv_stream_t*)VAR_3, (uv_stream_t*)VAR_4);
  FUNC_0(VAR_5 == 0);

  VAR_1++;


  FUNC_3((uv_handle_t*)VAR_4, VAR_0);


  if (VAR_1 == 2) {
    FUNC_3((uv_handle_t*)VAR_3, VAR_0);
  }


  FUNC_3((uv_handle_t*)VAR_2, VAR_0);
}
