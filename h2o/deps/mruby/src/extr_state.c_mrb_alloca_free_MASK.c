
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct alloca_header {struct alloca_header* next; } ;
struct TYPE_4__ {struct alloca_header* mems; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (TYPE_1__*,struct alloca_header*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0)
{
  struct alloca_header *VAR_1;
  struct alloca_header *VAR_2;

  if (VAR_0 == ((void*)0)) return;
  VAR_1 = VAR_0->mems;

  while (VAR_1) {
    VAR_2 = VAR_1;
    VAR_1 = VAR_1->next;
    FUNC_0(VAR_0, VAR_2);
  }
}
