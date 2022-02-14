
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct hns_roce_hem_table {scalar_t__ type; int num_obj; unsigned long obj_size; } ;
struct hns_roce_hem_mhop {unsigned long bt_chunk_size; unsigned long buf_chunk_size; unsigned long l2_idx; unsigned long l1_idx; unsigned long l0_idx; unsigned long ba_l0_num; int hop_num; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,struct hns_roce_hem_mhop*,scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__,int ) ;

int FUNC_3(struct hns_roce_dev *VAR_3,
      struct hns_roce_hem_table *VAR_4, unsigned long *VAR_5,
      struct hns_roce_hem_mhop *VAR_6)
{
 struct device *VAR_7 = VAR_3->dev;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 if (FUNC_1(VAR_3, VAR_6, VAR_4->type))
  return -VAR_1;

 if (!VAR_5)
  return 0;





 VAR_10 = FUNC_2(VAR_4->type, VAR_6->hop_num);
 VAR_8 = VAR_6->bt_chunk_size / VAR_0;
 VAR_11 = VAR_4->type < VAR_2 ? VAR_6->buf_chunk_size :
         VAR_6->bt_chunk_size;
 VAR_9 = (*VAR_5 & (VAR_4->num_obj - 1)) /
       (VAR_11 / VAR_4->obj_size);
 switch (VAR_10) {
 case 3:
  VAR_6->l2_idx = VAR_9 & (VAR_8 - 1);
  VAR_6->l1_idx = VAR_9 / VAR_8 & (VAR_8 - 1);
  VAR_6->l0_idx = (VAR_9 / VAR_8) / VAR_8;
  break;
 case 2:
  VAR_6->l1_idx = VAR_9 & (VAR_8 - 1);
  VAR_6->l0_idx = VAR_9 / VAR_8;
  break;
 case 1:
  VAR_6->l0_idx = VAR_9;
  break;
 default:
  FUNC_0(VAR_7, "Table %d not support hop_num = %d!\n",
        VAR_4->type, VAR_6->hop_num);
  return -VAR_1;
 }
 if (VAR_6->l0_idx >= VAR_6->ba_l0_num)
  VAR_6->l0_idx %= VAR_6->ba_l0_num;

 return 0;
}
