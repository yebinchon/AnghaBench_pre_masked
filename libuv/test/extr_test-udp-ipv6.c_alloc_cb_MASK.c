
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_3__ {char* base; int len; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int slab ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(uv_handle_t* VAR_0,
                     size_t VAR_1,
                     uv_buf_t* VAR_2) {
  static char VAR_3[65536];
  FUNC_0(VAR_0);
  VAR_2->base = VAR_3;
  VAR_2->len = sizeof(VAR_3);
}
