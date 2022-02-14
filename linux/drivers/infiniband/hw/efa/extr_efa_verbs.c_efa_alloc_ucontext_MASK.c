
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_udata {scalar_t__ outlen; } ;
struct ib_ucontext {int device; } ;
struct efa_ucontext {int mmap_xa; int uarn; } ;
struct efa_ibv_alloc_ucontext_resp {int max_llq_size; int inline_buf_size; int sub_cqs_per_cq; int cmds_supp_udata_mask; } ;
struct TYPE_5__ {int alloc_ucontext_err; } ;
struct TYPE_6__ {TYPE_2__ sw_stats; } ;
struct TYPE_4__ {int max_llq_size; int inline_buf_size; int sub_cqs_per_cq; } ;
struct efa_dev {TYPE_3__ stats; TYPE_1__ dev_attr; int edev; } ;
struct efa_com_alloc_uar_result {int uarn; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct efa_com_alloc_uar_result*) ;
 int FUNC_2 (struct efa_dev*,int ) ;
 int FUNC_3 (struct ib_udata*,struct efa_ibv_alloc_ucontext_resp*,int ) ;
 int FUNC_4 (int,scalar_t__) ;
 struct efa_dev* FUNC_5 (int ) ;
 struct efa_ucontext* FUNC_6 (struct ib_ucontext*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ib_ucontext *VAR_2, struct ib_udata *VAR_3)
{
 struct efa_ucontext *VAR_4 = FUNC_6(VAR_2);
 struct efa_dev *VAR_5 = FUNC_5(VAR_2->device);
 struct efa_ibv_alloc_ucontext_resp VAR_6 = {};
 struct efa_com_alloc_uar_result VAR_7;
 int VAR_8;






 VAR_8 = FUNC_1(&VAR_5->edev, &VAR_7);
 if (VAR_8)
  goto err_out;

 VAR_4->uarn = VAR_7.uarn;
 FUNC_7(&VAR_4->mmap_xa);

 VAR_6.cmds_supp_udata_mask |= VAR_1;
 VAR_6.cmds_supp_udata_mask |= VAR_0;
 VAR_6.sub_cqs_per_cq = VAR_5->dev_attr.sub_cqs_per_cq;
 VAR_6.inline_buf_size = VAR_5->dev_attr.inline_buf_size;
 VAR_6.max_llq_size = VAR_5->dev_attr.max_llq_size;

 if (VAR_3 && VAR_3->outlen) {
  VAR_8 = FUNC_3(VAR_3, &VAR_6,
           FUNC_4(sizeof(VAR_6), VAR_3->outlen));
  if (VAR_8)
   goto err_dealloc_uar;
 }

 return 0;

err_dealloc_uar:
 FUNC_2(VAR_5, VAR_7.uarn);
err_out:
 FUNC_0(&VAR_5->stats.sw_stats.alloc_ucontext_err);
 return VAR_8;
}
