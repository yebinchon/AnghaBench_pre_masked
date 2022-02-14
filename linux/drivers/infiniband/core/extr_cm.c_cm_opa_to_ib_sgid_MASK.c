
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sa_path_rec {union ib_gid sgid; } ;
struct ib_device {int dev; } ;
struct cm_work {TYPE_2__* port; } ;
struct TYPE_4__ {int port_num; TYPE_1__* cm_dev; } ;
struct TYPE_3__ {struct ib_device* ib_device; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (union ib_gid*) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;
 scalar_t__ FUNC_3 (struct ib_device*,int ,int ,union ib_gid*) ;

__attribute__((used)) static void FUNC_4(struct cm_work *VAR_0,
         struct sa_path_rec *VAR_1)
{
 struct ib_device *VAR_2 = VAR_0->port->cm_dev->ib_device;
 u8 VAR_3 = VAR_0->port->port_num;

 if (FUNC_2(VAR_2, VAR_3) &&
     (FUNC_1(&VAR_1->sgid))) {
  union ib_gid VAR_4;

  if (FUNC_3(VAR_2, VAR_3, 0, &VAR_4)) {
   FUNC_0(&VAR_2->dev,
     "Error updating sgid in CM request\n");
   return;
  }

  VAR_1->sgid = VAR_4;
 }
}
