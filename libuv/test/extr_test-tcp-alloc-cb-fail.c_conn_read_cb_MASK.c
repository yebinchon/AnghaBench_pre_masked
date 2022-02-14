
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {scalar_t__ len; int * base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(uv_stream_t* VAR_5,
                         ssize_t VAR_6,
                         const uv_buf_t* VAR_7) {
  FUNC_0(VAR_6 == VAR_0);
  FUNC_0(VAR_7->base == ((void*)0));
  FUNC_0(VAR_7->len == 0);

  FUNC_1((uv_handle_t*) &VAR_3, VAR_2);
  FUNC_1((uv_handle_t*) &VAR_1, VAR_2);
  FUNC_1((uv_handle_t*) &VAR_4, VAR_2);
}
