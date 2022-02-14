
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uresp ;
struct mthca_ucontext {scalar_t__ reg_mr_warned; int uar; int db_tab; } ;
struct mthca_alloc_ucontext_resp {scalar_t__ uarc_size; int qp_tab_size; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ uarc_size; } ;
struct TYPE_9__ {int num_qps; } ;
struct TYPE_11__ {TYPE_2__ uar_table; TYPE_1__ limits; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ib_udata*,struct mthca_alloc_ucontext_resp*,int) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_8 (struct ib_device*) ;
 struct mthca_ucontext* FUNC_9 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_10(struct ib_ucontext *VAR_2,
    struct ib_udata *VAR_3)
{
 struct ib_device *VAR_4 = VAR_2->device;
 struct mthca_alloc_ucontext_resp VAR_5 = {};
 struct mthca_ucontext *VAR_6 = FUNC_9(VAR_2);
 int VAR_7;

 if (!(FUNC_8(VAR_4)->active))
  return -VAR_0;

 VAR_5.qp_tab_size = FUNC_8(VAR_4)->limits.num_qps;
 if (FUNC_5(FUNC_8(VAR_4)))
  VAR_5.uarc_size = FUNC_8(VAR_4)->uar_table.uarc_size;
 else
  VAR_5.uarc_size = 0;

 VAR_7 = FUNC_6(FUNC_8(VAR_4), &VAR_6->uar);
 if (VAR_7)
  return VAR_7;

 VAR_6->db_tab = FUNC_4(FUNC_8(VAR_4));
 if (FUNC_0(VAR_6->db_tab)) {
  VAR_7 = FUNC_1(VAR_6->db_tab);
  FUNC_7(FUNC_8(VAR_4), &VAR_6->uar);
  return VAR_7;
 }

 if (FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5))) {
  FUNC_3(FUNC_8(VAR_4), &VAR_6->uar, VAR_6->db_tab);
  FUNC_7(FUNC_8(VAR_4), &VAR_6->uar);
  return -VAR_1;
 }

 VAR_6->reg_mr_warned = 0;

 return 0;
}
