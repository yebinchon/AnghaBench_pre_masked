
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ req_list_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(uv_req_t* VAR_1) {
  req_list_t* VAR_2 = (req_list_t*) VAR_1;

  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;
}
