
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns_roce_uar {int index; } ;
struct TYPE_4__ {int flags; } ;
struct hns_roce_dev {TYPE_1__ caps; scalar_t__ odb_offset; scalar_t__ reg_base; struct hns_roce_uar priv_uar; struct device* dev; } ;
struct TYPE_5__ {scalar_t__* db_record; } ;
struct hns_roce_cq {int db_en; TYPE_2__ db; scalar_t__ cq_db_l; int hr_buf; scalar_t__* set_ci_db; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,TYPE_2__*,int) ;
 int FUNC_2 (struct hns_roce_dev*,TYPE_2__*) ;
 int FUNC_3 (struct hns_roce_dev*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_2,
       struct hns_roce_cq *VAR_3, int VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 struct hns_roce_uar *VAR_6;
 int VAR_7;

 if (VAR_2->caps.flags & VAR_1) {
  VAR_7 = FUNC_1(VAR_2, &VAR_3->db, 1);
  if (VAR_7)
   return VAR_7;

  VAR_3->set_ci_db = VAR_3->db.db_record;
  *VAR_3->set_ci_db = 0;
  VAR_3->db_en = 1;
 }


 VAR_7 = FUNC_3(VAR_2, &VAR_3->hr_buf, VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_5, "Failed to alloc_cq_buf.\n");
  goto err_db;
 }

 VAR_6 = &VAR_2->priv_uar;
 VAR_3->cq_db_l = VAR_2->reg_base + VAR_2->odb_offset +
    VAR_0 * VAR_6->index;

 return 0;

err_db:
 if (VAR_2->caps.flags & VAR_1)
  FUNC_2(VAR_2, &VAR_3->db);

 return VAR_7;
}
