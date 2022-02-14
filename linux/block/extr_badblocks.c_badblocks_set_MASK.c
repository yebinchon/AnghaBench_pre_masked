
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {int shift; int count; int changed; int unacked_exist; int lock; int * page; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct badblocks*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct badblocks *VAR_2, sector_t VAR_3, int VAR_4,
   int VAR_5)
{
 u64 *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10;

 if (VAR_2->shift < 0)

  return 1;

 if (VAR_2->shift) {

  sector_t VAR_11 = VAR_3 + VAR_4;

  VAR_3 >>= VAR_2->shift;
  VAR_11 += (1<<VAR_2->shift) - 1;
  VAR_11 >>= VAR_2->shift;
  VAR_4 = VAR_11 - VAR_3;
 }

 FUNC_6(&VAR_2->lock, VAR_10);

 VAR_6 = VAR_2->page;
 VAR_7 = 0;
 VAR_8 = VAR_2->count;

 while (VAR_8 - VAR_7 > 1) {
  int VAR_12 = (VAR_7 + VAR_8) / 2;
  sector_t VAR_13 = FUNC_3(VAR_6[VAR_12]);

  if (VAR_13 <= VAR_3)
   VAR_7 = VAR_12;
  else
   VAR_8 = VAR_12;
 }
 if (VAR_8 > VAR_7 && FUNC_3(VAR_6[VAR_7]) > VAR_3)
  VAR_8 = VAR_7;

 if (VAR_8 > VAR_7) {



  sector_t VAR_14 = FUNC_3(VAR_6[VAR_7]);
  sector_t VAR_15 = VAR_14 + FUNC_1(VAR_6[VAR_7]);
  int VAR_16 = FUNC_0(VAR_6[VAR_7]);

  if (VAR_15 >= VAR_3) {

   if (VAR_3 == VAR_14 && VAR_3 + VAR_4 >= VAR_15)

    VAR_16 = VAR_5;
   else
    VAR_16 = VAR_16 && VAR_5;

   if (VAR_15 < VAR_3 + VAR_4)
    VAR_15 = VAR_3 + VAR_4;
   if (VAR_15 - VAR_14 <= VAR_0) {
    VAR_6[VAR_7] = FUNC_2(VAR_14, VAR_15-VAR_14, VAR_16);
    VAR_3 = VAR_15;
   } else {



    if (FUNC_1(VAR_6[VAR_7]) != VAR_0)
     VAR_6[VAR_7] = FUNC_2(VAR_14, VAR_0, VAR_16);
    VAR_3 = VAR_14 + VAR_0;
   }
   VAR_4 = VAR_15 - VAR_3;
  }
 }
 if (VAR_4 && VAR_8 < VAR_2->count) {



  sector_t VAR_17 = FUNC_3(VAR_6[VAR_8]);
  sector_t VAR_18 = VAR_17 + FUNC_1(VAR_6[VAR_8]);
  int VAR_19 = FUNC_0(VAR_6[VAR_8]);

  if (VAR_17 <= VAR_3 + VAR_4) {

   if (VAR_18 <= VAR_3 + VAR_4) {

    VAR_18 = VAR_3 + VAR_4;
    VAR_19 = VAR_5;
   } else
    VAR_19 = VAR_19 && VAR_5;

   VAR_17 = VAR_3;
   if (VAR_18 - VAR_17 <= VAR_0) {
    VAR_6[VAR_8] = FUNC_2(VAR_17, VAR_18-VAR_17, VAR_19);
    VAR_3 = VAR_18;
   } else {
    VAR_6[VAR_8] = FUNC_2(VAR_17, VAR_0, VAR_19);
    VAR_3 = VAR_17 + VAR_0;
   }
   VAR_4 = VAR_18 - VAR_3;
   VAR_7 = VAR_8;
   VAR_8++;
  }
 }
 if (VAR_4 == 0 && VAR_8 < VAR_2->count) {


  sector_t VAR_20 = FUNC_3(VAR_6[VAR_8]);
  int VAR_21 = FUNC_1(VAR_6[VAR_7]);
  int VAR_22 = FUNC_1(VAR_6[VAR_8]);
  int VAR_23 = VAR_21 + VAR_22 - (VAR_3 - VAR_20);

  if (VAR_3 >= VAR_20 && VAR_23 < VAR_0) {

   int VAR_24 = FUNC_0(VAR_6[VAR_7]) && FUNC_0(VAR_6[VAR_8]);

   VAR_6[VAR_7] = FUNC_2(FUNC_3(VAR_6[VAR_7]), VAR_23, VAR_24);
   FUNC_5(VAR_6 + VAR_8, VAR_6 + VAR_8 + 1,
    (VAR_2->count - VAR_8 - 1) * 8);
   VAR_2->count--;
  }
 }
 while (VAR_4) {



  if (VAR_2->count >= VAR_1) {

   VAR_9 = 1;
   break;
  } else {
   int VAR_25 = VAR_4;

   FUNC_5(VAR_6 + VAR_8 + 1, VAR_6 + VAR_8,
    (VAR_2->count - VAR_8) * 8);
   VAR_2->count++;

   if (VAR_25 > VAR_0)
    VAR_25 = VAR_0;
   VAR_6[VAR_8] = FUNC_2(VAR_3, VAR_25, VAR_5);
   VAR_4 -= VAR_25;
   VAR_3 += VAR_25;
  }
 }

 VAR_2->changed = 1;
 if (!VAR_5)
  VAR_2->unacked_exist = 1;
 else
  FUNC_4(VAR_2);
 FUNC_7(&VAR_2->lock, VAR_10);

 return VAR_9;
}
