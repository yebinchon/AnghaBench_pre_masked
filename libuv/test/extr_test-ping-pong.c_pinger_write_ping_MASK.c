
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_stream_t ;
typedef int uv_buf_t ;
struct TYPE_4__ {int tcp; } ;
struct TYPE_5__ {TYPE_1__ stream; int vectored_writes; } ;
typedef TYPE_2__ pinger_t ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_5(pinger_t* VAR_2) {
  uv_write_t *VAR_3;
  uv_buf_t VAR_4[sizeof VAR_0 - 1];
  int VAR_5, VAR_6;

  if (!VAR_2->vectored_writes) {

    VAR_6 = 1;
    VAR_4[0] = FUNC_3(VAR_0, sizeof VAR_0 - 1);
  } else {

    VAR_6 = sizeof VAR_0 - 1;
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
      VAR_4[VAR_5] = FUNC_3(&VAR_0[VAR_5], 1);
    }
  }

  VAR_3 = FUNC_1(sizeof(*VAR_3));
  if (FUNC_4(VAR_3,
               (uv_stream_t*) &VAR_2->stream.tcp,
               VAR_4,
               VAR_6,
               VAR_1)) {
    FUNC_0("uv_write failed");
  }

  FUNC_2("PING");
}
