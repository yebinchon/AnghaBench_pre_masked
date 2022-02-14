
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int shift; int count; int changed; int lock; int * page; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct badblocks*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct badblocks *VAR_2, sector_t VAR_3, int VAR_4)
{
 u64 *VAR_5;
 int VAR_6, VAR_7;
 sector_t VAR_8 = VAR_3 + VAR_4;
 int VAR_9 = 0;

 if (VAR_2->shift > 0) {






  VAR_3 += (1<<VAR_2->shift) - 1;
  VAR_3 >>= VAR_2->shift;
  VAR_8 >>= VAR_2->shift;
  VAR_4 = VAR_8 - VAR_3;
 }

 FUNC_6(&VAR_2->lock);

 VAR_5 = VAR_2->page;
 VAR_6 = 0;
 VAR_7 = VAR_2->count;

 while (VAR_7 - VAR_6 > 1) {
  int VAR_10 = (VAR_6 + VAR_7) / 2;
  sector_t VAR_11 = FUNC_3(VAR_5[VAR_10]);

  if (VAR_11 < VAR_8)
   VAR_6 = VAR_10;
  else
   VAR_7 = VAR_10;
 }
 if (VAR_7 > VAR_6) {




  if ((FUNC_3(VAR_5[VAR_6]) + FUNC_1(VAR_5[VAR_6]) > VAR_8) &&
      (FUNC_3(VAR_5[VAR_6]) < VAR_8)) {

   int VAR_12 = FUNC_0(VAR_5[VAR_6]);
   sector_t VAR_13 = FUNC_3(VAR_5[VAR_6]);
   sector_t VAR_14 = VAR_13 + FUNC_1(VAR_5[VAR_6]);

   if (VAR_13 < VAR_3) {

    if (VAR_2->count >= VAR_1) {
     VAR_9 = -VAR_0;
     goto out;
    }
    FUNC_5(VAR_5+VAR_6+1, VAR_5+VAR_6, (VAR_2->count - VAR_6) * 8);
    VAR_2->count++;
    VAR_5[VAR_6] = FUNC_2(VAR_13, VAR_3-VAR_13, VAR_12);
    VAR_6++;
   }
   VAR_5[VAR_6] = FUNC_2(VAR_8, VAR_14 - VAR_8, VAR_12);

   VAR_7 = VAR_6;
   VAR_6--;
  }
  while (VAR_6 >= 0 &&
         (FUNC_3(VAR_5[VAR_6]) + FUNC_1(VAR_5[VAR_6]) > VAR_3) &&
         (FUNC_3(VAR_5[VAR_6]) < VAR_8)) {

   if (FUNC_3(VAR_5[VAR_6]) < VAR_3) {

    int VAR_15 = FUNC_0(VAR_5[VAR_6]);
    sector_t VAR_16 = FUNC_3(VAR_5[VAR_6]);

    VAR_5[VAR_6] = FUNC_2(VAR_16, VAR_3 - VAR_16, VAR_15);

    break;
   }
   VAR_6--;
  }



  if (VAR_7 - VAR_6 > 1) {
   FUNC_5(VAR_5+VAR_6+1, VAR_5+VAR_7, (VAR_2->count - VAR_7) * 8);
   VAR_2->count -= (VAR_7 - VAR_6 - 1);
  }
 }

 FUNC_4(VAR_2);
 VAR_2->changed = 1;
out:
 FUNC_7(&VAR_2->lock);
 return VAR_9;
}
