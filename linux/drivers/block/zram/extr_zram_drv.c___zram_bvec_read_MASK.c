
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zram {int mem_pool; int comp; } ;
struct zcomp_strm {int dummy; } ;
struct page {int dummy; } ;
struct bio_vec {unsigned int bv_len; scalar_t__ bv_offset; struct page* bv_page; } ;
struct bio {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (struct zram*,struct bio_vec*,unsigned long,struct bio*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct zcomp_strm*,void*,unsigned int,void*) ;
 struct zcomp_strm* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,unsigned int,unsigned long) ;
 unsigned long FUNC_10 (struct zram*,int ) ;
 unsigned long FUNC_11 (struct zram*,int ) ;
 unsigned int FUNC_12 (struct zram*,int ) ;
 int FUNC_13 (struct zram*,int ) ;
 int FUNC_14 (struct zram*,int ) ;
 scalar_t__ FUNC_15 (struct zram*,int ,int ) ;
 void* FUNC_16 (int ,unsigned long,int ) ;
 int FUNC_17 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_18(struct zram *VAR_4, struct page *VAR_5, u32 VAR_6,
    struct bio *VAR_7, bool VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;
 void *VAR_12, *VAR_13;

 FUNC_13(VAR_4, VAR_6);
 if (FUNC_15(VAR_4, VAR_6, VAR_2)) {
  struct bio_vec VAR_14;

  FUNC_14(VAR_4, VAR_6);

  VAR_14.bv_page = VAR_5;
  VAR_14.bv_len = VAR_0;
  VAR_14.bv_offset = 0;
  return FUNC_4(VAR_4, &VAR_14,
    FUNC_10(VAR_4, VAR_6),
    VAR_7, VAR_8);
 }

 VAR_10 = FUNC_11(VAR_4, VAR_6);
 if (!VAR_10 || FUNC_15(VAR_4, VAR_6, VAR_1)) {
  unsigned long VAR_15;
  void *VAR_16;

  VAR_15 = VAR_10 ? FUNC_10(VAR_4, VAR_6) : 0;
  VAR_16 = FUNC_0(VAR_5);
  FUNC_9(VAR_16, VAR_0, VAR_15);
  FUNC_1(VAR_16);
  FUNC_14(VAR_4, VAR_6);
  return 0;
 }

 VAR_11 = FUNC_12(VAR_4, VAR_6);

 VAR_12 = FUNC_16(VAR_4->mem_pool, VAR_10, VAR_3);
 if (VAR_11 == VAR_0) {
  VAR_13 = FUNC_0(VAR_5);
  FUNC_2(VAR_13, VAR_12, VAR_0);
  FUNC_1(VAR_13);
  VAR_9 = 0;
 } else {
  struct zcomp_strm *VAR_17 = FUNC_7(VAR_4->comp);

  VAR_13 = FUNC_0(VAR_5);
  VAR_9 = FUNC_6(VAR_17, VAR_12, VAR_11, VAR_13);
  FUNC_1(VAR_13);
  FUNC_8(VAR_4->comp);
 }
 FUNC_17(VAR_4->mem_pool, VAR_10);
 FUNC_14(VAR_4, VAR_6);


 if (FUNC_5(VAR_9))
  FUNC_3("Decompression failed! err=%d, page=%u\n", VAR_9, VAR_6);

 return VAR_9;
}
