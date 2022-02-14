
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_list {int page; } ;
struct dm_integrity_c {int log2_blocks_per_bitmap_bit; TYPE_1__* sb; } ;
typedef int sector_t ;
struct TYPE_2__ {int log2_sectors_per_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned long long,unsigned long long,int,int,int) ;
 int VAR_5 ;
 int FUNC_2 (unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long,unsigned long*) ;
 int FUNC_4 (unsigned long*) ;
 unsigned long* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct dm_integrity_c *VAR_6, struct page_list *VAR_7,
       sector_t VAR_8, sector_t VAR_9, int VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long *VAR_16;

 if (FUNC_7(((VAR_8 | VAR_9) & ((1 << VAR_6->sb->log2_sectors_per_block) - 1)) != 0)) {
  FUNC_1("invalid bitmap access (%llx,%llx,%d,%d,%d)",
   (unsigned long long)VAR_8,
   (unsigned long long)VAR_9,
   VAR_6->sb->log2_sectors_per_block,
   VAR_6->log2_blocks_per_bitmap_bit,
   VAR_10);
  FUNC_0();
 }

 if (FUNC_7(!VAR_9))
  return 1;

 VAR_11 = VAR_8 >> (VAR_6->sb->log2_sectors_per_block + VAR_6->log2_blocks_per_bitmap_bit);
 VAR_12 = (VAR_8 + VAR_9 - 1) >>
  (VAR_6->sb->log2_sectors_per_block + VAR_6->log2_blocks_per_bitmap_bit);

 VAR_14 = VAR_11 / (VAR_5 * 8);
 VAR_11 %= VAR_5 * 8;

 VAR_15 = VAR_12 / (VAR_5 * 8);
 VAR_12 %= VAR_5 * 8;

repeat:
 if (VAR_14 < VAR_15) {
  VAR_13 = VAR_5 * 8 - 1;
 } else {
  VAR_13 = VAR_12;
 }

 VAR_16 = FUNC_5(VAR_7[VAR_14].page);

 if (VAR_10 == VAR_3) {
  while (VAR_11 <= VAR_13) {
   if (!(VAR_11 % VAR_4) && VAR_13 >= VAR_11 + VAR_4 - 1) {
    do {
     if (VAR_16[VAR_11 / VAR_4] != -1)
      return 0;
     VAR_11 += VAR_4;
    } while (VAR_13 >= VAR_11 + VAR_4 - 1);
    continue;
   }
   if (!FUNC_6(VAR_11, VAR_16))
    return 0;
   VAR_11++;
  }
 } else if (VAR_10 == VAR_2) {
  while (VAR_11 <= VAR_13) {
   if (!(VAR_11 % VAR_4) && VAR_13 >= VAR_11 + VAR_4 - 1) {
    do {
     if (VAR_16[VAR_11 / VAR_4] != 0)
      return 0;
     VAR_11 += VAR_4;
    } while (VAR_13 >= VAR_11 + VAR_4 - 1);
    continue;
   }
   if (FUNC_6(VAR_11, VAR_16))
    return 0;
   VAR_11++;
  }
 } else if (VAR_10 == VAR_1) {
  while (VAR_11 <= VAR_13) {
   if (!(VAR_11 % VAR_4) && VAR_13 >= VAR_11 + VAR_4 - 1) {
    do {
     VAR_16[VAR_11 / VAR_4] = -1;
     VAR_11 += VAR_4;
    } while (VAR_13 >= VAR_11 + VAR_4 - 1);
    continue;
   }
   FUNC_3(VAR_11, VAR_16);
   VAR_11++;
  }
 } else if (VAR_10 == VAR_0) {
  if (!VAR_11 && VAR_13 == VAR_5 * 8 - 1)
   FUNC_4(VAR_16);
  else while (VAR_11 <= VAR_13) {
   if (!(VAR_11 % VAR_4) && VAR_13 >= VAR_11 + VAR_4 - 1) {
    do {
     VAR_16[VAR_11 / VAR_4] = 0;
     VAR_11 += VAR_4;
    } while (VAR_13 >= VAR_11 + VAR_4 - 1);
    continue;
   }
   FUNC_2(VAR_11, VAR_16);
   VAR_11++;
  }
 } else {
  FUNC_0();
 }

 if (FUNC_7(VAR_14 < VAR_15)) {
  VAR_11 = 0;
  VAR_14++;
  goto repeat;
 }

 return 1;
}
