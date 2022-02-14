
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_ucontext {int device; } ;
struct hns_roce_ucontext {int uar; int page_mutex; int page_list; } ;
struct hns_roce_ib_alloc_ucontext_resp {int qp_tab_size; } ;
struct TYPE_2__ {int flags; int num_qps; } ;
struct hns_roce_dev {TYPE_1__ caps; int active; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (struct hns_roce_dev*,int *) ;
 int FUNC_3 (struct ib_udata*,struct hns_roce_ib_alloc_ucontext_resp*,int) ;
 int FUNC_4 (int *) ;
 struct hns_roce_dev* FUNC_5 (int ) ;
 struct hns_roce_ucontext* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_2,
       struct ib_udata *VAR_3)
{
 int VAR_4;
 struct hns_roce_ucontext *VAR_5 = FUNC_6(VAR_2);
 struct hns_roce_ib_alloc_ucontext_resp VAR_6 = {};
 struct hns_roce_dev *VAR_7 = FUNC_5(VAR_2->device);

 if (!VAR_7->active)
  return -VAR_0;

 VAR_6.qp_tab_size = VAR_7->caps.num_qps;

 VAR_4 = FUNC_1(VAR_7, &VAR_5->uar);
 if (VAR_4)
  goto error_fail_uar_alloc;

 if (VAR_7->caps.flags & VAR_1) {
  FUNC_0(&VAR_5->page_list);
  FUNC_4(&VAR_5->page_mutex);
 }

 VAR_4 = FUNC_3(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_4)
  goto error_fail_copy_to_udata;

 return 0;

error_fail_copy_to_udata:
 FUNC_2(VAR_7, &VAR_5->uar);

error_fail_uar_alloc:
 return VAR_4;
}
