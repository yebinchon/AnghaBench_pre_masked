
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {int dummy; } ;
struct cougar {scalar_t__ special_intf; TYPE_1__* shared; } ;
struct TYPE_2__ {int enabled; } ;


 struct cougar* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_0)
{
 struct cougar *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1) {

  if (VAR_1->shared)
   VAR_1->shared->enabled = 0;
  if (VAR_1->special_intf)
   FUNC_1(VAR_0);
 }
 FUNC_2(VAR_0);
}
