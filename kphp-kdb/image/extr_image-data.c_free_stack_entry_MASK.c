
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stack_entry {int tp; scalar_t__ a; } ;
struct TYPE_3__ {scalar_t__ reference_count; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (TYPE_1__*) ;



 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (struct stack_entry *VAR_0) {
  switch (VAR_0->tp) {
  case 129:
  case 128:
    break;
  case 130:
    FUNC_1 (4, "free_stack_entry: DestroyImage (image->reference_count: %d)\n", (int) ((Image *) VAR_0->a)->reference_count);
    FUNC_0 ((Image *) VAR_0->a);
  }
}
