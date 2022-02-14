
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_shutdown_t ;
struct TYPE_4__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__,TYPE_1__ const*) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_2,
                       ssize_t VAR_3,
                       const uv_buf_t* VAR_4) {
  uv_shutdown_t* VAR_5;

  if (VAR_3 < 0) {

    FUNC_0(VAR_3 == VAR_0);

    if (VAR_4->base) {
      FUNC_1(VAR_4->base);
    }

    VAR_5 = FUNC_2(sizeof *VAR_5);
    FUNC_4(VAR_5, VAR_2, VAR_1);

    return;
  }

  if (VAR_3 == 0) {

    FUNC_1(VAR_4->base);
    return;
  }

  FUNC_3(VAR_2, VAR_3, VAR_4);
}
