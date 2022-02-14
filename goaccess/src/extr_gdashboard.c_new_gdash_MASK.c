
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ total_alloc; } ;
typedef TYPE_1__ GDash ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

GDash *
FUNC_2 (void)
{
  GDash *VAR_0 = FUNC_1 (sizeof (GDash));
  FUNC_0 (VAR_0, 0, sizeof *VAR_0);
  VAR_0->total_alloc = 0;

  return VAR_0;
}
