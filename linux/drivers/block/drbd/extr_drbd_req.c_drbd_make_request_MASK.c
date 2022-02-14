
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {scalar_t__ queuedata; } ;
struct drbd_device {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drbd_device*,struct bio*,unsigned long) ;
 int FUNC_3 (struct request_queue*,struct bio**) ;
 int FUNC_4 (struct drbd_device*) ;
 unsigned long VAR_1 ;

blk_qc_t FUNC_5(struct request_queue *VAR_2, struct bio *VAR_3)
{
 struct drbd_device *VAR_4 = (struct drbd_device *) VAR_2->queuedata;
 unsigned long VAR_5;

 FUNC_3(VAR_2, &VAR_3);

 VAR_5 = VAR_1;




 FUNC_0(VAR_4, FUNC_1(VAR_3->bi_iter.bi_size, 512));

 FUNC_4(VAR_4);
 FUNC_2(VAR_4, VAR_3, VAR_5);
 return VAR_0;
}
