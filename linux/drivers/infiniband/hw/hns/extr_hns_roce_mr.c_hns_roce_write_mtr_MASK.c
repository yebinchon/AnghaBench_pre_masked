
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hns_roce_mtr {int hem_list; } ;
struct hns_roce_dev {scalar_t__ hw_rev; } ;
struct hns_roce_buf_region {int offset; int count; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (struct hns_roce_dev*,int *,int,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_3,
         struct hns_roce_mtr *VAR_4, dma_addr_t *VAR_5,
         struct hns_roce_buf_region *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 u64 *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_7 = VAR_6->offset;
 VAR_11 = VAR_7 + VAR_6->count;
 VAR_9 = 0;
 while (VAR_7 < VAR_11) {
  VAR_10 = FUNC_0(VAR_3, &VAR_4->hem_list,
        VAR_7, &VAR_8, ((void*)0));
  if (!VAR_10)
   return -VAR_0;


  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   if (VAR_3->hw_rev == VAR_1)
    VAR_10[VAR_12] = VAR_5[VAR_9] >> VAR_2;
   else
    VAR_10[VAR_12] = VAR_5[VAR_9];

   VAR_9++;
  }
  VAR_7 += VAR_8;
 }

 return 0;
}
