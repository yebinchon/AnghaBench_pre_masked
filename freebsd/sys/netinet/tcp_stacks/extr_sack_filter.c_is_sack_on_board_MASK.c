
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sackblk {int end; int start; } ;
struct sack_filter {int sf_cur; TYPE_1__* sf_blks; int sf_ack; } ;
typedef int int32_t ;
struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct sack_filter*,int) ;

__attribute__((used)) static int32_t
FUNC_5(struct sack_filter *VAR_1, struct sackblk *VAR_2)
{
 int32_t VAR_3, VAR_4;

 for (VAR_3 = VAR_1->sf_cur, VAR_4=0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_4(VAR_1, VAR_3)) {
   if (FUNC_3(VAR_2->start, VAR_1->sf_ack)) {

    VAR_2->start = VAR_1->sf_ack;
   }
   if (FUNC_3(VAR_2->end, VAR_1->sf_ack)) {

    VAR_2->end = VAR_1->sf_ack;
   }
   if (VAR_2->start == VAR_2->end) {
    return(1);
   }

   if (FUNC_2(VAR_1->sf_blks[VAR_3].start, VAR_2->start) &&
       FUNC_0(VAR_1->sf_blks[VAR_3].end, VAR_2->end)) {
    return(1);
   }

   if(FUNC_3(VAR_1->sf_blks[VAR_3].end, VAR_2->start)) {






    goto nxt_blk;
   }

   if (FUNC_1(VAR_1->sf_blks[VAR_3].start, VAR_2->end)) {






    goto nxt_blk;
   }
   if (FUNC_2(VAR_1->sf_blks[VAR_3].start, VAR_2->start)) {
    VAR_2->start = VAR_1->sf_blks[VAR_3].end;
    VAR_1->sf_blks[VAR_3].end = VAR_2->end;
    goto nxt_blk;
   }
   if (FUNC_0(VAR_1->sf_blks[VAR_3].end, VAR_2->end)) {
    VAR_2->end = VAR_1->sf_blks[VAR_3].start;
    VAR_1->sf_blks[VAR_3].start = VAR_2->start;
    goto nxt_blk;
   }
  }
 nxt_blk:
  VAR_3++;
  VAR_3 %= VAR_0;
 }

 if (VAR_2->start != VAR_2->end)
  return(0);
 else
  return(1);
}
