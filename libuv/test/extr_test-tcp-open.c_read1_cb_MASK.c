
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {char* base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(uv_stream_t* VAR_2, ssize_t VAR_3, const uv_buf_t* VAR_4) {
  int VAR_5;
  FUNC_0(VAR_2 != ((void*)0));

  if (VAR_3 >= 0) {
    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
      FUNC_0(VAR_4->base[VAR_5] == 'P');
  } else {
    FUNC_0(VAR_3 == VAR_0);
    FUNC_1("GOT EOF\n");
    FUNC_2((uv_handle_t*)VAR_2, VAR_1);
  }
}
