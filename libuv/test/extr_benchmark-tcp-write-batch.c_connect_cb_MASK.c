
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; int req; } ;
typedef TYPE_1__ write_req ;
typedef int uv_stream_t ;
struct TYPE_6__ {int * handle; } ;
typedef TYPE_2__ uv_connect_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_3(uv_connect_t* VAR_7, int VAR_8) {
  write_req* VAR_9;
  int VAR_10;
  int VAR_11;

  FUNC_0(VAR_7->handle == (uv_stream_t*)&VAR_4);

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
    VAR_9 = &VAR_6[VAR_10];
    VAR_11 = FUNC_2(&VAR_9->req, VAR_7->handle, &VAR_9->buf, 1, VAR_5);
    FUNC_0(VAR_11 == 0);
  }

  VAR_11 = FUNC_1(&VAR_3, VAR_7->handle, VAR_2);
  FUNC_0(VAR_11 == 0);

  VAR_1++;
}
