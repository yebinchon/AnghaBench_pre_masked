
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int backing_dev_info; } ;
struct dm_dev {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct dm_dev *VAR_0, int VAR_1)
{
 struct request_queue *VAR_2 = FUNC_0(VAR_0->bdev);
 return FUNC_1(VAR_2->backing_dev_info, VAR_1);
}
