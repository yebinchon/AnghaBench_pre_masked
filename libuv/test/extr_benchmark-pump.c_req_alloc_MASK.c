
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ req_list_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static uv_req_t* FUNC_1(void) {
  req_list_t* VAR_1;

  VAR_1 = VAR_0;
  if (VAR_1 != ((void*)0)) {
    VAR_0 = VAR_1->next;
    return (uv_req_t*) VAR_1;
  }

  VAR_1 = (req_list_t*) FUNC_0(sizeof *VAR_1);
  return (uv_req_t*) VAR_1;
}
