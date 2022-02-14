
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_buf_region {int count; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int) ;
 int * FUNC_1 (int ,int,int ) ;

int FUNC_2(struct hns_roce_buf_region *VAR_2,
       dma_addr_t **VAR_3, int VAR_4)
{
 struct hns_roce_buf_region *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = &VAR_2[VAR_6];
  VAR_3[VAR_6] = FUNC_1(VAR_5->count, sizeof(dma_addr_t), VAR_1);
  if (!VAR_3[VAR_6])
   goto err_alloc;
 }

 return 0;

err_alloc:
 FUNC_0(VAR_3, VAR_6);

 return -VAR_0;
}
