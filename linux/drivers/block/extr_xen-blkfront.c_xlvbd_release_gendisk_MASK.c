
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct blkfront_ring_info {int work; int callback; } ;
struct blkfront_info {unsigned int nr_rings; TYPE_1__* gd; int * rq; int tag_set; struct blkfront_ring_info* rinfo; } ;
struct TYPE_3__ {unsigned int first_minor; unsigned int minors; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct blkfront_info *VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3;

 if (VAR_0->rq == ((void*)0))
  return;


 FUNC_2(VAR_0->rq);

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_rings; VAR_3++) {
  struct blkfront_ring_info *VAR_4 = &VAR_0->rinfo[VAR_3];


  FUNC_5(&VAR_4->callback);


  FUNC_4(&VAR_4->work);
 }

 FUNC_3(VAR_0->gd);

 VAR_1 = VAR_0->gd->first_minor;
 VAR_2 = VAR_0->gd->minors;
 FUNC_7(VAR_1, VAR_2);

 FUNC_0(VAR_0->rq);
 FUNC_1(&VAR_0->tag_set);
 VAR_0->rq = ((void*)0);

 FUNC_6(VAR_0->gd);
 VAR_0->gd = ((void*)0);
}
