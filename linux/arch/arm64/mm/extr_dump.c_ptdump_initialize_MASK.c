
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num; TYPE_1__* bits; int mask; } ;
struct TYPE_4__ {int mask; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  if (VAR_0[VAR_1].bits)
   for (VAR_2 = 0; VAR_2 < VAR_0[VAR_1].num; VAR_2++)
    VAR_0[VAR_1].mask |= VAR_0[VAR_1].bits[VAR_2].mask;
}
