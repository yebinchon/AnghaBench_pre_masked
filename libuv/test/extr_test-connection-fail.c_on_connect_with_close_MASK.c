
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {int * handle; } ;
typedef TYPE_1__ uv_connect_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(uv_connect_t *VAR_5, int VAR_6) {
  FUNC_0((uv_stream_t*) &VAR_4 == VAR_5->handle);
  FUNC_0(VAR_6 == VAR_0);
  VAR_2++;

  FUNC_0(VAR_1 == 0);
  FUNC_1((uv_handle_t*)VAR_5->handle, VAR_3);
}
