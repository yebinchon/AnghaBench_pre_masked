
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct buf {struct request* rq; } ;
struct TYPE_2__ {struct buf* buf; } ;
struct aoedev {int bufpool; TYPE_1__ ip; } ;
struct aoe_req {scalar_t__ nr_bios; } ;


 int FUNC_0 (struct aoedev*,struct request*,int ) ;
 struct aoe_req* FUNC_1 (struct request*) ;
 int FUNC_2 (struct buf*,int ) ;

__attribute__((used)) static void
FUNC_3(struct aoedev *VAR_0, struct buf *VAR_1)
{
 struct request *VAR_2 = VAR_1->rq;
 struct aoe_req *VAR_3 = FUNC_1(VAR_2);

 if (VAR_1 == VAR_0->ip.buf)
  VAR_0->ip.buf = ((void*)0);
 FUNC_2(VAR_1, VAR_0->bufpool);
 if (--VAR_3->nr_bios == 0)
  FUNC_0(VAR_0, VAR_2, 0);
}
