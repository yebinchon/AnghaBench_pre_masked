
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_map_data {int dummy; } ;
struct request_queue {int dummy; } ;
struct request {struct request_queue* q; } ;
struct iov_iter {int dummy; } ;
struct bio {int bi_opf; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (struct request_queue*,struct rq_map_data*,struct iov_iter*,int ) ;
 int FUNC_4 (struct bio*) ;
 struct bio* FUNC_5 (struct request_queue*,struct iov_iter*,int ) ;
 int FUNC_6 (struct request*,struct bio**) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static int FUNC_8(struct request *VAR_1,
  struct rq_map_data *VAR_2, struct iov_iter *VAR_3,
  gfp_t VAR_4, bool VAR_5)
{
 struct request_queue *VAR_6 = VAR_1->q;
 struct bio *VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_5)
  VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4);
 else
  VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->bi_opf &= ~VAR_0;
 VAR_7->bi_opf |= FUNC_7(VAR_1);

 VAR_8 = VAR_7;





 VAR_9 = FUNC_6(VAR_1, &VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return VAR_9;
 }
 FUNC_4(VAR_7);

 return 0;
}
