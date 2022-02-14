
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_8__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *,int,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8(uv_stream_t* VAR_6, int VAR_7) {
  int VAR_8;
  uv_buf_t VAR_9;
  uv_tcp_t* VAR_10;

  FUNC_0(VAR_7 == 0);
  FUNC_0((uv_stream_t*)&VAR_5 == VAR_6);

  VAR_10 = FUNC_1(sizeof(*VAR_10));
  FUNC_0(*VAR_10);

  VAR_8 = FUNC_6(VAR_6->loop, VAR_10);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_2(VAR_6, (uv_stream_t*)VAR_10);
  FUNC_0(VAR_8 == 0);


  VAR_9 = FUNC_3("hello\n", 6);
  VAR_8 = FUNC_7(&VAR_2, (uv_stream_t*)&VAR_0, &VAR_9, 1,
    (uv_stream_t*)VAR_10, ((void*)0));
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_5((uv_stream_t*) VAR_10,
                    VAR_3,
                    VAR_4);
  FUNC_0(VAR_8 == 0);

  FUNC_4((uv_handle_t*)VAR_10, VAR_1);
}
