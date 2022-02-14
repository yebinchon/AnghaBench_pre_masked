
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int limits; int * make_request_fn; int nr_requests; } ;
typedef int make_request_fn ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct request_queue *VAR_1, make_request_fn *VAR_2)
{



 VAR_1->nr_requests = VAR_0;

 VAR_1->make_request_fn = VAR_2;
 FUNC_0(VAR_1, 511);

 FUNC_1(&VAR_1->limits);
}
