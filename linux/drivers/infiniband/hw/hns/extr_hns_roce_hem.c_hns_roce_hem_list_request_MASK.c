
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_hem_list {int bt_pg_shift; int btm_bt; int * mid_bt; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_buf_region {int count; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_buf_region const*,int,int,int ,int *) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_hem_list*,int,struct hns_roce_buf_region const*,int) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_hem_list*) ;

int FUNC_4(struct hns_roce_dev *VAR_3,
         struct hns_roce_hem_list *VAR_4,
         const struct hns_roce_buf_region *VAR_5,
         int VAR_6)
{
 const struct hns_roce_buf_region *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 if (VAR_6 > VAR_2) {
  FUNC_0(VAR_3->dev, "invalid region region_cnt %d!\n",
   VAR_6);
  return -VAR_1;
 }

 VAR_11 = (1 << VAR_4->bt_pg_shift) / VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_7 = &VAR_5[VAR_12];
  if (!VAR_7->count)
   continue;

  VAR_9 = VAR_7->offset + VAR_7->count;
  for (VAR_8 = VAR_7->offset; VAR_8 < VAR_9; VAR_8 += VAR_11) {
   VAR_10 = FUNC_1(VAR_3, VAR_7, VAR_11, VAR_8,
          VAR_4->mid_bt[VAR_12],
          &VAR_4->btm_bt);
   if (VAR_10) {
    FUNC_0(VAR_3->dev,
     "alloc hem trunk fail ret=%d!\n", VAR_10);
    goto err_alloc;
   }
  }
 }

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_11, VAR_5,
         VAR_6);
 if (VAR_10)
  FUNC_0(VAR_3->dev, "alloc hem root fail ret=%d!\n", VAR_10);
 else
  return 0;

err_alloc:
 FUNC_3(VAR_3, VAR_4);

 return VAR_10;
}
