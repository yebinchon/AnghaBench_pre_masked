
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(uv_stream_t* VAR_2, ssize_t VAR_3, const uv_buf_t* VAR_4) {


  if (VAR_4->base) {
    FUNC_1(VAR_4->base);
  }

  if (VAR_3 >= 0) {
    FUNC_0(VAR_3 == 0);
  } else {
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_3 == VAR_0);
    FUNC_2((uv_handle_t*)VAR_2, VAR_1);
  }
}
