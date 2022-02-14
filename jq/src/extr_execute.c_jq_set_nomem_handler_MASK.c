
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* nomem_handler ) (void*) ;void* nomem_handler_data; } ;
typedef TYPE_1__ jq_state ;


 int FUNC_0 (void (*) (void*),void*) ;

void FUNC_1(jq_state *VAR_0, void (*VAR_1)(void *), void *VAR_2) {
  FUNC_0(VAR_1, VAR_2);
  VAR_0->nomem_handler = VAR_1;
  VAR_0->nomem_handler_data = VAR_2;
}
