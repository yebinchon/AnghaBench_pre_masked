
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int bounce_gfp; } ;
struct page {int dummy; } ;
struct bio {int bi_end_io; void* bi_private; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct page* FUNC_1 (int) ;
 unsigned int FUNC_2 (struct request_queue*,struct bio*,struct page*,unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bio*) ;
 struct bio* FUNC_4 (int,int) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ,void*,unsigned int) ;
 int FUNC_7 (struct page*) ;

struct bio *FUNC_8(struct request_queue *VAR_6, void *VAR_7, unsigned int VAR_8,
     gfp_t VAR_9, int VAR_10)
{
 unsigned long VAR_11 = (unsigned long)VAR_7;
 unsigned long VAR_12 = (VAR_11 + VAR_8 + VAR_3 - 1) >> VAR_2;
 unsigned long VAR_13 = VAR_11 >> VAR_2;
 struct bio *VAR_14;
 void *VAR_15 = VAR_7;
 int VAR_16 = 0;




 if (VAR_12 < VAR_13)
  return FUNC_0(-VAR_0);

 VAR_16 = VAR_12 - VAR_13;
 VAR_14 = FUNC_4(VAR_9, VAR_16);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 while (VAR_8) {
  struct page *VAR_17;
  unsigned int VAR_18 = VAR_3;

  if (VAR_18 > VAR_8)
   VAR_18 = VAR_8;

  VAR_17 = FUNC_1(VAR_6->bounce_gfp | VAR_9);
  if (!VAR_17)
   goto cleanup;

  if (!VAR_10)
   FUNC_6(FUNC_7(VAR_17), VAR_15, VAR_18);

  if (FUNC_2(VAR_6, VAR_14, VAR_17, VAR_18, 0) < VAR_18)
   break;

  VAR_8 -= VAR_18;
  VAR_15 += VAR_18;
 }

 if (VAR_10) {
  VAR_14->bi_end_io = VAR_5;
  VAR_14->bi_private = VAR_7;
 } else {
  VAR_14->bi_end_io = VAR_4;
 }

 return VAR_14;

cleanup:
 FUNC_3(VAR_14);
 FUNC_5(VAR_14);
 return FUNC_0(-VAR_1);
}
