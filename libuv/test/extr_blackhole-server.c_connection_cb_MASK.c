
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_9__ {int handle; } ;
typedef TYPE_2__ conn_rec ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_3, int VAR_4) {
  conn_rec* VAR_5;
  int VAR_6;

  FUNC_0(VAR_4 == 0);
  FUNC_0(VAR_3 == (uv_stream_t*)&VAR_2);

  VAR_5 = FUNC_1(sizeof *VAR_5);
  FUNC_0(VAR_5 != ((void*)0));

  VAR_6 = FUNC_4(VAR_3->loop, &VAR_5->handle);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_2(VAR_3, (uv_stream_t*)&VAR_5->handle);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_3((uv_stream_t*)&VAR_5->handle, VAR_0, VAR_1);
  FUNC_0(VAR_6 == 0);
}
