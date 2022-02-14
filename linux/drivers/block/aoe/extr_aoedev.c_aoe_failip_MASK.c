
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct bio {struct bio* bi_next; int bi_status; } ;
struct TYPE_2__ {struct bio* nxbio; struct request* rq; int buf; } ;
struct aoedev {TYPE_1__ ip; } ;
struct aoe_req {int nr_bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct aoedev*,struct request*,int ) ;
 int FUNC_1 (struct aoedev*,int ) ;
 struct aoe_req* FUNC_2 (struct request*) ;

__attribute__((used)) static void
FUNC_3(struct aoedev *VAR_1)
{
 struct request *VAR_2;
 struct aoe_req *VAR_3;
 struct bio *VAR_4;

 FUNC_1(VAR_1, VAR_1->ip.buf);
 VAR_2 = VAR_1->ip.rq;
 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_2);
 while ((VAR_4 = VAR_1->ip.nxbio)) {
  VAR_4->bi_status = VAR_0;
  VAR_1->ip.nxbio = VAR_4->bi_next;
  VAR_3->nr_bios--;
 }

 if (!VAR_3->nr_bios)
  FUNC_0(VAR_1, VAR_2, 0);
}
