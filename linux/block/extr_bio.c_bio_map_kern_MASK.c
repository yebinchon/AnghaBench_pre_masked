
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct bio {int bi_end_io; void* bi_private; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int FUNC_1 (struct request_queue*,struct bio*,struct page*,unsigned int,int) ;
 struct bio* FUNC_2 (int ,int const) ;
 int VAR_4 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (void*,unsigned int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (unsigned long) ;
 struct page* FUNC_7 (void*) ;
 struct page* FUNC_8 (void*) ;

struct bio *FUNC_9(struct request_queue *VAR_5, void *VAR_6, unsigned int VAR_7,
    gfp_t VAR_8)
{
 unsigned long VAR_9 = (unsigned long)VAR_6;
 unsigned long VAR_10 = (VAR_9 + VAR_7 + VAR_3 - 1) >> VAR_2;
 unsigned long VAR_11 = VAR_9 >> VAR_2;
 const int VAR_12 = VAR_10 - VAR_11;
 bool VAR_13 = FUNC_5(VAR_6);
 struct page *VAR_14;
 int VAR_15, VAR_16;
 struct bio *VAR_17;

 VAR_17 = FUNC_2(VAR_8, VAR_12);
 if (!VAR_17)
  return FUNC_0(-VAR_1);

 if (VAR_13) {
  FUNC_4(VAR_6, VAR_7);
  VAR_17->bi_private = VAR_6;
 }

 VAR_15 = FUNC_6(VAR_9);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  unsigned int VAR_18 = VAR_3 - VAR_15;

  if (VAR_7 <= 0)
   break;

  if (VAR_18 > VAR_7)
   VAR_18 = VAR_7;

  if (!VAR_13)
   VAR_14 = FUNC_7(VAR_6);
  else
   VAR_14 = FUNC_8(VAR_6);
  if (FUNC_1(VAR_5, VAR_17, VAR_14, VAR_18,
        VAR_15) < VAR_18) {

   FUNC_3(VAR_17);
   return FUNC_0(-VAR_0);
  }

  VAR_6 += VAR_18;
  VAR_7 -= VAR_18;
  VAR_15 = 0;
 }

 VAR_17->bi_end_io = VAR_4;
 return VAR_17;
}
