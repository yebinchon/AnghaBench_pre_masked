
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_6__ {size_t len; char* base; } ;
typedef TYPE_1__ uv_buf_t ;
struct TYPE_7__ {TYPE_1__ uv_buf_t; struct TYPE_7__* next; } ;
typedef TYPE_2__ buf_list_t ;


 TYPE_2__* VAR_0 ;
 TYPE_2__* FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(uv_handle_t* VAR_1, size_t VAR_2, uv_buf_t* VAR_3) {
  buf_list_t* VAR_4;

  VAR_4 = VAR_0;
  if (VAR_4 != ((void*)0))
    VAR_0 = VAR_4->next;
  else {
    VAR_4 = FUNC_0(VAR_2 + sizeof(*VAR_4));
    VAR_4->uv_buf_t.len = VAR_2;
    VAR_4->uv_buf_t.base = (char*) (VAR_4 + 1);
  }

  *VAR_3 = VAR_4->uv_buf_t;
}
