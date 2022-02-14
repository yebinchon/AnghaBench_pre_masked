
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hns_roce_db_table {TYPE_2__* ext_db; } ;
struct hns_roce_v1_priv {struct hns_roce_db_table db_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {struct TYPE_4__* sdb_buf_list; void* map; void* buf; struct TYPE_4__* odb_buf_list; void* eodb_dep; void* esdb_dep; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (struct device*,int ,void**,int ) ;
 int FUNC_1 (struct device*,int ,void*,void*) ;
 int FUNC_2 (struct hns_roce_dev*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct hns_roce_dev*,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,int ,int ) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ) ;
 int FUNC_6 (struct hns_roce_dev*,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct hns_roce_dev *VAR_14, u32 VAR_15,
    u32 VAR_16)
{
 struct device *VAR_17 = &VAR_14->pdev->dev;
 struct hns_roce_v1_priv *VAR_18;
 struct hns_roce_db_table *VAR_19;
 dma_addr_t VAR_20;
 dma_addr_t VAR_21;
 int VAR_22 = 0;

 VAR_18 = (struct hns_roce_v1_priv *)VAR_14->priv;
 VAR_19 = &VAR_18->db_table;

 VAR_19->ext_db = FUNC_9(sizeof(*VAR_19->ext_db), VAR_1);
 if (!VAR_19->ext_db)
  return -VAR_0;

 if (VAR_15) {
  VAR_19->ext_db->sdb_buf_list = FUNC_9(
    sizeof(*VAR_19->ext_db->sdb_buf_list), VAR_1);
  if (!VAR_19->ext_db->sdb_buf_list) {
   VAR_22 = -VAR_0;
   goto ext_sdb_buf_fail_out;
  }

  VAR_19->ext_db->sdb_buf_list->buf = FUNC_0(VAR_17,
           VAR_9,
           &VAR_20, VAR_1);
  if (!VAR_19->ext_db->sdb_buf_list->buf) {
   VAR_22 = -VAR_0;
   goto alloc_sq_db_buf_fail;
  }
  VAR_19->ext_db->sdb_buf_list->map = VAR_20;

  VAR_19->ext_db->esdb_dep = FUNC_7(VAR_8);
  FUNC_6(VAR_14, VAR_6,
         VAR_7);
 } else
  FUNC_5(VAR_14, VAR_12,
     VAR_13);

 if (VAR_16) {
  VAR_19->ext_db->odb_buf_list = FUNC_9(
    sizeof(*VAR_19->ext_db->odb_buf_list), VAR_1);
  if (!VAR_19->ext_db->odb_buf_list) {
   VAR_22 = -VAR_0;
   goto ext_odb_buf_fail_out;
  }

  VAR_19->ext_db->odb_buf_list->buf = FUNC_0(VAR_17,
           VAR_5,
           &VAR_21, VAR_1);
  if (!VAR_19->ext_db->odb_buf_list->buf) {
   VAR_22 = -VAR_0;
   goto alloc_otr_db_buf_fail;
  }
  VAR_19->ext_db->odb_buf_list->map = VAR_21;

  VAR_19->ext_db->eodb_dep = FUNC_7(VAR_4);
  FUNC_4(VAR_14, VAR_2,
         VAR_3);
 } else
  FUNC_3(VAR_14, VAR_10,
     VAR_11);

 FUNC_2(VAR_14, VAR_15, VAR_16);

 return 0;

alloc_otr_db_buf_fail:
 FUNC_8(VAR_19->ext_db->odb_buf_list);

ext_odb_buf_fail_out:
 if (VAR_15) {
  FUNC_1(VAR_17, VAR_9,
      VAR_19->ext_db->sdb_buf_list->buf,
      VAR_19->ext_db->sdb_buf_list->map);
 }

alloc_sq_db_buf_fail:
 if (VAR_15)
  FUNC_8(VAR_19->ext_db->sdb_buf_list);

ext_sdb_buf_fail_out:
 FUNC_8(VAR_19->ext_db);
 return VAR_22;
}
