
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_3__ {size_t len; int * base; } ;
typedef TYPE_1__ uv_buf_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(uv_handle_t* VAR_0, size_t VAR_1, uv_buf_t* VAR_2) {
  VAR_2->len = VAR_1;
  VAR_2->base = FUNC_1(VAR_1);
  FUNC_0(VAR_2->base != ((void*)0));
}
