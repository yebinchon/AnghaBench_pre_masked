
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_pipe_t ;
struct TYPE_10__ {int conn_req; } ;
typedef TYPE_4__ pipe_conn_rec ;
struct TYPE_9__ {TYPE_5__* data; } ;
struct TYPE_8__ {TYPE_5__* data; } ;
struct TYPE_7__ {TYPE_5__* data; } ;
struct TYPE_11__ {int i; TYPE_3__ stream; TYPE_2__ write_req; TYPE_1__ conn_req; } ;
typedef TYPE_5__ conn_rec ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(conn_rec* VAR_3) {
  int VAR_4;

  VAR_4 = FUNC_3(VAR_2, (uv_pipe_t*)&VAR_3->stream, 0);
  FUNC_0(VAR_4 == 0);

  FUNC_2(&((pipe_conn_rec*) VAR_3)->conn_req,
                  (uv_pipe_t*) &VAR_3->stream,
                  VAR_0,
                  VAR_1);





  VAR_3->conn_req.data = VAR_3;
  VAR_3->write_req.data = VAR_3;
  VAR_3->stream.data = VAR_3;
}
