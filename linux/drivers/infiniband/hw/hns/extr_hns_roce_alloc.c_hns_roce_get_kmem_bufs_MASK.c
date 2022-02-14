
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_dev {int dev; } ;
struct TYPE_3__ {int map; } ;
struct hns_roce_buf {int npages; int nbufs; int page_shift; TYPE_2__* page_list; TYPE_1__ direct; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;

int FUNC_1(struct hns_roce_dev *VAR_1, dma_addr_t *VAR_2,
      int VAR_3, int VAR_4, struct hns_roce_buf *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_4 + VAR_3;
 if (VAR_7 > VAR_5->npages) {
  FUNC_0(VAR_1->dev,
   "invalid kmem region,offset %d,buf_cnt %d,total %d!\n",
   VAR_4, VAR_3, VAR_5->npages);
  return -VAR_0;
 }

 VAR_8 = 0;
 for (VAR_6 = VAR_4; VAR_6 < VAR_7; VAR_6++)
  if (VAR_5->nbufs == 1)
   VAR_2[VAR_8++] = VAR_5->direct.map +
     ((dma_addr_t)VAR_6 << VAR_5->page_shift);
  else
   VAR_2[VAR_8++] = VAR_5->page_list[VAR_6].map;

 return VAR_8;
}
