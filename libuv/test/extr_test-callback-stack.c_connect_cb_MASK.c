
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_5__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_connect_t ;
struct TYPE_6__ {char* base; int len; } ;
typedef TYPE_2__ uv_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,TYPE_2__*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_5, int VAR_6) {
  uv_buf_t VAR_7;

  FUNC_2("Connected. Write some data to echo server...");

  FUNC_0(VAR_6 == 0);
  FUNC_0(VAR_2 == 0 && "connect_cb must be called from a fresh stack");

  VAR_2++;

  VAR_7.base = (char*) &VAR_0;
  VAR_7.len = sizeof VAR_0;

  if (FUNC_3(&VAR_4, (uv_stream_t*)VAR_5->handle, &VAR_7, 1, VAR_3)) {
    FUNC_1("uv_write failed");
  }

  VAR_2--;

  VAR_1++;
}
