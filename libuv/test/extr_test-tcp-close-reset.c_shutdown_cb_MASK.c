
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {int * handle; } ;
typedef TYPE_1__ uv_shutdown_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(uv_shutdown_t* VAR_4, int VAR_5) {
  if (VAR_0)
    FUNC_0(VAR_4->handle == (uv_stream_t*) &VAR_3);
  else
    FUNC_0(VAR_4->handle == (uv_stream_t*) &VAR_2);

  VAR_1++;
}
