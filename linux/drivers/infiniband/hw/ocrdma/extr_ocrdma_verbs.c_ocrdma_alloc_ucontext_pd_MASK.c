
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocrdma_ucontext {TYPE_2__* cntxt_pd; } ;
struct ib_device {int dummy; } ;
struct ocrdma_dev {struct ib_device ibdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct TYPE_5__ {struct ib_device* device; } ;
struct TYPE_6__ {TYPE_1__ ibpd; struct ocrdma_ucontext* uctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_2__*,struct ocrdma_ucontext*,struct ib_udata*) ;
 TYPE_2__* FUNC_1 (struct ib_pd*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 struct ib_pd* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_2,
        struct ocrdma_ucontext *VAR_3,
        struct ib_udata *VAR_4)
{
 struct ib_device *VAR_5 = &VAR_2->ibdev;
 struct ib_pd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->device = VAR_5;
 VAR_3->cntxt_pd = FUNC_1(VAR_6);

 VAR_7 = FUNC_0(VAR_2, VAR_3->cntxt_pd, VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_3->cntxt_pd);
  goto err;
 }

 VAR_3->cntxt_pd->uctx = VAR_3;
 VAR_3->cntxt_pd->ibpd.device = &VAR_2->ibdev;
err:
 return VAR_7;
}
