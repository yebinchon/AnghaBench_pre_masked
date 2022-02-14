
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ base; } ;
typedef TYPE_1__ uv_buf_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ buf_list_t ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(const uv_buf_t* VAR_1) {
  buf_list_t* VAR_2 = (buf_list_t*) VAR_1->base - 1;
  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;
}
