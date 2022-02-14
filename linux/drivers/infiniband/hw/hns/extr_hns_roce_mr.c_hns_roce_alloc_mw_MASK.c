
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mw {int type; int rkey; } ;
struct hns_roce_mw {struct ib_mw ibmw; int pbl_buf_pg_sz; int pbl_ba_pg_sz; int pbl_hop_num; int pdn; int rkey; } ;
struct TYPE_5__ {int pbl_buf_pg_sz; int pbl_ba_pg_sz; int pbl_hop_num; } ;
struct TYPE_4__ {int mtpt_bitmap; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__ mr_table; } ;
typedef enum ib_mw_type { ____Placeholder_ib_mw_type } ib_mw_type ;
struct TYPE_6__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_mw*) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_mw*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct hns_roce_mw*) ;
 struct hns_roce_mw* FUNC_6 (int,int ) ;
 struct hns_roce_dev* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (struct ib_pd*) ;

struct ib_mw *FUNC_9(struct ib_pd *VAR_2, enum ib_mw_type VAR_3,
    struct ib_udata *VAR_4)
{
 struct hns_roce_dev *VAR_5 = FUNC_7(VAR_2->device);
 struct hns_roce_mw *VAR_6;
 unsigned long VAR_7 = 0;
 int VAR_8;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);


 VAR_8 = FUNC_1(&VAR_5->mr_table.mtpt_bitmap, &VAR_7);
 if (VAR_8)
  goto err_bitmap;

 VAR_6->rkey = FUNC_4(VAR_7);

 VAR_6->ibmw.rkey = VAR_6->rkey;
 VAR_6->ibmw.type = VAR_3;
 VAR_6->pdn = FUNC_8(VAR_2)->pdn;
 VAR_6->pbl_hop_num = VAR_5->caps.pbl_hop_num;
 VAR_6->pbl_ba_pg_sz = VAR_5->caps.pbl_ba_pg_sz;
 VAR_6->pbl_buf_pg_sz = VAR_5->caps.pbl_buf_pg_sz;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8)
  goto err_mw;

 return &VAR_6->ibmw;

err_mw:
 FUNC_3(VAR_5, VAR_6);

err_bitmap:
 FUNC_5(VAR_6);

 return FUNC_0(VAR_8);
}
