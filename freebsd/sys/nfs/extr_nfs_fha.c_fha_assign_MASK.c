
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_req {scalar_t__ rq_prog; int rq_vers; struct fha_hash_entry* rq_p1; int rq_p3; int rq_p2; } ;
struct TYPE_8__ {scalar_t__ enable; } ;
struct fha_callbacks {int dummy; } ;
struct fha_params {TYPE_1__ ctls; struct fha_callbacks callbacks; } ;
struct fha_info {int offset; int locktype; int fh; } ;
struct fha_hash_entry {int mtx; } ;
struct TYPE_9__ {int st_lock; int st_p3; int st_p2; } ;
typedef TYPE_2__ SVCTHREAD ;


 int FUNC_0 (TYPE_2__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct svc_req*,struct fha_info*,struct fha_callbacks*) ;
 int FUNC_2 (struct fha_hash_entry*,int ,int) ;
 TYPE_2__* FUNC_3 (struct fha_params*,struct fha_hash_entry*,struct fha_info*,TYPE_2__*) ;
 struct fha_hash_entry* FUNC_4 (struct fha_params*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

SVCTHREAD *
FUNC_7(SVCTHREAD *VAR_1, struct svc_req *VAR_2,
    struct fha_params *VAR_3)
{
 SVCTHREAD *VAR_4;
 struct fha_info VAR_5;
 struct fha_hash_entry *VAR_6;
 struct fha_callbacks *VAR_7;

 VAR_7 = &VAR_3->callbacks;


 if (VAR_3->ctls.enable == 0)
  goto thist;




 if (VAR_2->rq_prog != VAR_0)
  goto thist;

 if (VAR_2->rq_vers != 2 && VAR_2->rq_vers != 3)
  goto thist;

 FUNC_1(VAR_2, &VAR_5, VAR_7);





 VAR_6 = FUNC_4(VAR_3, VAR_5.fh);
 VAR_2->rq_p1 = VAR_6;
 VAR_2->rq_p2 = VAR_5.locktype;
 VAR_2->rq_p3 = VAR_5.offset;





 VAR_4 = FUNC_3(VAR_3, VAR_6, &VAR_5, VAR_1);
 FUNC_0(VAR_4, ("fha_assign: NULL thread!"));
 FUNC_2(VAR_6, VAR_5.locktype, 1);
 VAR_4->st_p2++;
 VAR_4->st_p3 = VAR_5.offset;





 FUNC_5(&VAR_4->st_lock);
 FUNC_6(VAR_6->mtx);

 return (VAR_4);
thist:
 VAR_2->rq_p1 = ((void*)0);
 FUNC_5(&VAR_1->st_lock);
 return (VAR_1);
}
