
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_db_table {TYPE_3__* ext_db; } ;
struct hns_roce_v1_priv {struct hns_roce_db_table db_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_6__ {int esdb_dep; TYPE_2__* sdb_buf_list; } ;
struct TYPE_5__ {int map; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hns_roce_dev*,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hns_roce_dev *VAR_8, u32 VAR_9,
     u32 VAR_10)
{
 struct device *VAR_11 = &VAR_8->pdev->dev;
 struct hns_roce_v1_priv *VAR_12;
 struct hns_roce_db_table *VAR_13;
 dma_addr_t VAR_14;
 __le32 VAR_15;
 u32 VAR_16;

 VAR_12 = (struct hns_roce_v1_priv *)VAR_8->priv;
 VAR_13 = &VAR_12->db_table;


 FUNC_5(VAR_8, VAR_6, VAR_9);
 FUNC_5(VAR_8, VAR_7, VAR_10);


 VAR_14 = VAR_13->ext_db->sdb_buf_list->map;
 FUNC_5(VAR_8, VAR_5, (u32)(VAR_14 >> 12));


 VAR_16 = FUNC_3(VAR_8, VAR_4);
 VAR_15 = FUNC_0(VAR_16);
 FUNC_4(VAR_15, VAR_2,
         VAR_3,
         VAR_13->ext_db->esdb_dep);





 FUNC_4(VAR_15, VAR_0,
         VAR_1, VAR_14 >> 44);
 VAR_16 = FUNC_2(VAR_15);
 FUNC_5(VAR_8, VAR_4, VAR_16);

 FUNC_1(VAR_11, "ext SDB depth: 0x%x\n", VAR_13->ext_db->esdb_dep);
 FUNC_1(VAR_11, "ext SDB threshold: epmty: 0x%x, ful: 0x%x\n",
  VAR_9, VAR_10);
}
