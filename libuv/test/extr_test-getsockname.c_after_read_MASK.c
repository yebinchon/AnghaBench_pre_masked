
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_shutdown_t ;
struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_1,
                       ssize_t VAR_2,
                       const uv_buf_t* VAR_3) {
  uv_shutdown_t* VAR_4;
  int VAR_5;

  if (VAR_3->base) {
    FUNC_1(VAR_3->base);
  }

  VAR_4 = (uv_shutdown_t*) FUNC_2(sizeof *VAR_4);
  VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_0);
  FUNC_0(VAR_5 == 0);
}
