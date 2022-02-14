
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int dummy; } ;
struct r10bio {int state; TYPE_1__* mddev; struct bio* master_bio; } ;
struct bio {int bi_status; } ;
struct TYPE_2__ {struct r10conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r10bio*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct r10bio *VAR_2)
{
 struct bio *VAR_3 = VAR_2->master_bio;
 struct r10conf *VAR_4 = VAR_2->mddev->private;

 if (!FUNC_3(VAR_1, &VAR_2->state))
  VAR_3->bi_status = VAR_0;

 FUNC_1(VAR_3);




 FUNC_0(VAR_4);

 FUNC_2(VAR_2);
}
