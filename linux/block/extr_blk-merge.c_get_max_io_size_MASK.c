
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_2__ {unsigned int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct request_queue*,unsigned int) ;
 unsigned int FUNC_1 (struct request_queue*) ;
 unsigned int FUNC_2 (struct request_queue*) ;

__attribute__((used)) static inline unsigned FUNC_3(struct request_queue *VAR_1,
           struct bio *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1, VAR_2->bi_iter.bi_sector);
 unsigned VAR_4 = VAR_3;
 unsigned VAR_5 = FUNC_2(VAR_1) >> VAR_0;
 unsigned VAR_6 = FUNC_1(VAR_1) >> VAR_0;
 unsigned VAR_7 = VAR_2->bi_iter.bi_sector & (VAR_5 - 1);

 VAR_4 += VAR_7;
 VAR_4 &= ~(VAR_5 - 1);
 if (VAR_4 > VAR_7)
  return VAR_4 - VAR_7;

 return VAR_3 & (VAR_6 - 1);
}
