
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int start_address; } ;
struct TYPE_6__ {unsigned int num; TYPE_1__* bits; TYPE_1__* nx_bit; TYPE_1__* ro_bit; int mask; } ;
struct TYPE_5__ {scalar_t__ nx_bit; scalar_t__ ro_bit; int mask; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  if (VAR_2[VAR_3].bits)
   for (VAR_4 = 0; VAR_4 < VAR_2[VAR_3].num; VAR_4++) {
    VAR_2[VAR_3].mask |= VAR_2[VAR_3].bits[VAR_4].mask;
    if (VAR_2[VAR_3].bits[VAR_4].ro_bit)
     VAR_2[VAR_3].ro_bit = &VAR_2[VAR_3].bits[VAR_4];
    if (VAR_2[VAR_3].bits[VAR_4].nx_bit)
     VAR_2[VAR_3].nx_bit = &VAR_2[VAR_3].bits[VAR_4];
   }

 VAR_1[2].start_address = VAR_0;
}
