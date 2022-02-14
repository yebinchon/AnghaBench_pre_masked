
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnet_peer {int generation; TYPE_1__* dev; int node_id; } ;
struct fw_unit {int device; } ;
struct fw_device {int generation; int node_id; } ;
struct TYPE_2__ {int lock; } ;


 struct fwnet_peer* FUNC_0 (int *) ;
 struct fw_device* FUNC_1 (struct fw_unit*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fw_unit *VAR_0)
{
 struct fw_device *VAR_1 = FUNC_1(VAR_0);
 struct fwnet_peer *VAR_2 = FUNC_0(&VAR_0->device);
 int VAR_3;

 VAR_3 = VAR_1->generation;

 FUNC_2(&VAR_2->dev->lock);
 VAR_2->node_id = VAR_1->node_id;
 VAR_2->generation = VAR_3;
 FUNC_3(&VAR_2->dev->lock);
}
