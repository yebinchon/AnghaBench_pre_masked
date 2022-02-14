
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct buf {int iter; struct bio* bio; struct request* rq; } ;
struct bio {int bi_iter; } ;


 int FUNC_0 (struct buf*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_0, struct request *VAR_1, struct bio *VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->rq = VAR_1;
 VAR_0->bio = VAR_2;
 VAR_0->iter = VAR_2->bi_iter;
}
