
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_map_data {int dummy; } ;
struct request_queue {unsigned long dma_pad_mask; } ;
struct request {struct bio* bio; int rq_flags; } ;
struct iov_iter {int dummy; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request*,struct rq_map_data*,struct iov_iter*,int ,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 unsigned long FUNC_3 (struct iov_iter const*) ;
 scalar_t__ FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (struct iov_iter const*) ;
 int FUNC_6 (struct iov_iter const*) ;
 unsigned long FUNC_7 (struct request_queue*) ;
 int FUNC_8 (struct request_queue*) ;

int FUNC_9(struct request_queue *VAR_3, struct request *VAR_4,
   struct rq_map_data *VAR_5,
   const struct iov_iter *VAR_6, gfp_t VAR_7)
{
 bool VAR_8 = 0;
 unsigned long VAR_9 = VAR_3->dma_pad_mask | FUNC_7(VAR_3);
 struct bio *VAR_10 = ((void*)0);
 struct iov_iter VAR_11;
 int VAR_12 = -VAR_1;

 if (!FUNC_6(VAR_6))
  goto fail;

 if (VAR_5)
  VAR_8 = 1;
 else if (FUNC_3(VAR_6) & VAR_9)
  VAR_8 = 1;
 else if (FUNC_8(VAR_3))
  VAR_8 = FUNC_8(VAR_3) & FUNC_5(VAR_6);

 VAR_11 = *VAR_6;
 do {
  VAR_12 =FUNC_0(VAR_4, VAR_5, &VAR_11, VAR_7, VAR_8);
  if (VAR_12)
   goto unmap_rq;
  if (!VAR_10)
   VAR_10 = VAR_4->bio;
 } while (FUNC_4(&VAR_11));

 if (!FUNC_2(VAR_10, VAR_0))
  VAR_4->rq_flags |= VAR_2;
 return 0;

unmap_rq:
 FUNC_1(VAR_10);
fail:
 VAR_4->bio = ((void*)0);
 return VAR_12;
}
