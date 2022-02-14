
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int pinger_t ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_2, int VAR_3) {
  pinger_t *VAR_4 = (pinger_t*)VAR_2->handle->data;

  FUNC_0(VAR_3 == 0);

  FUNC_2(VAR_4);

  if (FUNC_3(VAR_2->handle, VAR_0, VAR_1)) {
    FUNC_1("uv_read_start failed");
  }
}
