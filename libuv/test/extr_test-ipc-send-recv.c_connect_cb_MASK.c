
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_connect_t ;
typedef int uv_buf_t ;
struct TYPE_5__ {int stream; } ;
struct TYPE_4__ {int stream; } ;
struct TYPE_6__ {int channel; TYPE_2__ send2; int write_req2; TYPE_1__ send; int write_req; int connect_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int *,int,int *,int *) ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_3, int VAR_4) {
  int VAR_5;
  uv_buf_t VAR_6;

  FUNC_0(VAR_3 == &VAR_1.connect_req);
  FUNC_0(VAR_4 == 0);

  VAR_6 = FUNC_1(".", 1);
  VAR_5 = FUNC_3(&VAR_1.write_req,
                (uv_stream_t*)&VAR_1.channel,
                &VAR_6, 1,
                &VAR_1.send.stream,
                ((void*)0));
  FUNC_0(VAR_5 == 0);




  VAR_6 = FUNC_1(".", 1);
  VAR_5 = FUNC_3(&VAR_1.write_req2,
                (uv_stream_t*)&VAR_1.channel,
                &VAR_6, 1,
                &VAR_1.send2.stream,
                ((void*)0));
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_2((uv_stream_t*)&VAR_1.channel, VAR_0, VAR_2);
  FUNC_0(VAR_5 == 0);
}
