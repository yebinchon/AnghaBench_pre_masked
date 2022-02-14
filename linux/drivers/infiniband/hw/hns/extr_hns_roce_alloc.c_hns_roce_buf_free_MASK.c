
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_dev {struct device* dev; } ;
struct TYPE_3__ {int map; scalar_t__ buf; } ;
struct hns_roce_buf {int nbufs; int page_shift; TYPE_2__* page_list; TYPE_1__ direct; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int map; scalar_t__ buf; } ;


 int FUNC_0 (struct device*,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct hns_roce_dev *VAR_0, u32 VAR_1,
         struct hns_roce_buf *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_0->dev;

 if (VAR_2->nbufs == 1) {
  FUNC_0(VAR_4, VAR_1, VAR_2->direct.buf, VAR_2->direct.map);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_2->nbufs; ++VAR_3)
   if (VAR_2->page_list[VAR_3].buf)
    FUNC_0(VAR_4, 1 << VAR_2->page_shift,
        VAR_2->page_list[VAR_3].buf,
        VAR_2->page_list[VAR_3].map);
  FUNC_1(VAR_2->page_list);
 }
}
