
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int cqe_buf_pg_sz; int cq_entry_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct TYPE_10__ {int page_shift; int npages; } ;
struct TYPE_9__ {int mtt_type; } ;
struct hns_roce_cq_buf {TYPE_5__ hr_buf; TYPE_2__ hr_mtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hns_roce_dev*,int,int,TYPE_5__*,int) ;
 int FUNC_1 (struct hns_roce_dev*,int,TYPE_5__*) ;
 int FUNC_2 (struct hns_roce_dev*,TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (struct hns_roce_dev*,int ) ;
 int FUNC_4 (struct hns_roce_dev*,TYPE_2__*) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_4,
        struct hns_roce_cq_buf *VAR_5, u32 VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_3 + VAR_4->caps.cqe_buf_pg_sz;

 VAR_7 = FUNC_0(VAR_4, VAR_6 * VAR_4->caps.cq_entry_sz,
     (1 << VAR_8) * 2, &VAR_5->hr_buf,
     VAR_8);
 if (VAR_7)
  goto out;

 if (FUNC_3(VAR_4, VAR_0))
  VAR_5->hr_mtt.mtt_type = VAR_1;
 else
  VAR_5->hr_mtt.mtt_type = VAR_2;

 VAR_7 = FUNC_5(VAR_4, VAR_5->hr_buf.npages,
    VAR_5->hr_buf.page_shift, &VAR_5->hr_mtt);
 if (VAR_7)
  goto err_buf;

 VAR_7 = FUNC_2(VAR_4, &VAR_5->hr_mtt, &VAR_5->hr_buf);
 if (VAR_7)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_4(VAR_4, &VAR_5->hr_mtt);

err_buf:
 FUNC_1(VAR_4, VAR_6 * VAR_4->caps.cq_entry_sz,
     &VAR_5->hr_buf);
out:
 return VAR_7;
}
