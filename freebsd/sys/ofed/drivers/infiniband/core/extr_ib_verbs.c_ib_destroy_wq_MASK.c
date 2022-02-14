
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_wq {TYPE_1__* device; int usecnt; struct ib_pd* pd; struct ib_cq* cq; } ;
struct ib_pd {int usecnt; } ;
struct ib_cq {int usecnt; } ;
struct TYPE_2__ {int (* destroy_wq ) (struct ib_wq*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ib_wq*) ;

int FUNC_3(struct ib_wq *VAR_1)
{
 int VAR_2;
 struct ib_cq *VAR_3 = VAR_1->cq;
 struct ib_pd *VAR_4 = VAR_1->pd;

 if (FUNC_1(&VAR_1->usecnt))
  return -VAR_0;

 VAR_2 = VAR_1->device->destroy_wq(VAR_1);
 if (!VAR_2) {
  FUNC_0(&VAR_4->usecnt);
  FUNC_0(&VAR_3->usecnt);
 }
 return VAR_2;
}
