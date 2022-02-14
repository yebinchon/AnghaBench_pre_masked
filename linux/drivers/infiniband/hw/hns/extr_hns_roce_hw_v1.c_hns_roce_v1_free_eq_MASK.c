
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_eq {int eqe_size; int entries; TYPE_2__* buf_list; } ;
struct hns_roce_dev {TYPE_1__* pdev; } ;
struct TYPE_4__ {int map; int buf; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_1,
    struct hns_roce_eq *VAR_2)
{
 int VAR_3 = (FUNC_0(VAR_2->eqe_size * VAR_2->entries) +
        VAR_0 - 1) / VAR_0;
 int VAR_4;

 if (!VAR_2->buf_list)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  FUNC_1(&VAR_1->pdev->dev, VAR_0,
      VAR_2->buf_list[VAR_4].buf, VAR_2->buf_list[VAR_4].map);

 FUNC_2(VAR_2->buf_list);
}
