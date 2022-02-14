
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_3, ssize_t VAR_4, const uv_buf_t* VAR_5) {
  FUNC_0(VAR_3 != ((void*)0));

  if (VAR_4 >= 0) {
    VAR_1 += VAR_4;
  }
  else {
    FUNC_0(VAR_4 == VAR_0);
    FUNC_2("GOT EOF\n");
    FUNC_3((uv_handle_t*)VAR_3, VAR_2);
  }

  FUNC_1(VAR_5->base);
}
