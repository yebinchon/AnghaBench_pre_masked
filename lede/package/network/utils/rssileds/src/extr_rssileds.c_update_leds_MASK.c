
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boffset; int bfactor; int minq; int maxq; struct TYPE_3__* next; int led; } ;
typedef TYPE_1__ rule_t ;


 int FUNC_0 (int ,unsigned char) ;

void FUNC_1(rule_t *VAR_0, int VAR_1)
{
 rule_t *VAR_2 = VAR_0;
 while (VAR_2)
 {
  int VAR_3;

  VAR_3 = ( VAR_1 + VAR_2->boffset ) * VAR_2->bfactor;
  if ( VAR_3 < 0 )
   VAR_3=0;
  if ( VAR_3 > 255 )
   VAR_3=255;

  if ( VAR_1 >= VAR_2->minq && VAR_1 <= VAR_2->maxq )
   FUNC_0(VAR_2->led, (unsigned char)VAR_3);
  else
   FUNC_0(VAR_2->led, 0);

  VAR_2 = VAR_2->next;
 }
}
