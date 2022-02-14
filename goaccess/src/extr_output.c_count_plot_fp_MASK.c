
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* chart; } ;
struct TYPE_4__ {scalar_t__ plot; } ;
typedef TYPE_2__ GHTML ;



__attribute__((used)) static int
FUNC_0 (const GHTML * VAR_0)
{
  int VAR_1 = 0;
  for (VAR_1 = 0; VAR_0->chart[VAR_1].plot != 0; ++VAR_1);
  return VAR_1;
}
