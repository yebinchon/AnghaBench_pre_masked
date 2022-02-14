
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct page {int dummy; } ;
struct iov_iter {int dummy; } ;
struct bio {int dummy; } ;
typedef int ssize_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bio* FUNC_1 (int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct request_queue*,struct bio*,struct page*,unsigned int,size_t,int*) ;
 int FUNC_3 (struct bio*) ;
 struct bio* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int) ;
 int FUNC_7 (struct bio*,int ) ;
 int FUNC_8 (struct iov_iter*,size_t) ;
 scalar_t__ FUNC_9 (struct iov_iter*) ;
 int FUNC_10 (struct iov_iter*,struct page***,int ,size_t*) ;
 int FUNC_11 (struct iov_iter*,int ) ;
 int FUNC_12 (struct page**) ;
 int FUNC_13 (struct page*) ;
 size_t FUNC_14 (struct request_queue*) ;
 scalar_t__ FUNC_15 (size_t) ;

struct bio *FUNC_16(struct request_queue *VAR_7,
        struct iov_iter *VAR_8,
        gfp_t VAR_9)
{
 int VAR_10;
 struct bio *VAR_11;
 int VAR_12;

 if (!FUNC_9(VAR_8))
  return FUNC_1(-VAR_3);

 VAR_11 = FUNC_4(VAR_9, FUNC_11(VAR_8, VAR_0));
 if (!VAR_11)
  return FUNC_1(-VAR_4);

 while (FUNC_9(VAR_8)) {
  struct page **VAR_13;
  ssize_t VAR_14;
  size_t VAR_15, VAR_16 = 0;
  int VAR_17;

  VAR_14 = FUNC_10(VAR_8, &VAR_13, VAR_5, &VAR_15);
  if (FUNC_15(VAR_14 <= 0)) {
   VAR_12 = VAR_14 ? VAR_14 : -VAR_2;
   goto out_unmap;
  }

  VAR_17 = FUNC_0(VAR_15 + VAR_14, VAR_6);

  if (FUNC_15(VAR_15 & FUNC_14(VAR_7))) {
   VAR_12 = -VAR_3;
   VAR_10 = 0;
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_17; VAR_10++) {
    struct page *VAR_18 = VAR_13[VAR_10];
    unsigned int VAR_19 = VAR_6 - VAR_15;
    bool VAR_20 = 0;

    if (VAR_19 > VAR_14)
     VAR_19 = VAR_14;

    if (!FUNC_2(VAR_7, VAR_11, VAR_18, VAR_19, VAR_15,
      &VAR_20)) {
     if (VAR_20)
      FUNC_13(VAR_18);
     break;
    }

    VAR_16 += VAR_19;
    VAR_14 -= VAR_19;
    VAR_15 = 0;
   }
   FUNC_8(VAR_8, VAR_16);
  }



  while (VAR_10 < VAR_17)
   FUNC_13(VAR_13[VAR_10++]);
  FUNC_12(VAR_13);

  if (VAR_14)
   break;
 }

 FUNC_7(VAR_11, VAR_1);







 FUNC_3(VAR_11);
 return VAR_11;

 out_unmap:
 FUNC_6(VAR_11, 0);
 FUNC_5(VAR_11);
 return FUNC_1(VAR_12);
}
