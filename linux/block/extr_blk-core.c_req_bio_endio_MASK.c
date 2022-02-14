
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int rq_flags; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {TYPE_1__ bi_iter; scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*,unsigned int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_3, struct bio *VAR_4,
     unsigned int VAR_5, blk_status_t VAR_6)
{
 if (VAR_6)
  VAR_4->bi_status = VAR_6;

 if (FUNC_3(VAR_3->rq_flags & VAR_2))
  FUNC_2(VAR_4, VAR_0);

 FUNC_0(VAR_4, VAR_5);


 if (VAR_4->bi_iter.bi_size == 0 && !(VAR_3->rq_flags & VAR_1))
  FUNC_1(VAR_4);
}
