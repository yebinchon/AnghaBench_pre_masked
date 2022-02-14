
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int * end_io; struct gendisk* rq_disk; } ;
struct gendisk {int dummy; } ;
typedef int rq_end_io_fn ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*,int,int,int) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 () ;

void FUNC_4(struct request_queue *VAR_0, struct gendisk *VAR_1,
      struct request *VAR_2, int VAR_3,
      rq_end_io_fn *VAR_4)
{
 FUNC_0(FUNC_3());
 FUNC_0(!FUNC_2(VAR_2));

 VAR_2->rq_disk = VAR_1;
 VAR_2->end_io = VAR_4;





 FUNC_1(VAR_2, VAR_3, 1, 0);
}
