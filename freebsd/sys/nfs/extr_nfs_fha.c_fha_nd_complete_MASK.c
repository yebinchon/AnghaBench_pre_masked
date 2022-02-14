
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct svc_req {int rq_p2; struct fha_hash_entry* rq_p1; } ;
struct mtx {int dummy; } ;
struct fha_hash_entry {scalar_t__ num_rw; scalar_t__ num_exclusive; struct mtx* mtx; } ;
struct TYPE_4__ {scalar_t__ st_p2; } ;
typedef TYPE_1__ SVCTHREAD ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct fha_hash_entry*,int ,int) ;
 int FUNC_2 (struct fha_hash_entry*) ;
 int FUNC_3 (struct fha_hash_entry*,TYPE_1__*) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct mtx*) ;

void
FUNC_6(SVCTHREAD *VAR_0, struct svc_req *VAR_1)
{
 struct fha_hash_entry *VAR_2 = VAR_1->rq_p1;
 struct mtx *VAR_3;





 if (!VAR_2)
  return;

 VAR_3 = VAR_2->mtx;
 FUNC_4(VAR_3);
 FUNC_1(VAR_2, VAR_1->rq_p2, -1);
 VAR_0->st_p2--;
 FUNC_0(VAR_0->st_p2 >= 0, ("Negative request count %d on %p",
     VAR_0->st_p2, VAR_0));
 if (VAR_0->st_p2 == 0) {
  FUNC_3(VAR_2, VAR_0);
  if (0 == VAR_2->num_rw + VAR_2->num_exclusive)
   FUNC_2(VAR_2);
 }
 FUNC_5(VAR_3);
}
