
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* probs; scalar_t__ code; scalar_t__ range; scalar_t__* temp; scalar_t__ ip; int state; } ;
typedef TYPE_1__ CBcj2Dec ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(CBcj2Dec *VAR_2)
{
  unsigned VAR_3;

  VAR_2->state = VAR_0;
  VAR_2->ip = 0;
  VAR_2->temp[3] = 0;
  VAR_2->range = 0;
  VAR_2->code = 0;
  for (VAR_3 = 0; VAR_3 < sizeof(VAR_2->probs) / sizeof(VAR_2->probs[0]); VAR_3++)
    VAR_2->probs[VAR_3] = VAR_1 >> 1;
}
