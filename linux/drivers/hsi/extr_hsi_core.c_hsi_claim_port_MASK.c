
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct hsi_port {int shared; int lock; scalar_t__ claimed; TYPE_1__ device; } ;
struct hsi_client {int pclaimed; } ;
struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hsi_port* FUNC_0 (struct hsi_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct hsi_client *VAR_2, unsigned int VAR_3)
{
 struct hsi_port *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 FUNC_1(&VAR_4->lock);
 if ((VAR_4->claimed) && (!VAR_4->shared || !VAR_3)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 if (!FUNC_4(FUNC_3(VAR_4->device.parent)->owner)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 VAR_4->claimed++;
 VAR_4->shared = !!VAR_3;
 VAR_2->pclaimed = 1;
out:
 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
