
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct fpga_manager {TYPE_2__ dev; int name; TYPE_1__* mops; int state; } ;
struct TYPE_4__ {int (* state ) (struct fpga_manager*) ;} ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct fpga_manager*) ;

int FUNC_4(struct fpga_manager *VAR_1)
{
 int VAR_2;






 VAR_1->state = VAR_1->mops->state(VAR_1);

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (VAR_2)
  goto error_device;

 FUNC_0(&VAR_1->dev, "%s registered\n", VAR_1->name);

 return 0;

error_device:
 FUNC_2(&VAR_0, VAR_1->dev.id);

 return VAR_2;
}
