
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_5__ {int cq_entry_sz; int cqe_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct TYPE_6__ {int mtt_type; } ;
struct hns_roce_cq_buf {TYPE_2__ hr_mtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_umem*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ib_umem*) ;
 scalar_t__ FUNC_2 (struct hns_roce_dev*,int ) ;
 int FUNC_3 (struct hns_roce_dev*,TYPE_2__*,struct ib_umem*) ;
 int FUNC_4 (struct hns_roce_dev*,TYPE_2__*) ;
 int FUNC_5 (struct hns_roce_dev*,int,int,TYPE_2__*) ;
 struct ib_umem* FUNC_6 (struct ib_udata*,int ,int,int ,int) ;
 int FUNC_7 (struct ib_umem*) ;
 int FUNC_8 (struct ib_umem*) ;

__attribute__((used)) static int FUNC_9(struct hns_roce_dev *VAR_5,
       struct ib_udata *VAR_6,
       struct hns_roce_cq_buf *VAR_7,
       struct ib_umem **VAR_8, u64 VAR_9, int VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 *VAR_8 = FUNC_6(VAR_6, VAR_9, VAR_10 * VAR_5->caps.cq_entry_sz,
       VAR_1, 1);
 if (FUNC_0(*VAR_8))
  return FUNC_1(*VAR_8);

 if (FUNC_2(VAR_5, VAR_0))
  VAR_7->hr_mtt.mtt_type = VAR_2;
 else
  VAR_7->hr_mtt.mtt_type = VAR_3;

 if (VAR_5->caps.cqe_buf_pg_sz) {
  VAR_13 = (FUNC_7(*VAR_8) +
   (1 << VAR_5->caps.cqe_buf_pg_sz) - 1) /
   (1 << VAR_5->caps.cqe_buf_pg_sz);
  VAR_12 = VAR_4 + VAR_5->caps.cqe_buf_pg_sz;
  VAR_11 = FUNC_5(VAR_5, VAR_13, VAR_12,
     &VAR_7->hr_mtt);
 } else {
  VAR_11 = FUNC_5(VAR_5, FUNC_7(*VAR_8),
     VAR_4, &VAR_7->hr_mtt);
 }
 if (VAR_11)
  goto err_buf;

 VAR_11 = FUNC_3(VAR_5, &VAR_7->hr_mtt, *VAR_8);
 if (VAR_11)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_4(VAR_5, &VAR_7->hr_mtt);

err_buf:
 FUNC_8(*VAR_8);
 return VAR_11;
}
