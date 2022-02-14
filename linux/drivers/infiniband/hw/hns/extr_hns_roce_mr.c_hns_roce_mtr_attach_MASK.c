
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_mtr {int hem_list; } ;
struct hns_roce_dev {int dev; } ;
struct hns_roce_buf_region {int offset; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,char*,int,int,int,int ) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (struct hns_roce_dev*,int *,struct hns_roce_buf_region*,int) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_mtr*,int *,struct hns_roce_buf_region*) ;

int FUNC_4(struct hns_roce_dev *VAR_0, struct hns_roce_mtr *VAR_1,
   dma_addr_t **VAR_2, struct hns_roce_buf_region *VAR_3,
   int VAR_4)
{
 struct hns_roce_buf_region *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_0, &VAR_1->hem_list, VAR_3,
     VAR_4);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5 = &VAR_3[VAR_7];
  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2[VAR_7], VAR_5);
  if (VAR_6) {
   FUNC_0(VAR_0->dev,
    "write mtr[%d/%d] err %d,offset=%d.\n",
    VAR_7, VAR_4, VAR_6, VAR_5->offset);
   goto err_write;
  }
 }

 return 0;

err_write:
 FUNC_1(VAR_0, &VAR_1->hem_list);

 return VAR_6;
}
