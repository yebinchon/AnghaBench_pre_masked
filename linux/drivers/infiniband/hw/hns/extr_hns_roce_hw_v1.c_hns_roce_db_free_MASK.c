
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_db_table {TYPE_2__* ext_db; scalar_t__ odb_ext_mod; scalar_t__ sdb_ext_mod; } ;
struct hns_roce_v1_priv {struct hns_roce_db_table db_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* odb_buf_list; int map; int buf; struct TYPE_4__* sdb_buf_list; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 struct hns_roce_v1_priv *VAR_4;
 struct hns_roce_db_table *VAR_5;

 VAR_4 = (struct hns_roce_v1_priv *)VAR_2->priv;
 VAR_5 = &VAR_4->db_table;

 if (VAR_5->sdb_ext_mod) {
  FUNC_0(VAR_3, VAR_1,
      VAR_5->ext_db->sdb_buf_list->buf,
      VAR_5->ext_db->sdb_buf_list->map);
  FUNC_1(VAR_5->ext_db->sdb_buf_list);
 }

 if (VAR_5->odb_ext_mod) {
  FUNC_0(VAR_3, VAR_0,
      VAR_5->ext_db->odb_buf_list->buf,
      VAR_5->ext_db->odb_buf_list->map);
  FUNC_1(VAR_5->ext_db->odb_buf_list);
 }

 FUNC_1(VAR_5->ext_db);
}
