
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multipath_bh {TYPE_1__* mddev; struct bio* master_bio; } ;
struct mpconf {int pool; } ;
struct bio {int bi_status; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct mpconf* private; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct multipath_bh*,int *) ;

__attribute__((used)) static void FUNC_2(struct multipath_bh *VAR_0, blk_status_t VAR_1)
{
 struct bio *VAR_2 = VAR_0->master_bio;
 struct mpconf *VAR_3 = VAR_0->mddev->private;

 VAR_2->bi_status = VAR_1;
 FUNC_0(VAR_2);
 FUNC_1(VAR_0, &VAR_3->pool);
}
