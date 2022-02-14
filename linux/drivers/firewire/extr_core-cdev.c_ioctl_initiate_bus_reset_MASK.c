
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
union ioctl_arg {TYPE_2__ initiate_bus_reset; } ;
struct client {TYPE_1__* device; } ;
struct TYPE_3__ {int card; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct client *VAR_1, union ioctl_arg *VAR_2)
{
 FUNC_0(VAR_1->device->card, 1,
   VAR_2->initiate_bus_reset.type == VAR_0);
 return 0;
}
