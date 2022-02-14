
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_map_data {int offset; int page_order; int nr_entries; scalar_t__ null_mapped; scalar_t__ from_user; struct page** pages; } ;
struct request_queue {int bounce_gfp; } ;
struct page {int dummy; } ;
struct iov_iter {unsigned int count; } ;
struct bio_map_data {int is_our_pages; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {struct bio_map_data* bi_private; TYPE_1__ bi_iter; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_2 ;
 struct bio* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int) ;
 unsigned int FUNC_4 (struct request_queue*,struct bio*,struct page*,unsigned int,unsigned int) ;
 struct bio_map_data* FUNC_5 (struct iov_iter*,int) ;
 int FUNC_6 (struct bio*,struct iov_iter*) ;
 int FUNC_7 (struct bio*) ;
 struct bio* FUNC_8 (int,int) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct bio*,int ) ;
 int FUNC_11 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct iov_iter*) ;
 int FUNC_13 (struct bio_map_data*) ;
 unsigned int FUNC_14 (int) ;
 int FUNC_15 (struct bio*) ;

struct bio *FUNC_16(struct request_queue *VAR_5,
         struct rq_map_data *VAR_6,
         struct iov_iter *VAR_7,
         gfp_t VAR_8)
{
 struct bio_map_data *VAR_9;
 struct page *VAR_10;
 struct bio *VAR_11;
 int VAR_12 = 0, VAR_13;
 int VAR_14;
 unsigned int VAR_15 = VAR_7->count;
 unsigned int VAR_16 = VAR_6 ? FUNC_14(VAR_6->offset) : 0;

 VAR_9 = FUNC_5(VAR_7, VAR_8);
 if (!VAR_9)
  return FUNC_1(-VAR_2);






 VAR_9->is_our_pages = VAR_6 ? 0 : 1;

 VAR_14 = FUNC_0(VAR_16 + VAR_15, VAR_3);
 if (VAR_14 > VAR_0)
  VAR_14 = VAR_0;

 VAR_13 = -VAR_2;
 VAR_11 = FUNC_8(VAR_8, VAR_14);
 if (!VAR_11)
  goto out_bmd;

 VAR_13 = 0;

 if (VAR_6) {
  VAR_14 = 1 << VAR_6->page_order;
  VAR_12 = VAR_6->offset / VAR_3;
 }
 while (VAR_15) {
  unsigned int VAR_17 = VAR_3;

  VAR_17 -= VAR_16;

  if (VAR_17 > VAR_15)
   VAR_17 = VAR_15;

  if (VAR_6) {
   if (VAR_12 == VAR_6->nr_entries * VAR_14) {
    VAR_13 = -VAR_2;
    break;
   }

   VAR_10 = VAR_6->pages[VAR_12 / VAR_14];
   VAR_10 += (VAR_12 % VAR_14);

   VAR_12++;
  } else {
   VAR_10 = FUNC_3(VAR_5->bounce_gfp | VAR_8);
   if (!VAR_10) {
    VAR_13 = -VAR_2;
    break;
   }
  }

  if (FUNC_4(VAR_5, VAR_11, VAR_10, VAR_17, VAR_16) < VAR_17) {
   if (!VAR_6)
    FUNC_2(VAR_10);
   break;
  }

  VAR_15 -= VAR_17;
  VAR_16 = 0;
 }

 if (VAR_13)
  goto cleanup;

 if (VAR_6)
  VAR_6->offset += VAR_11->bi_iter.bi_size;




 if ((FUNC_12(VAR_7) == VAR_4 && (!VAR_6 || !VAR_6->null_mapped)) ||
     (VAR_6 && VAR_6->from_user)) {
  VAR_13 = FUNC_6(VAR_11, VAR_7);
  if (VAR_13)
   goto cleanup;
 } else {
  if (VAR_9->is_our_pages)
   FUNC_15(VAR_11);
  FUNC_11(VAR_7, VAR_11->bi_iter.bi_size);
 }

 VAR_11->bi_private = VAR_9;
 if (VAR_6 && VAR_6->null_mapped)
  FUNC_10(VAR_11, VAR_1);
 return VAR_11;
cleanup:
 if (!VAR_6)
  FUNC_7(VAR_11);
 FUNC_9(VAR_11);
out_bmd:
 FUNC_13(VAR_9);
 return FUNC_1(VAR_13);
}
