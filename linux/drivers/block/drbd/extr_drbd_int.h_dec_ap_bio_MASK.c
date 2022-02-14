
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int w; } ;
struct drbd_device {int misc_wait; TYPE_2__ bm_io_work; int flags; int ap_bio_cnt; } ;
struct TYPE_6__ {TYPE_1__* connection; } ;
struct TYPE_4__ {int sender_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_3__* FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void FUNC_8(struct drbd_device *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_1(&VAR_2->ap_bio_cnt);

 FUNC_0(VAR_2, VAR_4 >= 0);

 if (VAR_4 == 0 && FUNC_6(VAR_0, &VAR_2->flags)) {
  if (!FUNC_5(VAR_1, &VAR_2->flags))
   FUNC_3(&FUNC_4(VAR_2)->
    connection->sender_work,
    &VAR_2->bm_io_work.w);
 }




 if (VAR_4 < VAR_3)
  FUNC_7(&VAR_2->misc_wait);
}
