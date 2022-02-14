
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pages_stored; int huge_pages; int compr_data_size; int writestall; int same_pages; } ;
struct zram {unsigned long limit_pages; TYPE_1__ stats; int mem_pool; int comp; } ;
struct zcomp_strm {void* buffer; } ;
struct page {int dummy; } ;
struct bio_vec {struct page* bv_page; } ;
struct bio {int dummy; } ;
typedef enum zram_pageflags { ____Placeholder_zram_pageflags } zram_pageflags ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_10 ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_5 (void*,unsigned long*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct zram*,unsigned long) ;
 int FUNC_9 (struct zcomp_strm*,void*,unsigned int*) ;
 struct zcomp_strm* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct zram*,int ) ;
 int FUNC_13 (struct zram*,int ,unsigned long) ;
 int FUNC_14 (struct zram*,int ,int) ;
 int FUNC_15 (struct zram*,int ,unsigned long) ;
 int FUNC_16 (struct zram*,int ,unsigned int) ;
 int FUNC_17 (struct zram*,int ) ;
 int FUNC_18 (struct zram*,int ) ;
 int FUNC_19 (int ,unsigned long) ;
 unsigned long FUNC_20 (int ) ;
 unsigned long FUNC_21 (int ,unsigned int,int) ;
 void* FUNC_22 (int ,unsigned long,int ) ;
 int FUNC_23 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct zram *VAR_11, struct bio_vec *VAR_12,
    u32 VAR_13, struct bio *VAR_14)
{
 int VAR_15 = 0;
 unsigned long VAR_16;
 unsigned long VAR_17 = 0;
 unsigned int VAR_18 = 0;
 void *VAR_19, *VAR_20, *VAR_21;
 struct zcomp_strm *VAR_22;
 struct page *VAR_23 = VAR_12->bv_page;
 unsigned long VAR_24 = 0;
 enum zram_pageflags VAR_25 = 0;

 VAR_21 = FUNC_2(VAR_23);
 if (FUNC_5(VAR_21, &VAR_24)) {
  FUNC_3(VAR_21);

  VAR_25 = VAR_4;
  FUNC_1(&VAR_11->stats.same_pages);
  goto out;
 }
 FUNC_3(VAR_21);

compress_again:
 VAR_22 = FUNC_10(VAR_11->comp);
 VAR_19 = FUNC_2(VAR_23);
 VAR_15 = FUNC_9(VAR_22, VAR_19, &VAR_18);
 FUNC_3(VAR_19);

 if (FUNC_7(VAR_15)) {
  FUNC_11(VAR_11->comp);
  FUNC_6("Compression failed! err=%d\n", VAR_15);
  FUNC_19(VAR_11->mem_pool, VAR_17);
  return VAR_15;
 }

 if (VAR_18 >= VAR_10)
  VAR_18 = VAR_2;
 if (!VAR_17)
  VAR_17 = FUNC_21(VAR_11->mem_pool, VAR_18,
    VAR_7 |
    VAR_9 |
    VAR_6 |
    VAR_8);
 if (!VAR_17) {
  FUNC_11(VAR_11->comp);
  FUNC_1(&VAR_11->stats.writestall);
  VAR_17 = FUNC_21(VAR_11->mem_pool, VAR_18,
    VAR_1 | VAR_6 |
    VAR_8);
  if (VAR_17)
   goto compress_again;
  return -VAR_0;
 }

 VAR_16 = FUNC_20(VAR_11->mem_pool);
 FUNC_8(VAR_11, VAR_16);

 if (VAR_11->limit_pages && VAR_16 > VAR_11->limit_pages) {
  FUNC_11(VAR_11->comp);
  FUNC_19(VAR_11->mem_pool, VAR_17);
  return -VAR_0;
 }

 VAR_20 = FUNC_22(VAR_11->mem_pool, VAR_17, VAR_5);

 VAR_19 = VAR_22->buffer;
 if (VAR_18 == VAR_2)
  VAR_19 = FUNC_2(VAR_23);
 FUNC_4(VAR_20, VAR_19, VAR_18);
 if (VAR_18 == VAR_2)
  FUNC_3(VAR_19);

 FUNC_11(VAR_11->comp);
 FUNC_23(VAR_11->mem_pool, VAR_17);
 FUNC_0(VAR_18, &VAR_11->stats.compr_data_size);
out:




 FUNC_17(VAR_11, VAR_13);
 FUNC_12(VAR_11, VAR_13);

 if (VAR_18 == VAR_2) {
  FUNC_14(VAR_11, VAR_13, VAR_3);
  FUNC_1(&VAR_11->stats.huge_pages);
 }

 if (VAR_25) {
  FUNC_14(VAR_11, VAR_13, VAR_25);
  FUNC_13(VAR_11, VAR_13, VAR_24);
 } else {
  FUNC_15(VAR_11, VAR_13, VAR_17);
  FUNC_16(VAR_11, VAR_13, VAR_18);
 }
 FUNC_18(VAR_11, VAR_13);


 FUNC_1(&VAR_11->stats.pages_stored);
 return VAR_15;
}
