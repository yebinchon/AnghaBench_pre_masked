
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {TYPE_2__* handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int pinger_t ;
struct TYPE_6__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(uv_connect_t *VAR_3, int VAR_4) {
  pinger_t *VAR_5 = (pinger_t*)VAR_3->handle->data;

  VAR_1++;

  FUNC_0(VAR_4 == 0);

  FUNC_0(1 == FUNC_3(VAR_3->handle));
  FUNC_0(1 == FUNC_4(VAR_3->handle));
  FUNC_0(0 == FUNC_2((uv_handle_t *) VAR_3->handle));

  FUNC_1(VAR_5);

  FUNC_5((uv_stream_t*)(VAR_3->handle), VAR_0, VAR_2);
}
