
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct gb_control {int dummy; } ;
struct gb_connection {TYPE_2__* bundle; scalar_t__ mode_switch; TYPE_1__* intf; int intf_cport_id; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct gb_control* control; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 scalar_t__ FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_control*,int ) ;
 int FUNC_4 (struct gb_control*) ;

__attribute__((used)) static void
FUNC_5(struct gb_connection *VAR_0)
{
 struct gb_control *VAR_1;
 u16 VAR_2 = VAR_0->intf_cport_id;
 int VAR_3;

 if (FUNC_2(VAR_0))
  return;

 VAR_1 = VAR_0->intf->control;

 if (FUNC_1(VAR_0)) {
  if (VAR_0->mode_switch) {
   VAR_3 = FUNC_4(VAR_1);
   if (VAR_3) {




    return;
   }
  }

  return;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_0->bundle->dev,
    "failed to disconnect cport: %d\n", VAR_3);
 }
}
