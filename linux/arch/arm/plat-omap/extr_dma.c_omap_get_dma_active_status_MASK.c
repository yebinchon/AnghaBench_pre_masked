
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dma_read ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(int VAR_3)
{
 return (VAR_2->dma_read(VAR_0, VAR_3) & VAR_1) != 0;
}
