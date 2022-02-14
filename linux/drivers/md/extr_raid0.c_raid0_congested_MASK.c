
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct r0conf {TYPE_1__* strip_zone; struct md_rdev** devlist; } ;
struct mddev {struct r0conf* private; } ;
struct md_rdev {int bdev; } ;
struct TYPE_2__ {int nb_dev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct mddev *VAR_0, int VAR_1)
{
 struct r0conf *VAR_2 = VAR_0->private;
 struct md_rdev **VAR_3 = VAR_2->devlist;
 int VAR_4 = VAR_2->strip_zone[0].nb_dev;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4 && !VAR_6 ; VAR_5++) {
  struct request_queue *VAR_7 = FUNC_0(VAR_3[VAR_5]->bdev);

  VAR_6 |= FUNC_1(VAR_7->backing_dev_info, VAR_1);
 }
 return VAR_6;
}
