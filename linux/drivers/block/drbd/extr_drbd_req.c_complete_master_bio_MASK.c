
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {int dummy; } ;
struct bio_and_error {TYPE_1__* bio; int error; } ;
struct TYPE_2__ {int bi_status; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct drbd_device *VAR_0,
  struct bio_and_error *VAR_1)
{
 VAR_1->bio->bi_status = FUNC_2(VAR_1->error);
 FUNC_0(VAR_1->bio);
 FUNC_1(VAR_0);
}
