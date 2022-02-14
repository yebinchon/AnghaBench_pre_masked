
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; int req; } ;
typedef TYPE_1__ write_req_t ;
typedef int uv_stream_t ;
typedef int uv_shutdown_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {char* base; } ;
typedef TYPE_2__ uv_buf_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_8(uv_stream_t* VAR_7,
                       ssize_t VAR_8,
                       const uv_buf_t* VAR_9) {
  int VAR_10;
  write_req_t *VAR_11;
  uv_shutdown_t* VAR_12;

  if (VAR_8 < 0) {

    FUNC_0(VAR_8 == VAR_0);

    FUNC_2(VAR_9->base);
    VAR_12 = FUNC_3(sizeof* VAR_12);
    FUNC_0(0 == FUNC_6(VAR_12, VAR_7, VAR_1));
    return;
  }

  if (VAR_8 == 0) {

    FUNC_2(VAR_9->base);
    return;
  }





  if (!VAR_6) {
    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
      if (VAR_9->base[VAR_10] == 'Q') {
        if (VAR_10 + 1 < VAR_8 && VAR_9->base[VAR_10 + 1] == 'S') {
          FUNC_2(VAR_9->base);
          FUNC_5((uv_handle_t*)VAR_7, VAR_3);
          return;
        } else {
          FUNC_5(VAR_5, VAR_4);
          VAR_6 = 1;
        }
      }
    }
  }

  VAR_11 = (write_req_t*) FUNC_3(sizeof *VAR_11);
  FUNC_0(VAR_11 != ((void*)0));
  VAR_11->buf = FUNC_4(VAR_9->base, VAR_8);

  if (FUNC_7(&VAR_11->req, VAR_7, &VAR_11->buf, 1, VAR_2)) {
    FUNC_1("uv_write failed");
  }
}
