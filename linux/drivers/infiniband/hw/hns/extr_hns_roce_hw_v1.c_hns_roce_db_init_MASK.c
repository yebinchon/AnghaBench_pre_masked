
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct hns_roce_db_table {void* odb_ext_mod; void* sdb_ext_mod; } ;
struct hns_roce_v1_priv {struct hns_roce_db_table db_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,void*,void*) ;
 int FUNC_2 (struct hns_roce_dev*,void*,void*) ;
 int FUNC_3 (struct hns_roce_db_table*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 struct hns_roce_v1_priv *VAR_6;
 struct hns_roce_db_table *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_6 = (struct hns_roce_v1_priv *)VAR_4->priv;
 VAR_7 = &VAR_6->db_table;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));


 VAR_8 = VAR_2;
 VAR_9 = VAR_0;
 VAR_10 = VAR_3;
 VAR_11 = VAR_1;

 VAR_7->sdb_ext_mod = VAR_8;
 VAR_7->odb_ext_mod = VAR_9;


 VAR_12 = FUNC_1(VAR_4, VAR_8, VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_5, "Failed in extend DB configuration.\n");
  return VAR_12;
 }

 FUNC_2(VAR_4, VAR_10, VAR_11);

 return 0;
}
