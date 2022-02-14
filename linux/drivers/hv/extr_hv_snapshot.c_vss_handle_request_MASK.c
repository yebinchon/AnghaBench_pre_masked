
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_8__ {int recv_channel; TYPE_3__* msg; int state; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int operation; } ;
struct TYPE_7__ {TYPE_2__ dm_info; TYPE_1__ vss_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_5)
{
 switch (VAR_4.msg->vss_hdr.operation) {







 case 128:
 case 131:
 case 129:
  if (VAR_4.state < VAR_1) {

   FUNC_1("VSS: Not ready for request.\n");
   FUNC_2(VAR_2);
   return;
  }

  FUNC_1("VSS: Received request for op code: %d\n",
   VAR_4.msg->vss_hdr.operation);
  VAR_4.state = VAR_0;
  FUNC_3();
  return;
 case 130:
  VAR_4.msg->dm_info.flags = 0;
  break;
 default:
  break;
 }

 FUNC_2(0);
 FUNC_0(VAR_4.recv_channel, VAR_3);
}
