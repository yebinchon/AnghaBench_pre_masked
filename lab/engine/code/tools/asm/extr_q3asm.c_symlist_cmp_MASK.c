
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
typedef TYPE_1__ symbol_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const symbol_t *VAR_2, *VAR_3;

  VAR_2 = *(const symbol_t **)VAR_0;
  VAR_3 = *(const symbol_t **)VAR_1;

  return ( VAR_2->value - VAR_3->value);
}
