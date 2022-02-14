
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct hsi_port {scalar_t__ claimed; int lock; TYPE_1__ device; scalar_t__ shared; int (* release ) (struct hsi_client*) ;} ;
struct hsi_client {scalar_t__ pclaimed; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int) ;
 struct hsi_port* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hsi_client*) ;
 TYPE_2__* FUNC_6 (int ) ;

void FUNC_7(struct hsi_client *VAR_0)
{
 struct hsi_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->lock);

 VAR_1->release(VAR_0);
 if (VAR_0->pclaimed)
  VAR_1->claimed--;
 FUNC_0(VAR_1->claimed < 0);
 VAR_0->pclaimed = 0;
 if (!VAR_1->claimed)
  VAR_1->shared = 0;
 FUNC_2(FUNC_6(VAR_1->device.parent)->owner);
 FUNC_4(&VAR_1->lock);
}
