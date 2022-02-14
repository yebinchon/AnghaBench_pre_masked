
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int rq_flags; } ;
struct bio {int bi_opf; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_2 (struct request_queue*,void*,unsigned int,int ,int) ;
 struct bio* FUNC_3 (struct request_queue*,void*,unsigned int,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct request_queue*,unsigned long,unsigned int) ;
 int FUNC_6 (struct request*,struct bio**) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct request_queue*) ;
 int FUNC_9 (struct request*) ;
 scalar_t__ FUNC_10 (struct request*) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct request_queue *VAR_4, struct request *VAR_5, void *VAR_6,
      unsigned int VAR_7, gfp_t VAR_8)
{
 int VAR_9 = FUNC_10(VAR_5) == VAR_1;
 unsigned long VAR_10 = (unsigned long) VAR_6;
 int VAR_11 = 0;
 struct bio *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_7 > (FUNC_8(VAR_4) << 9))
  return -VAR_0;
 if (!VAR_7 || !VAR_6)
  return -VAR_0;

 VAR_11 = !FUNC_5(VAR_4, VAR_10, VAR_7) || FUNC_7(VAR_6);
 if (VAR_11)
  VAR_12 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  VAR_12 = FUNC_3(VAR_4, VAR_6, VAR_7, VAR_8);

 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_12->bi_opf &= ~VAR_2;
 VAR_12->bi_opf |= FUNC_9(VAR_5);

 if (VAR_11)
  VAR_5->rq_flags |= VAR_3;

 VAR_13 = VAR_12;
 VAR_14 = FUNC_6(VAR_5, &VAR_12);
 if (FUNC_11(VAR_14)) {

  FUNC_4(VAR_13);
  return VAR_14;
 }

 return 0;
}
