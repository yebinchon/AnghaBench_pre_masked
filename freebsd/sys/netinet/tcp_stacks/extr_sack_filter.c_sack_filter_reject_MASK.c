
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sackblk {scalar_t__ end; scalar_t__ start; } ;
struct sack_filter {int sf_used; void* sf_bits; TYPE_1__* sf_blks; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 void* FUNC_2 (struct sack_filter*,int) ;
 scalar_t__ FUNC_3 (struct sack_filter*,int) ;

void
FUNC_4(struct sack_filter *VAR_1, struct sackblk *VAR_2)
{
 int VAR_3;

 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  if (FUNC_3(VAR_1, VAR_3) == 0)
   continue;




  if (VAR_1->sf_blks[VAR_3].end == VAR_2->end) {

   if (FUNC_0(VAR_2->start, VAR_1->sf_blks[VAR_3].start))


    VAR_1->sf_blks[VAR_3].end = VAR_2->start;
   else {





    VAR_1->sf_bits = FUNC_2(VAR_1, VAR_3);
    VAR_1->sf_used--;
   }
   continue;
  }
  if (VAR_1->sf_blks[VAR_3].start == VAR_2->start) {
   if (FUNC_1(VAR_2->end, VAR_1->sf_blks[VAR_3].end)) {


    VAR_1->sf_blks[VAR_3].start = VAR_2->end;
   } else {





    VAR_1->sf_bits = FUNC_2(VAR_1, VAR_3);
    VAR_1->sf_used--;
   }
   continue;
  }
 }
}
