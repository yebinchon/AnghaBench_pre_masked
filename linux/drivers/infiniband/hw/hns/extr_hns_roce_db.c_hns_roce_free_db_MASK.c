
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_dev {int pgdir_mutex; int dev; } ;
struct TYPE_3__ {TYPE_2__* pgdir; } ;
struct hns_roce_db {int order; int index; TYPE_1__ u; } ;
struct TYPE_4__ {int list; int db_dma; int page; int order1; int * bits; int order0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ) ;

void FUNC_9(struct hns_roce_dev *VAR_3, struct hns_roce_db *VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_5(&VAR_3->pgdir_mutex);

 VAR_5 = VAR_4->order;
 VAR_6 = VAR_4->index;

 if (VAR_4->order == 0 && FUNC_8(VAR_6 ^ 1, VAR_4->u.pgdir->order0)) {
  FUNC_1(VAR_6 ^ 1, VAR_4->u.pgdir->order0);
  ++VAR_5;
 }

 VAR_6 >>= VAR_5;
 FUNC_7(VAR_6, VAR_4->u.pgdir->bits[VAR_5]);

 if (FUNC_0(VAR_4->u.pgdir->order1,
   VAR_0 / VAR_1)) {
  FUNC_2(VAR_3->dev, VAR_2, VAR_4->u.pgdir->page,
      VAR_4->u.pgdir->db_dma);
  FUNC_4(&VAR_4->u.pgdir->list);
  FUNC_3(VAR_4->u.pgdir);
 }

 FUNC_6(&VAR_3->pgdir_mutex);
}
