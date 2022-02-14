
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct fsi_master_hub {TYPE_3__ master; int size; int addr; TYPE_1__* upstream; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int slave; } ;


 struct fsi_master_hub* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct fsi_master_hub *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->master);
 FUNC_2(VAR_1->upstream->slave, VAR_1->addr, VAR_1->size);
 FUNC_3(VAR_1->master.dev.of_node);





 FUNC_4(&VAR_1->master.dev);

 return 0;
}
