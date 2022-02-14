
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bitmap_storage {int file_pages; scalar_t__ sb_page; int * file; } ;
struct bitmap_page {int count; struct bitmap_page* map; int hijacked; } ;
struct bitmap_counts {unsigned long chunks; int chunkshift; long pages; long missing_pages; int lock; struct bitmap_page* bp; } ;
struct bitmap {TYPE_3__* mddev; struct bitmap_counts counts; struct bitmap_storage storage; int cluster_slot; } ;
typedef int store ;
typedef int sector_t ;
typedef int bitmap_super_t ;
typedef int bitmap_counter_t ;
struct TYPE_6__ {long space; int chunksize; int external; scalar_t__ file; scalar_t__ offset; } ;
struct TYPE_8__ {TYPE_2__* pers; TYPE_1__ bitmap_info; } ;
struct TYPE_7__ {int (* quiesce ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 struct bitmap_page* FUNC_4 (long,int,int ) ;
 int FUNC_5 (struct bitmap_page*) ;
 int FUNC_6 (struct bitmap_counts*,unsigned long,int,int) ;
 int FUNC_7 (struct bitmap_counts*,int,int) ;
 int FUNC_8 (struct bitmap*,int) ;
 int FUNC_9 (struct bitmap_storage*) ;
 int* FUNC_10 (struct bitmap_counts*,int,int*,int) ;
 int FUNC_11 (struct bitmap_counts*,int) ;
 int FUNC_12 (struct bitmap_storage*,unsigned long,int,int ) ;
 int FUNC_13 (struct bitmap*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (struct bitmap_storage*,int ,int) ;
 int FUNC_17 (int,unsigned long) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (struct bitmap*,int,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_3__*,int) ;
 int FUNC_25 (TYPE_3__*,int) ;

int FUNC_26(struct bitmap *VAR_7, sector_t VAR_8,
    int VAR_9, int VAR_10)
{
 struct bitmap_storage VAR_11;
 struct bitmap_counts VAR_12;
 unsigned long VAR_13;
 sector_t VAR_14;
 sector_t VAR_15, VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 long VAR_19;
 struct bitmap_page *VAR_20;

 if (VAR_7->storage.file && !VAR_10) {
  FUNC_19("md: cannot resize file-based bitmap\n");
  return -VAR_2;
 }

 if (VAR_9 == 0) {



  long VAR_21;
  long VAR_22 = VAR_7->mddev->bitmap_info.space;

  if (VAR_22 == 0) {



   VAR_21 = FUNC_0(VAR_7->counts.chunks, 8);
   if (!VAR_7->mddev->bitmap_info.external)
    VAR_21 += sizeof(bitmap_super_t);
   VAR_22 = FUNC_0(VAR_21, 512);
   VAR_7->mddev->bitmap_info.space = VAR_22;
  }
  VAR_17 = VAR_7->counts.chunkshift;
  VAR_17--;
  do {

   VAR_17++;
   VAR_13 = FUNC_1(VAR_8, 1 << VAR_17);
   VAR_21 = FUNC_0(VAR_13, 8);
   if (!VAR_7->mddev->bitmap_info.external)
    VAR_21 += sizeof(bitmap_super_t);
  } while (VAR_21 > (VAR_22 << 9));
 } else
  VAR_17 = FUNC_3(~VAR_9) - VAR_0;

 VAR_13 = FUNC_1(VAR_8, 1 << VAR_17);
 FUNC_16(&VAR_11, 0, sizeof(VAR_11));
 if (VAR_7->mddev->bitmap_info.offset || VAR_7->mddev->bitmap_info.file)
  VAR_18 = FUNC_12(&VAR_11, VAR_13,
           !VAR_7->mddev->bitmap_info.external,
           FUNC_14(VAR_7->mddev)
           ? VAR_7->cluster_slot : 0);
 if (VAR_18) {
  FUNC_9(&VAR_11);
  goto err;
 }

 VAR_19 = FUNC_0(VAR_13, VAR_6);

 VAR_20 = FUNC_4(VAR_19, sizeof(*VAR_20), VAR_4);
 VAR_18 = -VAR_3;
 if (!VAR_20) {
  FUNC_9(&VAR_11);
  goto err;
 }

 if (!VAR_10)
  VAR_7->mddev->pers->quiesce(VAR_7->mddev, 1);

 VAR_11.file = VAR_7->storage.file;
 VAR_7->storage.file = ((void*)0);

 if (VAR_11.sb_page && VAR_7->storage.sb_page)
  FUNC_15(FUNC_18(VAR_11.sb_page),
         FUNC_18(VAR_7->storage.sb_page),
         sizeof(bitmap_super_t));
 FUNC_9(&VAR_7->storage);
 VAR_7->storage = VAR_11;

 VAR_12 = VAR_7->counts;
 VAR_7->counts.bp = VAR_20;
 VAR_7->counts.pages = VAR_19;
 VAR_7->counts.missing_pages = VAR_19;
 VAR_7->counts.chunkshift = VAR_17;
 VAR_7->counts.chunks = VAR_13;
 VAR_7->mddev->bitmap_info.chunksize = 1 << (VAR_17 +
           VAR_0);

 VAR_8 = FUNC_17(VAR_12.chunks << VAR_12.chunkshift,
       VAR_13 << VAR_17);

 FUNC_22(&VAR_7->counts.lock);

 if (FUNC_14(VAR_7->mddev)) {
  unsigned long VAR_23;
  for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++) {
   VAR_18 = FUNC_6(&VAR_7->counts, VAR_23, 1, 1);
   if (VAR_18) {
    unsigned long VAR_24;


    for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
     FUNC_5(VAR_20[VAR_24].map);
    }
    FUNC_5(VAR_20);


    VAR_7->counts.bp = VAR_12.bp;
    VAR_7->counts.pages = VAR_12.pages;
    VAR_7->counts.missing_pages = VAR_12.pages;
    VAR_7->counts.chunkshift = VAR_12.chunkshift;
    VAR_7->counts.chunks = VAR_12.chunks;
    VAR_7->mddev->bitmap_info.chunksize = 1 << (VAR_12.chunkshift +
              VAR_0);
    VAR_8 = VAR_12.chunks << VAR_12.chunkshift;
    FUNC_20("Could not pre-allocate in-memory bitmap for cluster raid\n");
    break;
   } else
    VAR_7->counts.bp[VAR_23].count += 1;
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; ) {
  bitmap_counter_t *VAR_25, *VAR_26;
  int VAR_27;

  VAR_25 = FUNC_10(&VAR_12, VAR_14, &VAR_15, 0);
  VAR_27 = VAR_25 && FUNC_2(*VAR_25);

  if (VAR_27) {
   VAR_26 = FUNC_10(&VAR_7->counts, VAR_14, &VAR_16, 1);
   if (*VAR_26 == 0) {

    sector_t VAR_28 = VAR_14 + VAR_16;
    sector_t VAR_29 = VAR_14 >> VAR_17;
    VAR_29 <<= VAR_17;
    while (VAR_29 < VAR_28) {
     FUNC_8(VAR_7, VAR_14);
     VAR_29 += 1 << VAR_17;
    }
    *VAR_26 = 2;
    FUNC_7(&VAR_7->counts, VAR_14, 1);
    FUNC_11(&VAR_7->counts, VAR_14);
   }
   *VAR_26 |= VAR_5;
   if (VAR_16 < VAR_15)
    VAR_15 = VAR_16;
  }
  VAR_14 += VAR_15;
 }

 if (VAR_7->counts.bp != VAR_12.bp) {
  unsigned long VAR_30;
  for (VAR_30 = 0; VAR_30 < VAR_12.pages; VAR_30++)
   if (!VAR_12.bp[VAR_30].hijacked)
    FUNC_5(VAR_12.bp[VAR_30].map);
  FUNC_5(VAR_12.bp);
 }

 if (!VAR_10) {
  int VAR_31;
  while (VAR_14 < (VAR_13 << VAR_17)) {
   bitmap_counter_t *VAR_32;
   VAR_32 = FUNC_10(&VAR_7->counts, VAR_14, &VAR_16, 1);
   if (VAR_32) {



    if (*VAR_32 == 0) {
     *VAR_32 = VAR_5 | 2;
     FUNC_7(&VAR_7->counts, VAR_14, 1);
     FUNC_11(&VAR_7->counts, VAR_14);
    }
   }
   VAR_14 += VAR_16;
  }
  for (VAR_31 = 0; VAR_31 < VAR_7->storage.file_pages; VAR_31++)
   FUNC_21(VAR_7, VAR_31, VAR_1);
 }
 FUNC_23(&VAR_7->counts.lock);

 if (!VAR_10) {
  FUNC_13(VAR_7);
  VAR_7->mddev->pers->quiesce(VAR_7->mddev, 0);
 }
 VAR_18 = 0;
err:
 return VAR_18;
}
