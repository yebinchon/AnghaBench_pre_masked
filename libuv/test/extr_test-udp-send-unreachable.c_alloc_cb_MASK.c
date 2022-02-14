
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_3__ {char* base; int len; } ;
typedef TYPE_1__ uv_buf_t ;
typedef int slab ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(uv_handle_t* VAR_1,
                     size_t VAR_2,
                     uv_buf_t* VAR_3) {
  static char VAR_4[65536];
  FUNC_1(VAR_1);
  FUNC_0(VAR_2 <= sizeof(VAR_4));
  VAR_3->base = VAR_4;
  VAR_3->len = sizeof(VAR_4);
  VAR_0++;
}
