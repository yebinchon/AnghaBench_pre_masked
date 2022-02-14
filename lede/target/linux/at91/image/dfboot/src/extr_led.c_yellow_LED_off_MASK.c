
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PIO_SODR; } ;
typedef TYPE_1__* AT91PS_PIO ;


 TYPE_1__* VAR_0 ;

void FUNC_0(void)
{
 AT91PS_PIO VAR_1 = VAR_0;

 VAR_1->PIO_SODR = (1 << 1);
}
