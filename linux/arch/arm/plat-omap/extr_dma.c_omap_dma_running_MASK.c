
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dma_read ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int) ;

int FUNC_3(void)
{
 int VAR_4;

 if (FUNC_0())
  if (FUNC_1())
   return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_3->dma_read(VAR_0, VAR_4) & VAR_1)
   return 1;

 return 0;
}
