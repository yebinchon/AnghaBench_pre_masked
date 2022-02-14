
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct forth_stack {size_t top; TYPE_1__* x; int error; } ;
struct TYPE_2__ {int tp; } ;


 int FUNC_0 (int ,int,char*,char*,...) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (struct forth_stack *VAR_0, int VAR_1, char *VAR_2) {
  if (VAR_0->top < 0) {
    FUNC_0 (VAR_0->error, sizeof (VAR_0->error), "%s (stack underflow)", VAR_2);
    return 0;
  }
  if (!(VAR_0->x[VAR_0->top].tp & VAR_1)) {
    FUNC_0 (VAR_0->error, sizeof (VAR_0->error), "%s (%s type found instead of 0x%x type))", VAR_2, FUNC_1 (VAR_0->x[VAR_0->top].tp), VAR_1);
    return 0;
  }
  return 1;
}
