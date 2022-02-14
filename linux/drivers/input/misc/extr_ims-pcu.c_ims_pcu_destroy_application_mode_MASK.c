
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ims_pcu {int setup_complete; scalar_t__ device_id; TYPE_1__* dev; scalar_t__ gamepad; } ;
struct TYPE_2__ {int kobj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ims_pcu*) ;
 int FUNC_1 (struct ims_pcu*) ;
 int FUNC_2 (struct ims_pcu*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct ims_pcu *VAR_2)
{
 if (VAR_2->setup_complete) {
  VAR_2->setup_complete = 0;
  FUNC_3();

  if (VAR_2->gamepad)
   FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);

  if (VAR_2->device_id != VAR_0)
   FUNC_4(&VAR_2->dev->kobj,
        &VAR_1);
 }
}
