
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fp; scalar_t__ pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;

void
FUNC_2(void)
{

 while (VAR_0 != ((void*)0))
  if (VAR_0->pipe)
   (void)FUNC_1(VAR_0->fp);
  else
   (void)FUNC_0(VAR_0->fp);
}
