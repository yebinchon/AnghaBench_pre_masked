
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct i40iw_msix_vector {int idx; int irq; } ;
struct TYPE_5__ {int max_ceqs; } ;
struct TYPE_6__ {int ceq_valid; TYPE_2__ hmc_fpm_misc; } ;
struct i40iw_device {TYPE_3__ sc_dev; struct i40iw_ceq* ceqlist; int ceqs_count; struct i40iw_msix_vector* iw_msixtbl; scalar_t__ msix_shared; int msix_count; int iw_qvlist; } ;
struct i40iw_ceq {int msix_idx; int irq; } ;
struct i40e_info {TYPE_1__* ops; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int (* setup_qvlist ) (struct i40e_info*,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40iw_device*,struct i40iw_ceq*,size_t,struct i40iw_msix_vector*) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_ceq*,size_t) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_ceq*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char*,int) ;
 struct i40iw_ceq* FUNC_5 (size_t,int,int ) ;
 int FUNC_6 (struct i40iw_ceq*) ;
 size_t FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i40e_info*,int *,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_9(struct i40iw_device *VAR_4,
            struct i40e_info *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 struct i40iw_ceq *VAR_8;
 struct i40iw_msix_vector *VAR_9;
 enum i40iw_status_code VAR_10 = 0;
 u32 VAR_11;

 if (VAR_5 && VAR_5->ops && VAR_5->ops->setup_qvlist) {
  VAR_10 = VAR_5->ops->setup_qvlist(VAR_5, &VAR_3,
       VAR_4->iw_qvlist);
  if (VAR_10)
   goto exit;
 } else {
  VAR_10 = VAR_1;
  goto exit;
 }

 VAR_11 = FUNC_7(VAR_4->msix_count, VAR_4->sc_dev.hmc_fpm_misc.max_ceqs);
 VAR_4->ceqlist = FUNC_5(VAR_11, sizeof(*VAR_4->ceqlist), VAR_0);
 if (!VAR_4->ceqlist) {
  VAR_10 = VAR_2;
  goto exit;
 }
 VAR_6 = (VAR_4->msix_shared) ? 0 : 1;
 for (VAR_7 = 0; VAR_6 < VAR_11; VAR_6++, VAR_7++) {
  VAR_8 = &VAR_4->ceqlist[VAR_7];
  VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_7);
  if (VAR_10) {
   FUNC_4("create ceq status = %d\n", VAR_10);
   break;
  }

  VAR_9 = &VAR_4->iw_msixtbl[VAR_6];
  VAR_8->irq = VAR_9->irq;
  VAR_8->msix_idx = VAR_9->idx;
  VAR_10 = FUNC_0(VAR_4, VAR_8, VAR_7, VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_4, VAR_8);
   break;
  }
  FUNC_3(&VAR_4->sc_dev, VAR_9->idx);
  VAR_4->ceqs_count++;
 }
exit:
 if (VAR_10 && !VAR_4->ceqs_count) {
  FUNC_6(VAR_4->ceqlist);
  VAR_4->ceqlist = ((void*)0);
  return VAR_10;
 } else {
  VAR_4->sc_dev.ceq_valid = 1;
  return 0;
 }

}
