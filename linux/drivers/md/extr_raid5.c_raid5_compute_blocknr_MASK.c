
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int disks; int sector; int pd_idx; int qd_idx; struct r5conf* raid_conf; } ;
struct r5conf {int max_degraded; int prev_chunk_sectors; int chunk_sectors; int prev_algo; int algorithm; int level; int mddev; } ;
typedef int sector_t ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct r5conf*,int,int,int*,struct stripe_head*) ;
 int FUNC_4 (int,int) ;

sector_t FUNC_5(struct stripe_head *VAR_0, int VAR_1, int VAR_2)
{
 struct r5conf *VAR_3 = VAR_0->raid_conf;
 int VAR_4 = VAR_0->disks;
 int VAR_5 = VAR_4 - VAR_3->max_degraded;
 sector_t VAR_6 = VAR_0->sector, VAR_7;
 int VAR_8 = VAR_2 ? VAR_3->prev_chunk_sectors
      : VAR_3->chunk_sectors;
 int VAR_9 = VAR_2 ? VAR_3->prev_algo
     : VAR_3->algorithm;
 sector_t VAR_10;
 int VAR_11;
 sector_t VAR_12;
 int VAR_13, VAR_14 = VAR_1;
 sector_t VAR_15;
 struct stripe_head VAR_16;

 VAR_11 = FUNC_4(VAR_6, VAR_8);
 VAR_10 = VAR_6;

 if (VAR_1 == VAR_0->pd_idx)
  return 0;
 switch(VAR_3->level) {
 case 4: break;
 case 5:
  switch (VAR_9) {
  case 141:
  case 134:
   if (VAR_1 > VAR_0->pd_idx)
    VAR_1--;
   break;
  case 139:
  case 132:
   if (VAR_1 < VAR_0->pd_idx)
    VAR_1 += VAR_4;
   VAR_1 -= (VAR_0->pd_idx + 1);
   break;
  case 137:
   VAR_1 -= 1;
   break;
  case 135:
   break;
  default:
   FUNC_0();
  }
  break;
 case 6:
  if (VAR_1 == VAR_0->qd_idx)
   return 0;
  switch (VAR_9) {
  case 141:
  case 134:
  case 128:
  case 129:
   if (VAR_0->pd_idx == VAR_4-1)
    VAR_1--;
   else if (VAR_1 > VAR_0->pd_idx)
    VAR_1 -= 2;
   break;
  case 139:
  case 132:
   if (VAR_0->pd_idx == VAR_4-1)
    VAR_1--;
   else {

    if (VAR_1 < VAR_0->pd_idx)
     VAR_1 += VAR_4;
    VAR_1 -= (VAR_0->pd_idx + 2);
   }
   break;
  case 137:
   VAR_1 -= 2;
   break;
  case 135:
   break;
  case 130:

   if (VAR_0->pd_idx == 0)
    VAR_1--;
   else {

    if (VAR_1 < VAR_0->pd_idx)
     VAR_1 += VAR_4;
    VAR_1 -= (VAR_0->pd_idx + 1);
   }
   break;
  case 140:
  case 133:
   if (VAR_1 > VAR_0->pd_idx)
    VAR_1--;
   break;
  case 138:
  case 131:
   if (VAR_1 < VAR_0->pd_idx)
    VAR_1 += VAR_5 + 1;
   VAR_1 -= (VAR_0->pd_idx + 1);
   break;
  case 136:
   VAR_1 -= 1;
   break;
  default:
   FUNC_0();
  }
  break;
 }

 VAR_12 = VAR_10 * VAR_5 + VAR_1;
 VAR_15 = VAR_12 * VAR_8 + VAR_11;

 VAR_7 = FUNC_3(VAR_3, VAR_15,
         VAR_2, &VAR_13, &VAR_16);
 if (VAR_7 != VAR_0->sector || VAR_13 != VAR_14 || VAR_16 != VAR_0->pd_idx
  || VAR_16 != VAR_0->qd_idx) {
  FUNC_2("md/raid:%s: compute_blocknr: map not correct\n",
   FUNC_1(VAR_3->mddev));
  return 0;
 }
 return VAR_15;
}
