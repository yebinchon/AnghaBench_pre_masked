
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_eq {int eqe_buf_pg_sz; TYPE_2__* buf_list; } ;
struct TYPE_3__ {scalar_t__ eqe_hop_num; } ;
struct hns_roce_dev {int dev; TYPE_1__ caps; } ;
struct TYPE_4__ {int map; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_eq*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_1,
    struct hns_roce_eq *VAR_2)
{
 u32 VAR_3;

 VAR_3 = 1 << (VAR_2->eqe_buf_pg_sz + VAR_0);

 if (VAR_1->caps.eqe_hop_num) {
  FUNC_1(VAR_1, VAR_2);
  return;
 }

 FUNC_0(VAR_1->dev, VAR_3, VAR_2->buf_list->buf,
     VAR_2->buf_list->map);
 FUNC_2(VAR_2->buf_list);
}
