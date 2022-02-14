
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_pd {int device; } ;
struct efa_pd {int pdn; } ;
struct efa_ibv_alloc_pd_resp {int pdn; } ;
struct TYPE_3__ {int alloc_pd_err; } ;
struct TYPE_4__ {TYPE_1__ sw_stats; } ;
struct efa_dev {TYPE_2__ stats; int ibdev; int edev; } ;
struct efa_com_alloc_pd_result {int pdn; } ;
typedef int resp ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct efa_com_alloc_pd_result*) ;
 int FUNC_2 (struct efa_dev*,int ) ;
 int FUNC_3 (struct ib_udata*,struct efa_ibv_alloc_pd_resp*,int ) ;
 int FUNC_4 (struct ib_udata*,int ,scalar_t__) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int,scalar_t__) ;
 struct efa_dev* FUNC_7 (int ) ;
 struct efa_pd* FUNC_8 (struct ib_pd*) ;

int FUNC_9(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct efa_dev *VAR_3 = FUNC_7(VAR_1->device);
 struct efa_ibv_alloc_pd_resp VAR_4 = {};
 struct efa_com_alloc_pd_result VAR_5;
 struct efa_pd *VAR_6 = FUNC_8(VAR_1);
 int VAR_7;

 if (VAR_2->inlen &&
     !FUNC_4(VAR_2, 0, VAR_2->inlen)) {
  FUNC_5(&VAR_3->ibdev,
     "Incompatible ABI params, udata not cleared\n");
  VAR_7 = -VAR_0;
  goto err_out;
 }

 VAR_7 = FUNC_1(&VAR_3->edev, &VAR_5);
 if (VAR_7)
  goto err_out;

 VAR_6->pdn = VAR_5.pdn;
 VAR_4.pdn = VAR_5.pdn;

 if (VAR_2->outlen) {
  VAR_7 = FUNC_3(VAR_2, &VAR_4,
           FUNC_6(sizeof(VAR_4), VAR_2->outlen));
  if (VAR_7) {
   FUNC_5(&VAR_3->ibdev,
      "Failed to copy udata for alloc_pd\n");
   goto err_dealloc_pd;
  }
 }

 FUNC_5(&VAR_3->ibdev, "Allocated pd[%d]\n", VAR_6->pdn);

 return 0;

err_dealloc_pd:
 FUNC_2(VAR_3, VAR_5.pdn);
err_out:
 FUNC_0(&VAR_3->stats.sw_stats.alloc_pd_err);
 return VAR_7;
}
