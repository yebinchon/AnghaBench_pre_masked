
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int processed; int offset; int invalid; int piping; int resp_size; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (FILE * VAR_1)
{
  int VAR_2 = FUNC_1 ();
  if (!VAR_0)
    return;

  FUNC_0 (VAR_1, "==%d== VALUES AT CRASH POINT\n", VAR_2);
  FUNC_0 (VAR_1, "==%d==\n", VAR_2);
  FUNC_0 (VAR_1, "==%d== Line number: %u\n", VAR_2, VAR_0->processed);
  FUNC_0 (VAR_1, "==%d== Offset: %u\n", VAR_2, VAR_0->offset);
  FUNC_0 (VAR_1, "==%d== Invalid data: %u\n", VAR_2, VAR_0->invalid);
  FUNC_0 (VAR_1, "==%d== Piping: %d\n", VAR_2, VAR_0->piping);
  FUNC_0 (VAR_1, "==%d== Response size: %llu bytes\n", VAR_2, VAR_0->resp_size);
  FUNC_0 (VAR_1, "==%d==\n", VAR_2);
}
