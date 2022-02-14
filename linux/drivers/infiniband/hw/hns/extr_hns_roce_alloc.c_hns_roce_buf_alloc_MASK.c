
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_dev {struct device* dev; } ;
struct TYPE_3__ {int map; void* buf; } ;
struct hns_roce_buf {int nbufs; int npages; int page_shift; TYPE_2__* page_list; TYPE_1__ direct; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int map; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*,int,int*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hns_roce_dev*,int,struct hns_roce_buf*) ;
 TYPE_2__* FUNC_3 (int,int,int ) ;

int FUNC_4(struct hns_roce_dev *VAR_3, u32 VAR_4, u32 VAR_5,
         struct hns_roce_buf *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 dma_addr_t VAR_9;
 struct device *VAR_10 = VAR_3->dev;
 u32 VAR_11 = 1 << VAR_7;
 u32 VAR_12;


 if (VAR_4 <= VAR_5) {
  VAR_6->nbufs = 1;

  VAR_12 = FUNC_1(VAR_4);
  if (VAR_12 <= VAR_7 - VAR_2)
   VAR_12 = 0;
  else
   VAR_12 -= VAR_7 - VAR_2;
  VAR_6->npages = 1 << VAR_12;
  VAR_6->page_shift = VAR_7;

  VAR_6->direct.buf = FUNC_0(VAR_10, VAR_4, &VAR_9,
           VAR_1);
  if (!VAR_6->direct.buf)
   return -VAR_0;

  VAR_6->direct.map = VAR_9;

  while (VAR_9 & ((1 << VAR_6->page_shift) - 1)) {
   --VAR_6->page_shift;
   VAR_6->npages *= 2;
  }
 } else {
  VAR_6->nbufs = (VAR_4 + VAR_11 - 1) / VAR_11;
  VAR_6->npages = VAR_6->nbufs;
  VAR_6->page_shift = VAR_7;
  VAR_6->page_list = FUNC_3(VAR_6->nbufs, sizeof(*VAR_6->page_list),
      VAR_1);

  if (!VAR_6->page_list)
   return -VAR_0;

  for (VAR_8 = 0; VAR_8 < VAR_6->nbufs; ++VAR_8) {
   VAR_6->page_list[VAR_8].buf = FUNC_0(VAR_10,
           VAR_11,
           &VAR_9,
           VAR_1);

   if (!VAR_6->page_list[VAR_8].buf)
    goto err_free;

   VAR_6->page_list[VAR_8].map = VAR_9;
  }
 }

 return 0;

err_free:
 FUNC_2(VAR_3, VAR_4, VAR_6);
 return -VAR_0;
}
