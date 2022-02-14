
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
struct TYPE_8__ {int conn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_7, int VAR_8) {
  int VAR_9;
  uv_buf_t VAR_10;

  if (!VAR_5) {




    FUNC_0(VAR_8 == 0);
    FUNC_0((uv_stream_t*)&VAR_6 == VAR_7);

    VAR_9 = FUNC_4(VAR_7->loop, &VAR_2.conn);
    FUNC_0(VAR_9 == 0);

    VAR_9 = FUNC_1(VAR_7, (uv_stream_t*)&VAR_2.conn);
    FUNC_0(VAR_9 == 0);

    FUNC_3((uv_handle_t*)&VAR_2.conn, VAR_1);

    VAR_10 = FUNC_2("accepted_connection\n", 20);
    VAR_9 = FUNC_5(&VAR_3, (uv_stream_t*)&VAR_0, &VAR_10, 1,
      ((void*)0), VAR_4);
    FUNC_0(VAR_9 == 0);

    VAR_5 = 1;
  }
}
